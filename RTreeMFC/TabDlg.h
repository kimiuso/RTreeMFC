#pragma once


// CTabDlg �Ի���

class CTabDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTabDlg)

public:
	CTabDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTabDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TABDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
