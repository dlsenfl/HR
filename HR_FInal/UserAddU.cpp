//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UserAddU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxButtons"
#pragma link "cxGraphics"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkiniMaginary"
#pragma link "dxSkinLilian"
#pragma link "dxSkinLiquidSky"
#pragma link "dxSkinLondonLiquidSky"
#pragma link "dxSkinMcSkin"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinMoneyTwins"
#pragma link "dxSkinOffice2007Black"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2007Green"
#pragma link "dxSkinOffice2007Pink"
#pragma link "dxSkinOffice2007Silver"
#pragma link "dxSkinOffice2010Black"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxSkinOffice2010Silver"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma link "dxSkinPumpkin"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinValentine"
#pragma link "dxSkinVisualStudio2013Blue"
#pragma link "dxSkinVisualStudio2013Dark"
#pragma link "dxSkinVisualStudio2013Light"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "dxSkinXmas2008Blue"
#pragma resource "*.dfm"
TUserAddF *UserAddF;
//---------------------------------------------------------------------------
__fastcall TUserAddF::TUserAddF(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUserAddF::btSaveClick(TObject *Sender)
{
	m_pUserInfo = new TUserInfo();

	if(rdMan->Checked == 1){
		m_pUserInfo->sSex = "남자";
	}
	else{
		m_pUserInfo->sSex = "여자";
	}

	m_pUserInfo->sName 		= edName->Text;
	m_pUserInfo->sDepart 	= cbDepart->Items->Strings[cbDepart->ItemIndex];
	m_pUserInfo->sGrade 	= cbGrade->Items->Strings[cbGrade->ItemIndex];
	m_pUserInfo->sBirth     = edBirth->Text;
	m_pUserInfo->sPhone		= edPhone->Text;
	m_pUserInfo->sAddress	= edAddress->Text;

	ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TUserAddF::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TUserAddF::FormDestroy(TObject *Sender)
{
	UserAddF = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TUserAddF::edNameKeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == VK_RETURN){
    	btSaveClick(Sender);
	}
}
//---------------------------------------------------------------------------
