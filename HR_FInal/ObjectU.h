//---------------------------------------------------------------------------

#ifndef ObjectUH
#define ObjectUH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>			//추가한 헤더
//---------------------------------------------------------------------------

class TUserInfo
{
private:
	UnicodeString m_sName;
	UnicodeString m_sSex;
	UnicodeString m_sDepart;
	UnicodeString m_sGrade;
	UnicodeString m_sBirth;
	UnicodeString m_sPhone;
	UnicodeString m_sAddress;

public:
	__property UnicodeString sName 		   = {read=m_sName, 	 	 write=m_sName};
	__property UnicodeString sSex          = {read=m_sSex,  		 write=m_sSex};
	__property UnicodeString sDepart       = {read=m_sDepart, 	 	 write=m_sDepart};
	__property UnicodeString sGrade        = {read=m_sGrade, 		 write=m_sGrade};
	__property UnicodeString sBirth        = {read=m_sBirth, 		 write=m_sBirth};
	__property UnicodeString sPhone        = {read=m_sPhone,		 write=m_sPhone};
	__property UnicodeString sAddress      = {read=m_sAddress,	 	 write=m_sAddress};

	__fastcall 	TUserInfo();
	__fastcall ~TUserInfo();

};





//---------------------------------------------------------------------------
#endif
