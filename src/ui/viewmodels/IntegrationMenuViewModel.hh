#ifndef RA_UI_INTEGRATIONMENUVIEWMODEL_H
#define RA_UI_INTEGRATIONMENUVIEWMODEL_H
#pragma once

#include "ui/viewmodels/LookupItemViewModel.hh"

namespace ra {
namespace ui {
namespace viewmodels {

class IntegrationMenuViewModel
{
public:
    static void BuildMenu(LookupItemViewModelCollection& vmMenu);

    static void ActivateMenuItem(int nMenuItemId);

private:
    static void BuildMenuLoggedIn(LookupItemViewModelCollection& vmMenu);
    static void BuildMenuLoggedOut(LookupItemViewModelCollection& vmMenu);

    static void Login();
    static void Logout();
    static void OpenUserPage();
    static void OpenGamePage();
    static void ToggleHardcoreMode();
    static void ToggleNonHardcoreWarning();
    static void ToggleLeaderboards();
    static void ShowOverlaySettings();
    static void ShowAssetList();
    static void ShowAssetEditor();
    static void ShowMemoryInspector();
    static void ShowMemoryBookmarks();
    static void ShowRichPresenceMonitor();
    static void ReportBrokenAchievements();
    static void ShowGameHash();
};

} // namespace viewmodels
} // namespace ui
} // namespace ra

#endif !RA_UI_INTEGRATIONMENUVIEWMODEL_H