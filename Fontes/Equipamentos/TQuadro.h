//---------------------------------------------------------------------------
#ifndef TQuadroH
#define TQuadroH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TQuadro : public TEqpto
{
private:
	int TipoEqpto;

public:
	__fastcall TQuadro(String Codigo);
	__fastcall ~TQuadro();

};
//---------------------------------------------------------------------------
#endif
