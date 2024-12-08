void __fastcall uu_ptx::PtxError::ParseError(_BYTE *a1, char a2)
{
  a1[1] = a2;
  *a1 = 2;
}
