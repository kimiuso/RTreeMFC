#pragma once


// CTab1 �Ի���

class CTab1 : public CDialogEx
{
	DECLARE_DYNAMIC(CTab1)

public:
	CTab1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTab1();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB1DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
public:
	CPoint m_ptOrigin;
	CPoint m_ptOld;
	bool m_bDraw = false;
	bool m_bFirstDraw = false;
	CRect m_rect;
};
