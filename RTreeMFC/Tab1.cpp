// Tab1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RTreeMFC.h"
#include "Tab1.h"
#include "afxdialogex.h"


// CTab1 �Ի���

IMPLEMENT_DYNAMIC(CTab1, CDialogEx)

CTab1::CTab1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAB1DIALOG, pParent)
{

}

CTab1::~CTab1()
{
}

void CTab1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTab1, CDialogEx)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()


// CTab1 ��Ϣ�������


void CTab1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
	CRect   rect;
	GetClientRect(rect);
	dc.FillSolidRect(rect, RGB(255, 255, 255));   //����Ϊ��ɫ����
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
}


void CTab1::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	m_bFirstDraw = TRUE;
	m_bDraw = TRUE;
	m_ptOrigin = point;



	CDialogEx::OnLButtonDown(nFlags, point);
}


void CTab1::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	m_bDraw = FALSE;

	 //ȡ��ѡ���������߿�

	CClientDC dc(this);
	CRect rect(0, 0, 0, 0);
	dc.DrawDragRect(rect, CSize(1, 1), m_rect, CSize(1, 1), NULL, NULL);
	//dc.DrawDragRect(m_rect, CSize(1, 1), NULL, CSize(1, 1), NULL, NULL);
	//dc.Rectangle(m_rect);

	CPen pen(PS_SOLID, 1, RGB(234, 23, 53));
	CPen *pOldPen = dc.SelectObject(&pen);
	CBrush *pBrush = CBrush::FromHandle((HBRUSH)
		GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush = dc.SelectObject(pBrush);//����ԭ�л�ˢ
	dc.Rectangle(m_rect);
	dc.SelectObject(pOldPen);
	dc.SelectObject(pOldBrush);//�ָ�ԭ�л�ˢ


	m_rect = rect;




	

	CDialogEx::OnLButtonUp(nFlags, point);
}


void CTab1::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (m_bDraw == TRUE)
	{
		CClientDC dc(this);
		CRect rect(m_ptOrigin, point);
		rect.NormalizeRect();                                  // ʹ������������������������϶����
		CBrush brush;
		//brush.CreateSolidBrush(RGB(255, 0, 0));   //����ɫ���ɻ�ˢ
		LOGBRUSH logBrush;
		logBrush.lbStyle = BS_HATCHED;
		logBrush.lbColor = RGB(0, 192, 192);
		logBrush.lbHatch = HS_CROSS;
		//brush.CreateBrushIndirect(&logBrush);
		brush.CreateStockObject(RGB(255, 0, 0));
		if (m_bFirstDraw == TRUE)
		{
			m_bFirstDraw = FALSE;
			dc.DrawDragRect(rect, CSize(1, 1), NULL, CSize(1, 1), NULL, NULL);
		}
		else
		{
			dc.DrawDragRect(rect, CSize(1, 1), m_rect, CSize(1, 1), NULL, NULL);
			//dc.DrawDragRect(CRect(0, 0, 0, 0), CSize(1, 1), m_rect, CSize(1, 1), NULL, NULL);
			//dc.Rectangle(rect);
		}
		m_rect.CopyRect(rect);
	}



	CDialogEx::OnMouseMove(nFlags, point);
}
