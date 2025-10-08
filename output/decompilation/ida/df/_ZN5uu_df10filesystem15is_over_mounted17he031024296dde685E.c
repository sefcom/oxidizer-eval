char __fastcall uu_df::filesystem::is_over_mounted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+8h] [rbp-20h] BYREF
  __int64 v7; // [rsp+18h] [rbp-10h] BYREF

  v6[0] = a1;
  v6[1] = a1 + 152 * a2;
  v7 = a3;
  v4 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(v6, &v7);
  if ( v4 )
    return alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
             *(_QWORD *)(v4 + 32),
             *(_QWORD *)(v4 + 40),
             *(_QWORD *)(a3 + 32),
             *(_QWORD *)(a3 + 40)) ^ 1;
  else
    return 0;
}