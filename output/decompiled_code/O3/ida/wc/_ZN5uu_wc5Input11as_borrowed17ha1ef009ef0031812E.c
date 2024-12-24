unsigned __int64 __fastcall uu_wc::Input::as_borrowed(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0x8000000000000001LL;
  if ( *(_QWORD *)a2 == 0x8000000000000001LL )
  {
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  }
  else
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    result = 0x8000000000000000LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
