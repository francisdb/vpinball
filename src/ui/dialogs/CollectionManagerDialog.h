// license:GPLv3+

#pragma once

class CollectionDialogStruct final
{
public:
    Collection *pcol;
    PinTable *ppt;
};

class CollectionManagerDialog final : public CDialog
{
public:
    CollectionManagerDialog();

protected:
    virtual BOOL OnInitDialog();
    virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
    virtual void OnOK();
    virtual void OnClose();
    virtual void OnCancel();

private:
    void EditCollection();
    void LoadPosition();
    void SavePosition();

    HWND hListHwnd;
    static int m_columnSortOrder;
};

class CollectionDialog : public CDialog
{
public:
    CollectionDialog(CollectionDialogStruct &pcds);

protected:
    virtual BOOL OnInitDialog();
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
    virtual void OnOK();

private:
    CollectionDialogStruct &pCurCollection;
};
