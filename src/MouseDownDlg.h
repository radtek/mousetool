/*
Source file for MouseTool
MouseTool clicks the mouse when the user pauses it,
helping reduce strain caused by using the mouse.
Copyright (C) 2000 by Jeff Roush
www.mousetool.com

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
Or www.gnu.org/home.html
*/

#if !defined(AFX_MOUSEDOWNDLG_H__EB1C9F41_13CD_11D1_A10D_444553540000__INCLUDED_)
#define AFX_MOUSEDOWNDLG_H__EB1C9F41_13CD_11D1_A10D_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// MouseDownDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMouseDownDlg dialog

class CMouseDownDlg : public CDialog
{
// Construction
public:
	CMouseDownDlg(CWnd* pParent = NULL);   // standard constructor
	BOOL Create(int x, int y);
//	CMouseDownDlg();

// Dialog Data
	//{{AFX_DATA(CMouseDownDlg)
	enum { IDD = IDD_MOUSEDOWN };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMouseDownDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMouseDownDlg)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOUSEDOWNDLG_H__EB1C9F41_13CD_11D1_A10D_444553540000__INCLUDED_)
