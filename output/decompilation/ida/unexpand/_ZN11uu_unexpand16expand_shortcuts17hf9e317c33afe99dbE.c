__int64 *__fastcall uu_unexpand::expand_shortcuts(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  unsigned __int8 v14; // al
  char v16; // [rsp+0h] [rbp-D8h]
  char v17; // [rsp+4h] [rbp-D4h]
  __int64 v18; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-C8h]
  __int64 v20; // [rsp+18h] [rbp-C0h]
  __int128 v21; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-A8h]
  __int64 *v23; // [rsp+38h] [rbp-A0h]
  __int128 v24; // [rsp+40h] [rbp-98h] BYREF
  __int64 v25; // [rsp+50h] [rbp-88h]
  _QWORD v26[2]; // [rsp+60h] [rbp-78h] BYREF
  char v27[48]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v28; // [rsp+A0h] [rbp-38h]

  v5 = a1;
  v18 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 8LL, 24LL, &off_E8118);
  v19 = v6;
  v20 = 0LL;
  if ( a3 )
  {
    v23 = a1;
    v7 = 24 * a3;
    v17 = 0;
    v16 = 0;
    do
    {
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)(a2 + 16);
      LODWORD(v21) = 0;
      v10 = core::char::methods::encode_utf8_raw(45LL, &v21);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v8, v9, v10) )
        goto LABEL_9;
      v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v8,
              v9);
      if ( !v11 )
        core::str::slice_error_fail(v8, v9, 1LL, v9, &off_E8130);
      v13 = v12;
      *(_QWORD *)&v21 = v11;
      *((_QWORD *)&v21 + 1) = v12 + v11;
      v14 = core::iter::traits::iterator::Iterator::try_fold(&v21);
      if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v14) )
      {
        <char as core::str::pattern::Pattern>::into_searcher(v27);
        v26[0] = 0LL;
        v26[1] = v13;
        v28 = 1;
        v16 = 1;
        core::iter::traits::iterator::Iterator::fold(v26, &v18);
      }
      else
      {
LABEL_9:
        <alloc::string::String as core::clone::Clone>::clone(&v21, a2);
        alloc::vec::Vec<T,A>::push(&v18, &v21, &off_E8148);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aAll_0, 5LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aA, 2LL) )
        {
          v17 = 1;
        }
      }
      a2 += 24LL;
      v7 -= 24LL;
    }
    while ( v7 );
    v5 = v23;
    if ( !(v17 & 1 | ((v16 & 1) == 0)) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, aFirstOnly_0);
      v25 = v22;
      v24 = v21;
      alloc::vec::Vec<T,A>::push(&v18, &v24, &off_E8160);
    }
  }
  v5[2] = v20;
  *v5 = v18;
  v5[1] = v19;
  return v5;
}