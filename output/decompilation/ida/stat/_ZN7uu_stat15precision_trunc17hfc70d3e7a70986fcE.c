__int64 __fastcall uu_stat::precision_trunc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // xmm0
  char **v13; // r8
  __int128 v14; // [rsp+8h] [rbp-D0h] BYREF
  __int128 **v15; // [rsp+18h] [rbp-C0h]
  __int64 v16; // [rsp+20h] [rbp-B8h]
  __int64 v17; // [rsp+28h] [rbp-B0h]
  __int128 v18; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-90h]
  __int128 v20; // [rsp+50h] [rbp-88h] BYREF
  __int128 **v21; // [rsp+60h] [rbp-78h]
  __int128 *v22; // [rsp+68h] [rbp-70h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-68h]
  __int128 *v24; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall *v25)(); // [rsp+80h] [rbp-58h]
  double v26; // [rsp+88h] [rbp-50h] BYREF
  __int128 v27; // [rsp+90h] [rbp-48h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-38h]

  v26 = a4;
  <T as alloc::string::SpecToString>::spec_to_string(&v18, &v26);
  v5 = *((_QWORD *)&v18 + 1);
  v6 = v19;
  if ( (core::str::<impl str>::find(*((_QWORD *)&v18 + 1), v19) & 1) == 0 )
  {
    if ( a2 >= 2 && a3 )
    {
      alloc::slice::<impl [T]>::repeat(&v14, a3);
      v21 = v15;
      v20 = v14;
      v22 = &v18;
      v23 = <alloc::string::String as core::fmt::Display>::fmt;
      v24 = &v20;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &unk_119C80;
      *((_QWORD *)&v14 + 1) = 2LL;
      v17 = 0LL;
      v15 = &v22;
      v16 = 2LL;
      core::option::Option<T>::map_or_else(&v27, &v14);
      goto LABEL_17;
    }
LABEL_11:
    result = v19;
    *(_QWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v18;
    return result;
  }
  if ( !a2 )
  {
    v8 = v7;
    v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           v7,
           v5,
           v6);
    if ( v9 )
      goto LABEL_15;
    v13 = &off_119CA0;
    goto LABEL_22;
  }
  if ( a2 == 1 )
    goto LABEL_11;
  if ( a3 )
  {
    if ( a3 < v6 - v7 )
    {
      v8 = a3 + v7 + 1;
      v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
             v8,
             v5,
             v6);
      if ( v9 )
        goto LABEL_15;
      v13 = &off_119CD0;
LABEL_22:
      core::str::slice_error_fail(v5, v6, 0LL, v8, v13);
    }
    alloc::slice::<impl [T]>::repeat(&v14, a3 - (v6 - v7) + 1);
    v21 = v15;
    v20 = v14;
    v22 = &v18;
    v23 = <alloc::string::String as core::fmt::Display>::fmt;
    v24 = &v20;
    v25 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &unk_1CFD0;
    *((_QWORD *)&v14 + 1) = 2LL;
    v17 = 0LL;
    v15 = &v22;
    v16 = 2LL;
    core::option::Option<T>::map_or_else(&v27, &v14);
LABEL_17:
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    *(_QWORD *)(a1 + 16) = v28;
    v12 = v27;
    goto LABEL_18;
  }
  v8 = v7;
  v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
         v7,
         v5,
         v6);
  if ( !v9 )
  {
    v13 = &off_119CB8;
    goto LABEL_22;
  }
LABEL_15:
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v14, v9, v10);
  *(_QWORD *)(a1 + 16) = v15;
  v12 = v14;
LABEL_18:
  *(_OWORD *)a1 = v12;
  return core::ptr::drop_in_place<alloc::string::String>(&v18);
}