// TabDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RTreeMFC.h"
#include "TabDlg.h"
#include "afxdialogex.h"


// CTabDlg �Ի���

IMPLEMENT_DYNAMIC(CTabDlg, CDialogEx)

CTabDlg::CTabDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TABDLG, pParent)
{

}

CTabDlg::~CTabDlg()
{
}

void CTabDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTabDlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CTabDlg ��Ϣ�������


void CTabDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
	CRect   rect;
	GetClientRect(rect);
	dc.FillSolidRect(rect, RGB(0, 0, 255));
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
}
