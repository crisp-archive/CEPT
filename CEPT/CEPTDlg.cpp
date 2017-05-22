// CEPTDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CEPT.h"
#include "CEPTDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();
	
	// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA
	
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	
	// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
//{{AFX_MSG_MAP(CAboutDlg)
// No message handlers
//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCEPTDlg dialog

CCEPTDlg::CCEPTDlg(CWnd* pParent /*=NULL*/)
: CDialog(CCEPTDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCEPTDlg)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCEPTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCEPTDlg)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCEPTDlg, CDialog)
//{{AFX_MSG_MAP(CCEPTDlg)
ON_WM_SYSCOMMAND()
ON_WM_PAINT()
ON_WM_QUERYDRAGICON()
ON_BN_CLICKED(IDC_H, OnH)
ON_BN_CLICKED(IDC_He, OnHe)
ON_BN_CLICKED(IDC_Li, OnLi)
ON_BN_CLICKED(IDC_Be, OnBe)
ON_BN_CLICKED(IDC_B, OnB)
ON_BN_CLICKED(IDC_C, OnC)
ON_BN_CLICKED(IDC_N, OnN)
ON_BN_CLICKED(IDC_O, OnO)
ON_BN_CLICKED(IDC_F, OnF)
ON_BN_CLICKED(IDC_Ne, OnNe)
ON_BN_CLICKED(IDC_Na, OnNa)
ON_BN_CLICKED(IDC_Mg, OnMg)
ON_BN_CLICKED(IDC_Al, OnAl)
ON_BN_CLICKED(IDC_Si, OnSi)
ON_BN_CLICKED(IDC_P, OnP)
ON_BN_CLICKED(IDC_S, OnS)
ON_BN_CLICKED(IDC_Cl, OnCl)
ON_BN_CLICKED(IDC_Ar, OnAr)
ON_BN_CLICKED(IDC_K, OnK)
ON_BN_CLICKED(IDC_Ca, OnCa)
ON_BN_CLICKED(IDC_Sc, OnSc)
ON_BN_CLICKED(IDC_Ti, OnTi)
ON_BN_CLICKED(IDC_V, OnV)
ON_BN_CLICKED(IDC_Cr, OnCr)
ON_BN_CLICKED(IDC_Mn, OnMn)
ON_BN_CLICKED(IDC_Fe, OnFe)
ON_BN_CLICKED(IDC_Co, OnCo)
ON_BN_CLICKED(IDC_Ni, OnNi)
ON_BN_CLICKED(IDC_Cu, OnCu)
ON_BN_CLICKED(IDC_Zn, OnZn)
ON_BN_CLICKED(IDC_Ga, OnGa)
ON_BN_CLICKED(IDC_Ge, OnGe)
ON_BN_CLICKED(IDC_As, OnAs)
ON_BN_CLICKED(IDC_Se, OnSe)
ON_BN_CLICKED(IDC_Br, OnBr)
ON_BN_CLICKED(IDC_Kr, OnKr)
ON_BN_CLICKED(IDC_Rb, OnRb)
ON_BN_CLICKED(IDC_Sr, OnSr)
ON_BN_CLICKED(IDC_Y, OnY)
ON_BN_CLICKED(IDC_Zr, OnZr)
ON_BN_CLICKED(IDC_Nb, OnNb)
ON_BN_CLICKED(IDC_Mo, OnMo)
ON_BN_CLICKED(IDC_Tc, OnTc)
ON_BN_CLICKED(IDC_Ru, OnRu)
ON_BN_CLICKED(IDC_Rh, OnRh)
ON_BN_CLICKED(IDC_Pd, OnPd)
ON_BN_CLICKED(IDC_Ag, OnAg)
ON_BN_CLICKED(IDC_Cd, OnCd)
ON_BN_CLICKED(IDC_In, OnIn)
ON_BN_CLICKED(IDC_Sn, OnSn)
ON_BN_CLICKED(IDC_Sb, OnSb)
ON_BN_CLICKED(IDC_Te, OnTe)
ON_BN_CLICKED(IDC_I, OnI)
ON_BN_CLICKED(IDC_Xe, OnXe)
ON_BN_CLICKED(IDC_Cs, OnCs)
ON_BN_CLICKED(IDC_Ba, OnBa)
ON_BN_CLICKED(IDC_La, OnLa)
ON_BN_CLICKED(IDC_Hf, OnHf)
ON_BN_CLICKED(IDC_Ta, OnTa)
ON_BN_CLICKED(IDC_W, OnW)
ON_BN_CLICKED(IDC_Re, OnRe)
ON_BN_CLICKED(IDC_Os, OnOs)
ON_BN_CLICKED(IDC_Ir, OnIr)
ON_BN_CLICKED(IDC_Pt, OnPt)
ON_BN_CLICKED(IDC_Au, OnAu)
ON_BN_CLICKED(IDC_Hg, OnHg)
ON_BN_CLICKED(IDC_Tl, OnTl)
ON_BN_CLICKED(IDC_Pb, OnPb)
ON_BN_CLICKED(IDC_Bi, OnBi)
ON_BN_CLICKED(IDC_Po, OnPo)
ON_BN_CLICKED(IDC_At, OnAt)
ON_BN_CLICKED(IDC_Rn, OnRn)
ON_BN_CLICKED(IDC_Fr, OnFr)
ON_BN_CLICKED(IDC_Ra, OnRa)
ON_BN_CLICKED(IDC_Ac, OnAc)
ON_BN_CLICKED(IDC_Rf, OnRf)
ON_BN_CLICKED(IDC_Db, OnDb)
ON_BN_CLICKED(IDC_Sg, OnSg)
ON_BN_CLICKED(IDC_Bh, OnBh)
ON_BN_CLICKED(IDC_Hs, OnHs)
ON_BN_CLICKED(IDC_Mt, OnMt)
ON_BN_CLICKED(IDC_Ac2, OnAc2)
ON_BN_CLICKED(IDC_La2, OnLa2)
ON_BN_CLICKED(IDC_Ce, OnCe)
ON_BN_CLICKED(IDC_Pr, OnPr)
ON_BN_CLICKED(IDC_Nd, OnNd)
ON_BN_CLICKED(IDC_Pm, OnPm)
ON_BN_CLICKED(IDC_Sm, OnSm)
ON_BN_CLICKED(IDC_Eu, OnEu)
ON_BN_CLICKED(IDC_Gd, OnGd)
ON_BN_CLICKED(IDC_Tb, OnTb)
ON_BN_CLICKED(IDC_Dy, OnDy)
ON_BN_CLICKED(IDC_Ho, OnHo)
ON_BN_CLICKED(IDC_Er, OnEr)
ON_BN_CLICKED(IDC_Tm, OnTm)
ON_BN_CLICKED(IDC_Yb, OnYb)
ON_BN_CLICKED(IDC_Lu, OnLu)
ON_BN_CLICKED(IDC_Th, OnTh)
ON_BN_CLICKED(IDC_Pa, OnPa)
ON_BN_CLICKED(IDC_U, OnU)
ON_BN_CLICKED(IDC_Np, OnNp)
ON_BN_CLICKED(IDC_Pu, OnPu)
ON_BN_CLICKED(IDC_Am, OnAm)
ON_BN_CLICKED(IDC_Cm, OnCm)
ON_BN_CLICKED(IDC_Bk, OnBk)
ON_BN_CLICKED(IDC_Cf, OnCf)
ON_BN_CLICKED(IDC_Es, OnEs)
ON_BN_CLICKED(IDC_Fm, OnFm)
ON_BN_CLICKED(IDC_Md, OnMd)
ON_BN_CLICKED(IDC_No, OnNo)
ON_BN_CLICKED(IDC_Lr, OnLr)
//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCEPTDlg message handlers

BOOL CCEPTDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	// Add "About..." menu item to system menu.
	
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
	
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCEPTDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCEPTDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting
		
		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);
		
		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		
		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCEPTDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
//ÔªËØÐÅÏ¢½á¹¹¶¨Òå
typedef struct tagCEPTInfo
{
	char szOrdinal[4];
	char szSymbol[4];
	char szEnName[20];
	char szCnName[3];
	char szPinYin[10];
	char szWeight[10];
	char szElectron[20];
	char szPriceEle[20];
	char szMeltingPoint[20];
	char szBoilingPoint[20];
} CEPTINFO;
//ÔªËØÐÅÏ¢
CEPTINFO CeptInfo[]={
	{"1","H","Hydrogen","Çâ","qing1","1.0079","1","1s1","-259.14C","-252.87C"},
	{"2","He","Helium","º¤","hai4","4.0026","2","1s2","-272C26ATM","-268.6C"},
	{"3","Li","Lithium","ï®","li3","6.94","2_1","2s1","180.54C","1347C"},
	{"4","Be","Beryllium","îë","pi2","9.01218","2_2","2s2","1278C","2970C"},
	{"5","B","Boron","Åð","peng2","10.81","2_3","2p1","2300C","2550C"},
	{"6","C","Carbon","Ì¼","tan4","12.011","2_4","2p2","3500C","4827C"},
	{"7","N","Nitrogen","µª","dan4","14.0067","2_5","2p3","-209.9C","-195.8C"},
	{"8","O","Oxygen","Ñõ","yang3","15.9994","2_6","2p4","-218.4C","-183.0C"},
	{"9","F","Fluorine","·ú","fu2","18.998403","2_7","2p5","-219.62C","-188.14C"},
	{"10","Ne","Neon","ÄÊ","nai3","20.17","2_8","2p6","-248.6C","-246.1C"},
	{"11","Na","Sodium","ÄÆ","na4","22.98977","2_8_1","3s1","97.8C","882.9C"},
	{"12","Mg","Magnesium","Ã¾","mei3","24.305","2_8_2","3s2","638.8C","1090C"},
	{"13","Al","Aluminum","ÂÁ","lv3","26.98154","2_8_3","3p1","660.37C","2467C"},
	{"14","Si","Silicon","¹è","gui1","28.0855","2_8_4","3p2","1410C","2355C"},
	{"15","P","Phosphorous","Á×","lin2","30.97376","2_8_5","3p3","44.1C","280C"},
	{"16","S","Sulfur","Áò","liu2","32.06","2_8_6","3p4","112.8C","444.6C"},
	{"17","Cl","Chlorine","ÂÈ","lv4","35.453","2_8_7","3p5","-100.98C","-34.6C"},
	{"18","Ar","Argon","ë²","ya4","39.948","2_8_8","3p6","-189.3C","-186C"},
	{"19","K","Potassium","¼Ø","jia3","39.0983","2_8_8_1","4s1","63.65C","774C"},
	{"20","Ca","Calcium","¸Æ","gai4","40.08","2_8_8_2","4s2","839C","1484.4C"},
	{"21","Sc","Scandium","îÖ","kang4","44.9559","2_8_9_2","3d1","1539C","2832C"},
	{"22","Ti","Titanium","îÑ","tai4","47.90","2_8_10_2","3d2","1660C","3287C"},
	{"23","V","Vanadium","·°","fan2","50.9415","2_8_11_2","3d3","1890¡À10C","3380C"},
	{"24","Cr","Chromium","¸õ","ge4","51.996","2_8_13_1","3d5","1857C","2672C"},
	{"25","Mn","Manganese","ÃÌ","meng3","54.9380","2_8_13_2","3d5","1245C","1962C"},
	{"26","Fe","Iron","Ìú","tie3","55.847","2_8_14_2","3d6","1535C","2750C"},
	{"27","Co","Cobalt","îÜ","gu3","58.9332","2_8_15_2","3d7","1495C","2870C"},
	{"28","Ni","Nickel","Äø","nie4","58.71","2_8_16_2","3d8","1453C","2732C"},
	{"29","Cu","Copper","Í­","tong2","63.546","2_8_18_1","3d10","1083C","2567C"},
	{"30","Zn","Zinc","Ð¿","xin1","65.38","2_8_18_2","3d10","419.58C","907C"},
	{"31","Ga","Gallium","ïØ","jia1","69.735","2_8_18_3","4p1","9.78C","2403C"},
	{"32","Ge","Germanium","Õà","zhe3","72.59","2_8_18_4","4p2","937.4C","2830C"},
	{"33","As","Arsenic","Éé","shen1","74.9216","2_8_18_5","4p3","81C@28atm","613C(Éý»ª)"},
	{"34","Se","Selenium","Îø","xi1","78.96","2_8_18_6","4p4","217C","684.9C"},
	{"35","Br","Bromine","äå","xiu4","79.904","2_8_18_7","4p5","-7.2C","58.78C"},
	{"36","Kr","Krypton","ë´","ke4","83.80","2_8_18_8","4p6","-157.2C","-153.4C"},
	{"37","Rb","Rubidium","ï¨","ru2","85.467","2_8_18_8_1","5s1","38.89C","688C"},
	{"38","Sr","Strontium","ïÈ","si1","87.62","2_8_18_8_2","5s2","769C","1384C"},
	{"39","Y","Yttrium","îÆ","yi3","88.9059","2_8_18_9_2","4d1","1523C","3337C"},
	{"40","Zr","Zirconium","ï¯","gao4","91.22","2_8_18_10_2","4d2","1852¡À2C","4377C"},
	{"41","Nb","Niobium","îê","ni2","92.9064","2_8_18_13_1","4d4","2468¡À10C","4927C"},
	{"42","Mo","Molybdenum","îâ","mu4","95.94","2_8_18_13_1","4d5","2617C","4612C"},
	{"43","Tc","Technetium","ï½","de2","98.9062","2_8_18_14_1","4d6","2200¡À50C","4877C"},
	{"44","Ru","Ruthenium","îÉ","liao2","101.07","2_8_18_15_1","4d7","2250C","3900C"},
	{"45","Rh","Rhodium","îî","lao3","102.9055","2_8_18_16_1","4d8","1966¡À3C","3727C"},
	{"46","Pd","Palladium","îÙ","ba1","106.4","2_8_18_18","4d10","1552C","2927C"},
	{"47","Ag","Silver","Òø","yin2","107.868","2_8_18_18_1","4d10","961.93C","2212C"},
	{"48","Cd","Cadmium","ïÓ","ge2","112.41","2_8_18_18_2","4d10","320.9C","765C"},
	{"49","In","Indium","î÷","yin1","114.82","2_8_18_18_3","5p1","156.61C","2000¡À10C"},
	{"50","Sn","Tin","Îý","xi1","118.69","2_8_18_18_4","5p2","231.9C","2270C"},
	{"51","Sb","Antimony","Ìà","ti1","121.75","2_8_18_18_5","5p3","630C","1750C"},
	{"52","Te","Tellurium","íÚ","di4","127.60","2_8_18_18_6","5p4","449.5C","989.8C"},
	{"53","I","Iodine","µâ","dian3","126.9045","2_8_18_18_7","5p5","113.5C","184C@35atm"},
	{"54","Xe","Xenon","ë¯","xian1","131.30","2_8_18_18_8","5p6","-111.9C","-108.1C"},
	{"55","Cs","Cesium","ï¤","se4","132.9054","2_8_18_18_8_1","6s1","28.5C","678.4C"},
	{"56","Ba","Barium","±µ","bei4","137.33","2_8_18_18_8_2","6s2","725C","1140C"},
	{"57","La","Lanthanum","ïç","lan2","138.9055","2_8_18_18_9_2","5d1","920C","3469C"},
	{"58","Ce","Cerium","îæ","shi4","140.12","2_8_18_20_8_2","4f2","795C","3257C"},
	{"59","Pr","Praseodymium","ïè","pu3","140.9077","2_8_18_21_8_2","4f3","935C","3127C"},
	{"60","Nd","Neodymium","îÏ","nv3","144.24","2_8_18_22_8_2","4f4","1010C","3127C"},
	{"61","Pm","Promethium","îÞ","po3","(145)","2_8_18_23_8_2","4f5","N/A C","N/A C"},
	{"62","Sm","Samarium","îÌ","shan1","150.4","2_8_18_24_8_2","4f6","1072C","1900C"},
	{"63","Eu","Europium","îð","you3","151.96","2_8_18_25_8_2","4f7","822C","1597C"},
	{"64","Gd","Gadolinium","îÅ","ga1","157.25","2_8_18_25_9_2","4f7","1311C","3233C"},
	{"65","Tb","Terbium","ï«","te4","158.9254","2_8_18_27_8_2","4f9","1360C","3041C"},
	{"66","Dy","Dysprosium","ïá","di2","162.50","2_8_18_28_8_2","4f10","1412C","2562C"},
	{"67","Ho","Holmium","îØ","huo3","164.9304","2_8_18_29_8_2","4f11","1470C","2720C"},
	{"68","Er","Erbium","îï","er3","167.26","2_8_18_30_8_2","4f12","1522C","2510C"},
	{"69","Tm","Thulium","îû","diu1","168.9342","2_8_18_31_8_2","4f13","1545C","1727C"},
	{"70","Yb","Ytterbium","ïî","yi4","173.04","2_8_18_32_8_2","4f14","824C","1466C"},
	{"71","Lu","Lutetium","ïå","lu3","174.96","2_8_18_32_9_2","4f14","1656C","3315C"},
	{"72","Hf","Hafnium","îþ","ha1","178.49","2_8_18_32_10_2","5d2","2150C","5400C"},
	{"73","Ta","Tantalum","îã","tan3","180.947","2_8_18_32_11_2","5d3","2996C","5425¡À100C"},
	{"74","W","Tungsten","ÎÙ","wu1","183.85","2_8_18_32_12_2","5d4","3410¡À20C","5660C"},
	{"75","Re","Rhenium","ïª","lai2","186.207","2_8_18_32_13_2","5d5","3180C","5627C"},
	{"76","Os","Osmium","ï°","e2","190.2","2_8_18_32_14_2","5d6","3045C","5027C"},
	{"77","Ir","Iridium","Ò¿","yi1","192.22","2_8_18_32_15_2","5d7","2410C","4527¡À100C"},
	{"78","Pt","Platinum","²¬","bo2","195.08","2_8_18_32_17_1","5d9","1772C","3827C"},
	{"79","Au","Gold","½ð","jin1","196.9665","2_8_18_32_18_1","5d10","1064.43C","2807C"},
	{"80","Hg","Mercury","¹¯","gong3","200.59","2_8_18_32_18_2","5d10","-38.87C","356.58C"},
	{"81","Tl","Thallium","îè","ta1","204.37","2_8_18_32_18_3","6p1","303.5C","1457¡À10C"},
	{"82","Pb","Lead","Ç¦","qian1","207.2","2_8_18_32_18_4","6p2","327.5C","1740C"},
	{"83","Bi","Bismuth","îé","bi4","208.9804","2_8_18_32_18_5","6p3","271.3C","1560¡À5C"},
	{"84","Po","Polonium","îÇ","po1","(209)","2_8_18_32_18_6","6p4","254C","962C"},
	{"85","At","Astatine","íÁ","ai4","(210)","2_8_18_32_18_7","6p5","302C","337C"},
	{"86","Rn","Radon","ë±","dong1","(222)","2_8_18_32_18_8","6p6","-71C","-61.8C"},
	{"87","Fr","Francium","îÕ","fang3","(223)","2_8_18_32_18_8_1","7s1","27C","677C"},
	{"88","Ra","Radium","ÀØ","lei2","226.0254","2_8_18_32_18_8_2","7s2","700C","1737C"},
	{"89","Ac","Actinium","ï¹","a1","(227)","2_8_18_32_18_9_2","6d1","1050C","3200¡À300C"},
	{"90","Th","Thorium","îÊ","du4","232.0381","2_8_18_32_18_10_2","6d2","1750C","4790C"},
	{"91","Pa","Proactinium","ïä","pu2","231.0359","2_8_18_32_20_9_2","5f2","1600C","N/A C"},
	{"92","U","Uranium","ÓË","you2","238.029","2_8_18_32_21_9_2","5f3","1132C","3818C"},
	{"93","Np","Neptunium","ïÕ","na2","237.0482","2_8_18_32_23_8_2","5f4","640C","3902C"},
	{"94","Pu","Plutonium","îÐ","bu4","(244)","2_8_18_32_24_8_2","5f6","639.5¡À2C","3235¡À19C"},
	{"95","Am","Americium","ïÑ","mei2","(243)","2_8_18_32_25_8_2","5f7","994C","2607C"},
	{"96","Cm","Curium","ï¸","ju2","(247)","2_8_18_32_25_9_2","5f7","1340C","N/A C"},
	{"97","Bk","Berkelium","ïÂ","pei2","(247)","2_8_18_32_26_9_2","5f8","N/A C","N/A C"},
	{"98","Cf","Californium","ï´","kai1","(251)","2_8_18_32_28_8_2","5f9","N/A C","N/A C"},
	{"99","Es","Einsteinium","ïÍ","ai1","(254)","2_8_18_32_29_8_2","5f11","N/A C","N/A C"},
	{"100","Fm","Fermium","ïÐ","fei4","(257)","2_8_18_32_30_8_2","5f12","N/A C","N/A C"},
	{"101","Md","Mendelevium","îÍ","men2","(258)","2_8_18_32_31_8_2","5f13","N/A C","N/A C"},
	{"102","No","Nobelium","ï»","nuo4","(259)","2_8_18_32_32_8_2","5f14","N/A C","N/A C"},
	{"103","Lr","Lawrencium","ï©","lao2","(260)","2_8_18_32_32_9_2","5f14","N/A C","N/A C"},
	{"104","Rf","Rutherfordium","","lu2","(261)","2_8_18_32_32_10_2","6d2","N/A C","N/A C"},
	{"105","Db","Dubnium","","","(262)","2_8_18_32_32_11_2","6d3","N/A C","N/A C"},
	{"106","Sg","Seaborgium","","","(263)","2_8_18_32_32_12_2","6d4","N/A C","N/A C"},
	{"107","Bh","Bohriium","","","(262)","2_8_18_32_32_13_2","6d5","N/A C","N/A C"},
	{"108","Hs","Hassium","","","(265)","2_8_18_32_32_14_2","6d6","N/A C","N/A C"},
	{"109","Mt","Meitnerium","","","(266)","2_8_18_32_32_15_2","6d7","N/A C","N/A C"},
	{"110","Uun","","","¡¡","","","","",""},
	{"111","Uuu","","","¡¡","","","","",""},
	{"112","Uub","","","¡¡","","","","",""},
	{"113","Uut","","","¡¡","","","","",""},
	{"114","Uuq","","","¡¡","","","","",""},
	{"115","Uup","","","¡¡","","","","",""},
	{"116","Uuh","","","¡¡","","","","",""},
	{"117","Uus","","","¡¡","","","","",""},
	{"118","Uuo","","","¡¡","","","","",""},
};
//ÏÔÊ¾ÔªËØÐÅÏ¢
void CCEPTDlg::DisplayInfo(int i)
{
	SetDlgItemText(IDC_NUM,CeptInfo[i-1].szOrdinal);
	SetDlgItemText(IDC_SYMBOL,CeptInfo[i-1].szSymbol);
	SetDlgItemText(IDC_CNNAME,CeptInfo[i-1].szCnName);
	SetDlgItemText(IDC_PINYIN,CeptInfo[i-1].szPinYin);
	SetDlgItemText(IDC_ENNAME,CeptInfo[i-1].szEnName);
	SetDlgItemText(IDC_WEIGHT,CeptInfo[i-1].szWeight);
	SetDlgItemText(IDC_ELECTRON,CeptInfo[i-1].szElectron);
	SetDlgItemText(IDC_MPOINT,CeptInfo[i-1].szMeltingPoint);
	SetDlgItemText(IDC_BPOINT,CeptInfo[i-1].szBoilingPoint);
}
//ÔªËØÐÅÏ¢ÏìÓ¦
void CCEPTDlg::OnH()
{
	DisplayInfo(1);
}

void CCEPTDlg::OnHe() 
{
	DisplayInfo(2);
}

void CCEPTDlg::OnLi() 
{
	DisplayInfo(3);
}

void CCEPTDlg::OnBe() 
{
	DisplayInfo(4);	
}

void CCEPTDlg::OnB() 
{
	DisplayInfo(5);	
}

void CCEPTDlg::OnC() 
{
	DisplayInfo(6);	
}

void CCEPTDlg::OnN() 
{
	DisplayInfo(7);	
}

void CCEPTDlg::OnO() 
{
	DisplayInfo(8);	
}

void CCEPTDlg::OnF() 
{
	DisplayInfo(9);	
}

void CCEPTDlg::OnNe() 
{
	DisplayInfo(10);	
}

void CCEPTDlg::OnNa() 
{
	DisplayInfo(11);	
}

void CCEPTDlg::OnMg() 
{
	DisplayInfo(12);	
}

void CCEPTDlg::OnAl() 
{
	DisplayInfo(13);	
}

void CCEPTDlg::OnSi() 
{
	DisplayInfo(14);	
}

void CCEPTDlg::OnP() 
{
	DisplayInfo(15);	
}

void CCEPTDlg::OnS() 
{
	DisplayInfo(16);	
}

void CCEPTDlg::OnCl() 
{
	DisplayInfo(17);	
}

void CCEPTDlg::OnAr() 
{
	DisplayInfo(18);	
}

void CCEPTDlg::OnK() 
{
	DisplayInfo(19);	
}

void CCEPTDlg::OnCa() 
{
	DisplayInfo(20);	
}

void CCEPTDlg::OnSc() 
{
	DisplayInfo(21);	
}

void CCEPTDlg::OnTi() 
{
	DisplayInfo(22);	
}

void CCEPTDlg::OnV() 
{
	DisplayInfo(23);	
}

void CCEPTDlg::OnCr() 
{
	DisplayInfo(24);	
}

void CCEPTDlg::OnMn() 
{
	DisplayInfo(25);	
}

void CCEPTDlg::OnFe() 
{
	DisplayInfo(26);	
}

void CCEPTDlg::OnCo() 
{
	DisplayInfo(27);	
}

void CCEPTDlg::OnNi() 
{
	DisplayInfo(28);	
}

void CCEPTDlg::OnCu() 
{
	DisplayInfo(29);	
}

void CCEPTDlg::OnZn() 
{
	DisplayInfo(30);	
}

void CCEPTDlg::OnGa() 
{
	DisplayInfo(31);	
}

void CCEPTDlg::OnGe() 
{
	DisplayInfo(32);	
}

void CCEPTDlg::OnAs() 
{
	DisplayInfo(33);	
}

void CCEPTDlg::OnSe() 
{
	DisplayInfo(34);	
}

void CCEPTDlg::OnBr() 
{
	DisplayInfo(35);	
}

void CCEPTDlg::OnKr() 
{
	DisplayInfo(36);	
}

void CCEPTDlg::OnRb() 
{
	DisplayInfo(37);	
}

void CCEPTDlg::OnSr() 
{
	DisplayInfo(38);	
}

void CCEPTDlg::OnY() 
{
	DisplayInfo(39);	
}

void CCEPTDlg::OnZr() 
{
	DisplayInfo(40);	
}

void CCEPTDlg::OnNb() 
{
	DisplayInfo(41);		
}

void CCEPTDlg::OnMo() 
{
	DisplayInfo(42);	
}

void CCEPTDlg::OnTc() 
{
	DisplayInfo(43);	
}

void CCEPTDlg::OnRu() 
{
	DisplayInfo(44);	
}

void CCEPTDlg::OnRh() 
{
	DisplayInfo(45);	
}

void CCEPTDlg::OnPd() 
{
	DisplayInfo(46);	
}

void CCEPTDlg::OnAg() 
{
	DisplayInfo(47);	
}

void CCEPTDlg::OnCd() 
{
	DisplayInfo(48);	
}

void CCEPTDlg::OnIn() 
{
	DisplayInfo(49);	
}

void CCEPTDlg::OnSn() 
{
	DisplayInfo(50);	
}

void CCEPTDlg::OnSb() 
{
	DisplayInfo(51);	
}

void CCEPTDlg::OnTe() 
{
	DisplayInfo(52);	
}

void CCEPTDlg::OnI() 
{
	DisplayInfo(53);	
}

void CCEPTDlg::OnXe() 
{
	DisplayInfo(54);	
}

void CCEPTDlg::OnCs() 
{
	DisplayInfo(55);	
}

void CCEPTDlg::OnBa() 
{
	DisplayInfo(56);	
}

void CCEPTDlg::OnLa() 
{
	DisplayInfo(57);	
}

void CCEPTDlg::OnHf() 
{
	DisplayInfo(72);	
}

void CCEPTDlg::OnTa() 
{
	DisplayInfo(73);	
}

void CCEPTDlg::OnW() 
{
	DisplayInfo(74);	
}

void CCEPTDlg::OnRe() 
{
	DisplayInfo(75);	
}

void CCEPTDlg::OnOs() 
{
	DisplayInfo(76);	
}

void CCEPTDlg::OnIr() 
{
	DisplayInfo(77);	
}

void CCEPTDlg::OnPt() 
{
	DisplayInfo(78);	
}

void CCEPTDlg::OnAu() 
{
	DisplayInfo(79);	
}

void CCEPTDlg::OnHg() 
{
	DisplayInfo(80);	
}

void CCEPTDlg::OnTl() 
{
	DisplayInfo(81);	
}

void CCEPTDlg::OnPb() 
{
	DisplayInfo(82);	
}

void CCEPTDlg::OnBi() 
{
	DisplayInfo(83);	
}

void CCEPTDlg::OnPo() 
{
	DisplayInfo(84);	
}

void CCEPTDlg::OnAt() 
{
	DisplayInfo(85);	
}

void CCEPTDlg::OnRn() 
{
	DisplayInfo(86);	
}

void CCEPTDlg::OnFr() 
{
	DisplayInfo(87);	
}

void CCEPTDlg::OnRa() 
{
	DisplayInfo(88);	
}

void CCEPTDlg::OnAc() 
{
	DisplayInfo(89);	
}

void CCEPTDlg::OnRf() 
{
	DisplayInfo(104);	
}

void CCEPTDlg::OnDb() 
{
	DisplayInfo(105);	
}

void CCEPTDlg::OnSg() 
{
	DisplayInfo(106);	
}

void CCEPTDlg::OnBh() 
{
	DisplayInfo(107);	
}

void CCEPTDlg::OnHs() 
{
	DisplayInfo(108);	
}

void CCEPTDlg::OnMt() 
{
	DisplayInfo(109);	
}
// ïçÏµ
void CCEPTDlg::OnLa2() 
{
	DisplayInfo(57);
}

void CCEPTDlg::OnCe() 
{
	DisplayInfo(58);	
}

void CCEPTDlg::OnPr() 
{
	DisplayInfo(59);	
}

void CCEPTDlg::OnNd() 
{
	DisplayInfo(60);	
}

void CCEPTDlg::OnPm() 
{
	DisplayInfo(61);	
}

void CCEPTDlg::OnSm() 
{
	DisplayInfo(62);	
}

void CCEPTDlg::OnEu() 
{
	DisplayInfo(63);	
}

void CCEPTDlg::OnGd() 
{
	DisplayInfo(64);	
}

void CCEPTDlg::OnTb() 
{
	DisplayInfo(65);	
}

void CCEPTDlg::OnDy() 
{
	DisplayInfo(66);	
}

void CCEPTDlg::OnHo() 
{
	DisplayInfo(67);	
}

void CCEPTDlg::OnEr() 
{
	DisplayInfo(68);	
}

void CCEPTDlg::OnTm() 
{
	DisplayInfo(69);	
}

void CCEPTDlg::OnYb() 
{
	DisplayInfo(70);	
}

void CCEPTDlg::OnLu() 
{
	DisplayInfo(71);	
}
//ï¹Ïµ
void CCEPTDlg::OnAc2() 
{	
	DisplayInfo(89);
}

void CCEPTDlg::OnTh() 
{
	DisplayInfo(90);
}

void CCEPTDlg::OnPa() 
{
	DisplayInfo(91);	
}

void CCEPTDlg::OnU() 
{
	DisplayInfo(92);	
}

void CCEPTDlg::OnNp() 
{
	DisplayInfo(93);	
}

void CCEPTDlg::OnPu() 
{
	DisplayInfo(94);	
}

void CCEPTDlg::OnAm() 
{
	DisplayInfo(95);	
}

void CCEPTDlg::OnCm() 
{
	DisplayInfo(96);	
}

void CCEPTDlg::OnBk() 
{
	DisplayInfo(97);	
}

void CCEPTDlg::OnCf() 
{
	DisplayInfo(98);	
}

void CCEPTDlg::OnEs() 
{
	DisplayInfo(99);	
}

void CCEPTDlg::OnFm() 
{
	DisplayInfo(100);	
}

void CCEPTDlg::OnMd() 
{
	DisplayInfo(101);	
}

void CCEPTDlg::OnNo() 
{
	DisplayInfo(102);	
}

void CCEPTDlg::OnLr() 
{
	DisplayInfo(103);	
}
