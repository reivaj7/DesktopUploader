/*---------------------------------------------------------------------------
$Id: LoginBase.h 185 2009-05-01 12:58:01Z anton $
---------------------------------------------------------------------------*/
#ifndef HTTPAuthBaseH
#define HTTPAuthBaseH
//----------------------------------------------------------------------------
#include <vcl\Buttons.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Classes.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Windows.hpp>
#include <vcl\System.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include "Header.h"
#include "HeaderBase.h"
//----------------------------------------------------------------------------
class THTTPAuthFormBase : public TForm
{
__published:
	TLabel *lblPassword;
	TLabel *lblUsername;
	TButton *CancelBtn;
	TButton *OKBtn;
	TEdit *edtPassword;
	TEdit *edtUsername;
	TLabel *lblNotice;
	void __fastcall OKBtnClick(TObject *Sender);
	void __fastcall CancelBtnClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
public:
	virtual __fastcall THTTPAuthFormBase(TComponent* AOwner,
		UnicodeString Server, UnicodeString Realm=L"", UnicodeString Username=L"",
		UnicodeString Password=L"");

	//Credentials for returning to caller function:
	UnicodeString Username;
	UnicodeString Password;
};
//----------------------------------------------------------------------------
extern PACKAGE THTTPAuthFormBase *HTTPAuthFormBase;
//----------------------------------------------------------------------------
#endif
