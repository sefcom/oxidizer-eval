unsigned __int64 __fastcall uu_expand::tabstops_parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 started; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int8 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // r15
  char v10; // r12
  int v11; // esi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  bool v16; // zf
  unsigned __int64 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 v31; // kr00_16
  __int64 v32; // rbp
  __int128 v33; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+10h] [rbp-B8h]
  __int128 v35; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-A0h]
  __int128 v37; // [rsp+30h] [rbp-98h]
  __int64 v38; // [rsp+40h] [rbp-88h]
  _BYTE v39[8]; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-78h]
  _BYTE v41[23]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v42; // [rsp+6Fh] [rbp-59h]
  __int16 v43; // [rsp+90h] [rbp-38h]

  started = core::str::<impl str>::trim_start_matches(a2, a3);
  if ( !v4 )
  {
    v18 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v18 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v18 = 8LL;
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = 1LL;
    goto LABEL_26;
  }
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  v36 = 0LL;
  v5 = v4;
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v41[16], started);
  *(_QWORD *)v41 = 0LL;
  *(_QWORD *)&v41[8] = v5;
  v43 = 1;
  v6 = (unsigned __int8 *)core::str::iter::SplitInternal<P>::next(v41);
  if ( !v6 )
    goto LABEL_22;
  v9 = 0;
  v10 = 0;
  while ( !v7 )
  {
LABEL_5:
    v6 = (unsigned __int8 *)core::str::iter::SplitInternal<P>::next(v41);
    if ( !v6 )
    {
      if ( v36 == 1 )
      {
LABEL_24:
        v10 = 0;
        goto LABEL_25;
      }
      if ( v36 )
      {
LABEL_25:
        v42 = v36;
        *(_OWORD *)&v41[7] = v35;
        *(_BYTE *)(a1 + 8) = v10;
        v21 = *(_QWORD *)&v41[15];
        v22 = v42;
        *(_OWORD *)(a1 + 9) = *(_OWORD *)v41;
        *(_QWORD *)(a1 + 24) = v21;
        *(_QWORD *)(a1 + 32) = v22;
LABEL_26:
        result = 0x8000000000000006LL;
        *(_QWORD *)a1 = 0x8000000000000006LL;
        return result;
      }
LABEL_22:
      v19 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
      if ( !v19 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      v20 = v19;
      *v19 = 8LL;
      core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v35, *((_QWORD *)&v35 + 1));
      *(_QWORD *)&v35 = 1LL;
      *((_QWORD *)&v35 + 1) = v20;
      v36 = 1LL;
      goto LABEL_24;
    }
  }
  while ( 1 )
  {
    v11 = *v6;
    LOBYTE(v8) = 2;
    if ( v11 != 43 )
      break;
LABEL_8:
    ++v6;
    v10 = v8;
    if ( !--v7 )
    {
      v10 = v8;
      goto LABEL_5;
    }
  }
  if ( v11 == 47 )
  {
    LOBYTE(v8) = 1;
    goto LABEL_8;
  }
  core::str::converts::from_utf8(&v33, v6, v7, v8);
  v12 = core::result::Result<T,E>::unwrap(&v33);
  v14 = v13;
  core::num::<impl usize>::from_ascii_radix(v39, v12);
  if ( v39[0] == 1 )
  {
    if ( v39[1] == 2 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, v12, v14);
      *(_QWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 8) = v33;
      v24 = 0x8000000000000004LL;
    }
    else
    {
      v25 = core::str::<impl str>::trim_start_matches(v12, v14);
      v27 = v26;
      LODWORD(v33) = 0;
      v28 = core::char::methods::encode_utf8_raw(47LL, &v33);
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v25, v27, v28)
        || (LODWORD(v33) = 0,
            v29 = core::char::methods::encode_utf8_raw(43LL, &v33),
            (unsigned __int8)core::slice::<impl [T]>::starts_with(v25, v27, v29)) )
      {
        v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v25,
                v27);
        if ( !v30 )
          core::str::slice_error_fail(v25, v27, 0LL, 1LL, &off_E8860);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, v30, 1LL);
        v31 = v33;
        v32 = v34;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, v25, v27);
        *(_QWORD *)(a1 + 40) = v34;
        *(_OWORD *)(a1 + 24) = v33;
        *(_OWORD *)a1 = v31;
        *(_QWORD *)(a1 + 16) = v32;
        return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v35, *((_QWORD *)&v35 + 1));
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, v25, v27);
      *(_QWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 8) = v33;
      v24 = 0x8000000000000000LL;
    }
LABEL_40:
    *(_QWORD *)a1 = v24;
    return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v35, *((_QWORD *)&v35 + 1));
  }
  if ( !v40 )
  {
    v24 = 0x8000000000000003LL;
    goto LABEL_40;
  }
  v15 = *((_QWORD *)&v35 + 1) + 8 * v36;
  v16 = v15 == 8;
  v17 = (unsigned __int64 *)(v15 - 8);
  if ( v36 != 0 && !v16 && *v17 >= v40 )
  {
    v24 = 0x8000000000000005LL;
    goto LABEL_40;
  }
  if ( !v9 )
  {
    alloc::vec::Vec<T,A>::push(&v35);
    v9 = v10 != 0;
    goto LABEL_5;
  }
  if ( v10 == 1 )
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, asc_19519, 1LL);
  else
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, asc_1951A, 1LL);
  v38 = v34;
  v37 = v33;
  *(_QWORD *)a1 = 0x8000000000000002LL;
  *(_OWORD *)(a1 + 8) = v37;
  *(_QWORD *)(a1 + 24) = v38;
  return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v35, *((_QWORD *)&v35 + 1));
}