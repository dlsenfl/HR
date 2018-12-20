//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UserMainU.h"
#include "UserAddU.h"
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
#pragma resource "*.dfm"
TUserMainF *UserMainF;
//---------------------------------------------------------------------------
__fastcall TUserMainF::TUserMainF(TComponent* Owner)
	: TForm(Owner)
{
	m_pUserList = new TList();
	m_iFindIndex = -1;
}

__fastcall TUserMainF::~TUserMainF()
{
	TUserInfo *pUserInfo;
	while(m_pUserList->Count){
		pUserInfo = (TUserInfo *)m_pUserList->Items[0];
		delete pUserInfo;
		m_pUserList->Delete(0);
	}
	delete m_pUserList;

}
//---------------------------------------------------------------------------
void __fastcall TUserMainF::btAddClick(TObject *Sender)
{
	if(UserAddF == NULL){
		UserAddF = new TUserAddF(NULL);
	}

	if(UserAddF->ShowModal() == mrOk){
		m_pUserList->Add(UserAddF->UserInfo);
		fnDisplayUserInfo();
	}

}
//---------------------------------------------------------------------------
	void __fastcall TUserMainF::fnDisplayUserInfo()
	{
		UnicodeString sTemp;
		TUserInfo *pUserInfo;
		mmDisplay->Lines->Clear();
		for(int i=0; i<m_pUserList->Count; i++){
			pUserInfo = (TUserInfo *)m_pUserList->Items[i];
			sTemp.sprintf(L"%s %s %s %s %s %s %s",
			pUserInfo->sName,
			pUserInfo->sSex,
			pUserInfo->sDepart,
			pUserInfo->sGrade,
			pUserInfo->sBirth,
			pUserInfo->sPhone,
			pUserInfo->sAddress);

			mmDisplay->Lines->Add(sTemp);
		}

	}

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------




void __fastcall TUserMainF::btFindClick(TObject *Sender)
{
	TUserInfo *pUserInfo;
	UnicodeString sTemp;

	mmDisplay->Lines->Clear();

	for(int i=0; i<m_pUserList->Count; i++){
		pUserInfo = (TUserInfo *)m_pUserList->Items[i];
			if(pUserInfo->sName.Pos(edFind->Text) > 0){
			m_iFindIndex = i;
			sTemp.sprintf(L"%s %s %s %s %s %s %s",
			pUserInfo->sName,
			pUserInfo->sSex,
			pUserInfo->sDepart,
			pUserInfo->sGrade,
			pUserInfo->sBirth,
			pUserInfo->sPhone,
			pUserInfo->sAddress);

			mmDisplay->Lines->Add(sTemp);
			}

	}

}
//---------------------------------------------------------------------------

void __fastcall TUserMainF::btReviseClick(TObject *Sender)
{
	TUserInfo *pUserInfo;

	if(m_iFindIndex > -1){
		pUserInfo = (TUserInfo *)m_pUserList->Items[m_iFindIndex];
		if(UserModF==NULL){
			UserModF = new TUserModF(NULL);
		}
		UserModF->UserInfo = pUserInfo;
		UserModF->ShowModal();
	}
	else{
		ShowMessage("수정할 사용자를 검색하세요");
	}








}
//---------------------------------------------------------------------------

void __fastcall TUserMainF::btDeleteClick(TObject *Sender)
{
	TUserInfo *pUserInfo;

	if(m_iFindIndex > -1){
//		pUserInfo = (TUserInfo *)m_pUserList->Items[m_iFindIndex];
		delete m_pUserList->Items[m_iFindIndex];
		m_pUserList->Delete(m_iFindIndex);

	}
}
//---------------------------------------------------------------------------

