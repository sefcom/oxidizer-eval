__int64 __fastcall uu_numfmt::parse_unit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aAuto, 4LL) )
  {
    *(_BYTE *)(a1 + 8) = 2;
LABEL_11:
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aSi, 2LL) )
  {
    *(_BYTE *)(a1 + 8) = 3;
    goto LABEL_11;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIec, 3LL) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    goto LABEL_11;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIecI, 5LL) )
  {
    *(_BYTE *)(a1 + 8) = 1;
    goto LABEL_11;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aNone, 4LL) )
  {
    *(_BYTE *)(a1 + 8) = 5;
    goto LABEL_11;
  }
  return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aUnsupportedUni, 29LL);
}