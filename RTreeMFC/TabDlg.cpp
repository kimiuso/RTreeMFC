// TabDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RTreeMFC.h"
#include "TabDlg.h"
#include "afxdialogex.h"


// CTabDlg 对话框

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


// CTabDlg 消息处理程序


void CTabDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
	CRect   rect;
	GetClientRect(rect);
	dc.FillSolidRect(rect, RGB(0, 0, 255));
					   // 不为绘图消息调用 CDialogEx::OnPaint()
}
