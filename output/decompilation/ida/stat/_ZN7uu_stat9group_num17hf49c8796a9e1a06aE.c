unsigned __int64 __fastcall uu_stat::group_num(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // bp
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  _QWORD *v10; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // r13
  __int128 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 i; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  char **v23; // r8
  __int128 v24; // [rsp+8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+18h] [rbp-40h]
  _QWORD *v26; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v26 = a1;
  LODWORD(v24) = 0;
  v5 = core::char::methods::encode_utf8_raw(45LL, &v24);
  v7 = core::slice::<impl [T]>::starts_with(a2, a3, v5, v6);
  if ( !v7 )
  {
    *(_QWORD *)&v24 = a2;
    *((_QWORD *)&v24 + 1) = a2 + a3;
    v25 = 1LL;
    v8 = <core::iter::adapters::take::Take<I> as core::iter::traits::iterator::Iterator>::try_fold(&v24);
    if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8) )
      core::panicking::panic(aAssertionFaile_0, 78LL, &off_119B28);
  }
  *(_QWORD *)&v24 = a2;
  *((_QWORD *)&v24 + 1) = a2 + a3;
  v25 = 1LL;
  v9 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v24);
  if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v9) )
    core::panicking::panic(aAssertionFaile_1, 63LL, &off_119B40);
  if ( a3 < 4 )
  {
    v10 = v26;
    v26[1] = a2;
    v10[2] = a3;
    result = 0x8000000000000000LL;
    *v10 = 0x8000000000000000LL;
    return result;
  }
  v12 = a3 - 1;
  *(_QWORD *)&v13 = alloc::raw_vec::RawVecInner<A>::with_capacity_in((a3 - 1) / 3, 1LL, 1LL, &off_1195E8);
  v24 = v13;
  v25 = 0LL;
  if ( v7 )
  {
    alloc::string::String::push(&v24, 45LL);
    v14 = 1LL;
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            a2,
            a3);
    if ( !v15 )
    {
      v23 = &off_119B58;
      i = a3;
LABEL_16:
      core::str::slice_error_fail(v4, a3, v14, i, v23);
    }
    v12 = v16 - 1;
    a3 = v16;
    v4 = v15;
  }
  i = v12 % 3 + 1;
  v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          i,
          v4,
          a3);
  if ( !v18 )
  {
    v23 = &off_119B70;
    v14 = 0LL;
    goto LABEL_16;
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v24,
    v18,
    v18 + v19);
  for ( i = v12 % 3 + 4; 1 - a3 + i != 4; i += 3LL )
  {
    alloc::string::String::push(&v24, 44LL);
    v14 = i - 3;
    v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            i - 3,
            i,
            v4,
            a3);
    if ( !v20 )
    {
      v23 = &off_119B88;
      goto LABEL_16;
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v24,
      v20,
      v20 + v21);
  }
  result = v25;
  v22 = v26;
  v26[2] = v25;
  *v22 = v24;
  return result;
}