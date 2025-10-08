__int64 __fastcall uu_dd::parseargs::Parser::parse_status_level(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // rdi
  __int64 result; // rax

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aNone, 4LL) )
  {
    *(_BYTE *)(a1 + 8) = 2;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aNoxfer, 6LL) )
  {
    *(_BYTE *)(a1 + 8) = 1;
  }
  else
  {
    v5 = (_BYTE *)(a1 + 8);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aProgressnoequa, 8LL) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, a2, a3);
      result = 10LL;
      goto LABEL_8;
    }
    *v5 = 0;
  }
  result = 14LL;
LABEL_8:
  *(_QWORD *)a1 = result;
  return result;
}