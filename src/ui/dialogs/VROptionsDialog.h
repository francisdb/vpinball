// license:GPLv3+

#pragma once

class VROptionsDialog final : public CDialog
{
public:
   VROptionsDialog();

protected:
   virtual BOOL OnInitDialog();
   virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
   virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
   virtual void OnOK();
   virtual void OnDestroy();

private:
   void AddToolTip(const char * const text, HWND parentHwnd, HWND toolTipHwnd, HWND controlHwnd);
   void ResetVideoPreferences();
   void SetValue(int nID, const Settings::Section& section, const string& key);
   void StartTimer(int nID);

   ColorButton m_colorKey;
   CColorDialog m_colorDialog;
};
