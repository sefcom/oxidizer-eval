__int64 __fastcall rg::flags::doc::render_custom_markup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int128 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int64 v23; // rdx
  char **v24; // r8
  __int128 v25; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+10h] [rbp-B8h]
  __int128 v27; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-98h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  __int128 v30; // [rsp+40h] [rbp-88h] BYREF
  __int64 v31; // [rsp+50h] [rbp-78h]
  char **v32; // [rsp+58h] [rbp-70h] BYREF
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int128 *v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+78h] [rbp-50h]
  _QWORD v37[8]; // [rsp+88h] [rbp-40h] BYREF

  v3 = a3;
  v29 = a1;
  v37[0] = aFlagNegate;
  v37[1] = 11LL;
  *(_QWORD *)&v5 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 1LL, 1LL, &off_3E4678);
  v27 = v5;
  v28 = 0LL;
  *(_QWORD *)&v25 = v37;
  *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
  v32 = (char **)&off_3EAD28;
  v33 = 2LL;
  v36 = 0LL;
  v34 = &v25;
  v35 = 1LL;
  core::option::Option<T>::map_or_else(&v30, 0LL, *((_QWORD *)&v5 + 1), &v32);
  v25 = v30;
  v26 = v31;
  while ( (core::str::<impl str>::find(a2, v3, &v25) & 1) != 0 )
  {
    v7 = v6;
    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           v6,
           a2,
           v3);
    if ( !v8 )
    {
      v23 = 0LL;
      v24 = &off_3EAD68;
      goto LABEL_15;
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v27,
      v8,
      v8 + v9);
    v11 = v26 + v7;
    v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v11,
            a2,
            v3);
    if ( !v12 )
    {
      v23 = v11;
      v7 = v3;
      v24 = &off_3EAD80;
      goto LABEL_15;
    }
    if ( (core::str::<impl str>::find(v12, v13) & 1) == 0 )
    {
      *(_QWORD *)&v30 = &v25;
      *((_QWORD *)&v30 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v32 = &off_3EAD48;
      v33 = 2LL;
      v36 = 0LL;
      v34 = &v30;
      v35 = 1LL;
      core::panicking::panic_fmt(&v32, &off_3EAD98);
    }
    v15 = v11 + v14;
    v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v11,
            v11 + v14,
            a2,
            v3);
    if ( !v16 )
    {
      v23 = v11;
      v7 = v15;
      v24 = &off_3EADB0;
      goto LABEL_15;
    }
    rg::flags::doc::man::generate_flag::{{closure}}(v16, v17, &v27);
    v18 = v15 + 1;
    v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v18,
            a2,
            v3);
    if ( !v19 )
    {
      v23 = v18;
      v7 = v3;
      v24 = &off_3EADC8;
LABEL_15:
      core::str::slice_error_fail(a2, v3, v23, v7, v24, v10, v25, *((_QWORD *)&v25 + 1));
    }
    v3 = v20;
    a2 = v19;
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v27,
    a2,
    a2 + v3);
  v21 = (_OWORD *)v29;
  *(_QWORD *)(v29 + 16) = v28;
  *v21 = v27;
  return core::ptr::drop_in_place<alloc::string::String>(&v25);
}