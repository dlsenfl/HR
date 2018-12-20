//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UserModU.h"
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
TUserModF *UserModF;
//---------------------------------------------------------------------------
__fastcall TUserModF::TUserModF(TComponent* Owner)
	: TForm(Owner)
{
	m_pUserInfo = NULL;
}
//---------------------------------------------------------------------------

void __fastcall TUserModF::fnSetUserInfo(TUserInfo *a_pUserInfo)
{
	m_pUserInfo = a_pUserInfo;

	if(m_pUserInfo->sSex == "남자"){				// 성별수정(라디오버튼)
		rdMan->Checked = 1;
	}
	else{
		 rdWoman->Checked =1;
	}

	for(int i=0; i<cbDepart->GetCount(); i++){					 //부서수정 (콤보박스)
		if(m_pUserInfo->sDepart == cbDepart->Items->Strings[i]){
			cbDepart->ItemIndex = i;
		}
	}
	for(int i=0; i<cbGrade->GetCount(); i++){
		if(m_pUserInfo->sGrade == cbGrade->Items->Strings[i]){   //직급수정 (콤보박스)
			cbGrade->ItemIndex = i;
		}
	}

	edName	 ->Text 	= m_pUserInfo->sName	 ;
	edBirth	 ->Text		= m_pUserInfo->sBirth	 ;
	edPhone	 ->Text 	= m_pUserInfo->sPhone	 ;
	edAddress->Text 	= m_pUserInfo->sAddress	 ;
}



void __fastcall TUserModF::btSaveClick(TObject *Sender)
{
	if(rdMan->Checked == 1){
		m_pUserInfo->sSex ="남자";
	}
	else{
		m_pUserInfo->sSex ="여지";
	}

	m_pUserInfo->sDepart	= cbDepart->Items->Strings[cbDepart->ItemIndex]	;
	m_pUserInfo->sGrade     = cbGrade->Items->Strings[cbGrade->ItemIndex]	;
	m_pUserInfo->sBirth     = edBirth->Text									;
	m_pUserInfo->sPhone     = edPhone->Text									;
	m_pUserInfo->sAddress   = edAddress->Text								;
}
//---------------------------------------------------------------------------
void __fastcall TUserModF::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TUserModF::FormDestroy(TObject *Sender)
{
	UserModF = NULL;
}
//---------------------------------------------------------------------------
