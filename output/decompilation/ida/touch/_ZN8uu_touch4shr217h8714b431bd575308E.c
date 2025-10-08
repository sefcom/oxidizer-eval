__int64 __fastcall uu_touch::shr2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbp
  __int128 v9; // rax
  __int128 v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]

  v4 = a3 - 2;
  core::str::<impl str>::split_at_checked(&v11, a2, a3, a3 - 2);
  v5 = v11;
  if ( !(_QWORD)v11 )
    core::str::slice_error_fail(a2, a3, 0LL, v4, &off_279D10);
  v6 = *((_QWORD *)&v11 + 1);
  v7 = v12;
  v8 = v12 + v13;
  *(_QWORD *)&v9 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 1LL, 1LL, &off_2797D0);
  v11 = v9;
  v12 = 0LL;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v11,
    v7,
    v8);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v11,
    v5,
    v5 + v6);
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  return a1;
}