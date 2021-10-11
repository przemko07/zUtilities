// Supported with union (c) 2020 Union team
// Union HEADER file

namespace GOTHIC_ENGINE {
  class PlayerHelper
  {
  public:
    bool isSaving = false;

    bool IsBusy() {
      return IsInInfo() || OnPause() || player->inventory2.IsOpen();
    }

    bool IsInInfo() {
      return !oCInformationManager::GetInformationManager().HasFinished();
    }

    bool OnPause() {
      return ogame->IsOnPause();
    }

    bool IsSaving() {
      return isSaving;
    }

    bool IsInCombat() {
      if ( player->IsDead() )
        return false;

      if ( player->enemy )
        return true;

      return false;
    }
  };
}