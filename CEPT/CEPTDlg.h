// CEPTDlg.h : header file
//

#if !defined(AFX_CEPTDLG_H__D1E5B0B8_949E_41EE_AB22_7D23625FF26E__INCLUDED_)
#define AFX_CEPTDLG_H__D1E5B0B8_949E_41EE_AB22_7D23625FF26E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCEPTDlg dialog

class CCEPTDlg : public CDialog
{
// Construction
public:
	CCEPTDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCEPTDlg)
	enum { IDD = IDD_CEPT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCEPTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	void DisplayInfo(int i);

	// Generated message map functions
	//{{AFX_MSG(CCEPTDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnH();
	afx_msg void OnHe();
	afx_msg void OnLi();
	afx_msg void OnBe();
	afx_msg void OnB();
	afx_msg void OnC();
	afx_msg void OnN();
	afx_msg void OnO();
	afx_msg void OnF();
	afx_msg void OnNe();
	afx_msg void OnNa();
	afx_msg void OnMg();
	afx_msg void OnAl();
	afx_msg void OnSi();
	afx_msg void OnP();
	afx_msg void OnS();
	afx_msg void OnCl();
	afx_msg void OnAr();
	afx_msg void OnK();
	afx_msg void OnCa();
	afx_msg void OnSc();
	afx_msg void OnTi();
	afx_msg void OnV();
	afx_msg void OnCr();
	afx_msg void OnMn();
	afx_msg void OnFe();
	afx_msg void OnCo();
	afx_msg void OnNi();
	afx_msg void OnCu();
	afx_msg void OnZn();
	afx_msg void OnGa();
	afx_msg void OnGe();
	afx_msg void OnAs();
	afx_msg void OnSe();
	afx_msg void OnBr();
	afx_msg void OnKr();
	afx_msg void OnRb();
	afx_msg void OnSr();
	afx_msg void OnY();
	afx_msg void OnZr();
	afx_msg void OnNb();
	afx_msg void OnMo();
	afx_msg void OnTc();
	afx_msg void OnRu();
	afx_msg void OnRh();
	afx_msg void OnPd();
	afx_msg void OnAg();
	afx_msg void OnCd();
	afx_msg void OnIn();
	afx_msg void OnSn();
	afx_msg void OnSb();
	afx_msg void OnTe();
	afx_msg void OnI();
	afx_msg void OnXe();
	afx_msg void OnCs();
	afx_msg void OnBa();
	afx_msg void OnLa();
	afx_msg void OnHf();
	afx_msg void OnTa();
	afx_msg void OnW();
	afx_msg void OnRe();
	afx_msg void OnOs();
	afx_msg void OnIr();
	afx_msg void OnPt();
	afx_msg void OnAu();
	afx_msg void OnHg();
	afx_msg void OnTl();
	afx_msg void OnPb();
	afx_msg void OnBi();
	afx_msg void OnPo();
	afx_msg void OnAt();
	afx_msg void OnRn();
	afx_msg void OnFr();
	afx_msg void OnRa();
	afx_msg void OnAc();
	afx_msg void OnRf();
	afx_msg void OnDb();
	afx_msg void OnSg();
	afx_msg void OnBh();
	afx_msg void OnHs();
	afx_msg void OnMt();
	afx_msg void OnAc2();
	afx_msg void OnLa2();
	afx_msg void OnCe();
	afx_msg void OnPr();
	afx_msg void OnNd();
	afx_msg void OnPm();
	afx_msg void OnSm();
	afx_msg void OnEu();
	afx_msg void OnGd();
	afx_msg void OnTb();
	afx_msg void OnDy();
	afx_msg void OnHo();
	afx_msg void OnEr();
	afx_msg void OnTm();
	afx_msg void OnYb();
	afx_msg void OnLu();
	afx_msg void OnTh();
	afx_msg void OnPa();
	afx_msg void OnU();
	afx_msg void OnNp();
	afx_msg void OnPu();
	afx_msg void OnAm();
	afx_msg void OnCm();
	afx_msg void OnBk();
	afx_msg void OnCf();
	afx_msg void OnEs();
	afx_msg void OnFm();
	afx_msg void OnMd();
	afx_msg void OnNo();
	afx_msg void OnLr();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CEPTDLG_H__D1E5B0B8_949E_41EE_AB22_7D23625FF26E__INCLUDED_)
