
// RTreeMFCDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "Tab1.h"
#include "TabDlg.h"


// CRTreeMFCDlg �Ի���
class CRTreeMFCDlg : public CDialogEx
{
// ����
public:
	CRTreeMFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RTREEMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	CTabDlg m_tabdlg1;
	CTab1 m_tab1dlg;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
