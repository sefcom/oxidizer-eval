unsigned __int64 __fastcall uu_wc::Input::as_borrowed(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int128 v3; // xmm0

  result = 0x8000000000000000LL;
  if ( *(_QWORD *)a2 == 0x8000000000000001LL )
  {
    result = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  else
  {
    v3 = *(_OWORD *)(a2 + 8);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_OWORD *)(a1 + 8) = v3;
  }
  return result;
}