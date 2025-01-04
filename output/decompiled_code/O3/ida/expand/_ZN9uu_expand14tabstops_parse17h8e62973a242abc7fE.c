__int64 __fastcall uu_expand::tabstops_parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 started; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  char v11; // bl
  char v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r13
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  _QWORD *v23; // rax
  bool v24; // cf
  char v25; // al
  __int64 result; // rax
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int128 v36; // xmm0
  __int128 v37; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v38; // [rsp+20h] [rbp-118h]
  __int128 v39; // [rsp+30h] [rbp-108h] BYREF
  __int64 v40; // [rsp+40h] [rbp-F8h]
  __int128 v41; // [rsp+48h] [rbp-F0h]
  __int64 v42; // [rsp+58h] [rbp-E0h]
  _OWORD v43[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int16 v44; // [rsp+98h] [rbp-A0h]
  __int128 v45; // [rsp+A0h] [rbp-98h]
  __int64 v46; // [rsp+B0h] [rbp-88h]
  _BYTE v47[8]; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+C8h] [rbp-70h]
  __int128 v49; // [rsp+D0h] [rbp-68h]
  __int64 v50; // [rsp+E0h] [rbp-58h]
  __int128 v51; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v52; // [rsp+100h] [rbp-38h]

  v3 = a1;
  started = core::str::<impl str>::trim_start_matches(a2, a3);
  if ( !v5 )
  {
    v21 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v21 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v21 = 8LL;
    alloc::slice::hack::into_vec(&v39, v21, 1LL);
    *(_QWORD *)((char *)&v43[1] + 7) = v40;
    *(_OWORD *)((char *)v43 + 7) = v39;
    *(_BYTE *)(a1 + 8) = 0;
    goto LABEL_29;
  }
  *(_QWORD *)&v37 = 0LL;
  *((_QWORD *)&v37 + 1) = 8LL;
  v38 = 0LL;
  v6 = v5;
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v43[1], started);
  *(_QWORD *)&v43[0] = 0LL;
  *((_QWORD *)&v43[0] + 1) = v6;
  v44 = 1;
  v7 = core::str::iter::SplitInternal<P>::next(v43);
  if ( !v7 )
  {
    v12 = 0;
    goto LABEL_24;
  }
  v9 = v7;
  v10 = v8;
  v11 = 0;
  v12 = 0;
  while ( 2 )
  {
    if ( !v10 )
      goto LABEL_5;
    v14 = 0LL;
    while ( 1 )
    {
      v15 = <usize as core::iter::range::Step>::forward_unchecked(v14);
      v16 = *(unsigned __int8 *)(v9 + v14);
      LOBYTE(v17) = 2;
      if ( v16 != 43 )
        break;
LABEL_8:
      v14 = v15;
      v12 = v17;
      if ( v15 >= v10 )
      {
        v12 = v17;
        goto LABEL_5;
      }
    }
    if ( v16 == 47 )
    {
      LOBYTE(v17) = 1;
      goto LABEL_8;
    }
    core::str::converts::from_utf8(&v39, v14 + v9, v10 - v14, v17);
    v18 = core::result::Result<T,E>::unwrap(&v39);
    v20 = v19;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v47, v18);
    if ( v47[0] )
    {
      if ( v47[1] != 2 )
      {
        v30 = core::str::<impl str>::trim_start_matches(v18, v20);
        v32 = v31;
        LODWORD(v39) = 0;
        v33 = core::char::methods::encode_utf8_raw(47LL, &v39);
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v30, v32, v33, 1LL)
          || (LODWORD(v39) = 0,
              v34 = core::char::methods::encode_utf8_raw(43LL, &v39),
              (unsigned __int8)core::slice::<impl [T]>::starts_with(v30, v32, v34, 1LL)) )
        {
          v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v30,
                  v32);
          if ( !v35 )
            core::str::slice_error_fail(v30, v32, 0LL, 1LL, &off_11CD68);
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v39, v35, 1LL);
          v50 = v40;
          v49 = v39;
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v51, v30, v32);
          v42 = v52;
          v41 = v51;
          v40 = v50;
          v36 = v49;
          v39 = v49;
          *(_QWORD *)(a1 + 40) = *((_QWORD *)&v51 + 1);
          *(_QWORD *)(a1 + 48) = v42;
          *(_QWORD *)(a1 + 24) = v40;
          *(_QWORD *)(a1 + 32) = v41;
          *(_OWORD *)(a1 + 8) = v36;
          *(_QWORD *)a1 = 1LL;
        }
        else
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v39, v30, v32);
          *(_QWORD *)(a1 + 24) = v40;
          *(_OWORD *)(a1 + 8) = v39;
          *(_QWORD *)(a1 + 32) = 0x8000000000000000LL;
          *(_QWORD *)a1 = 1LL;
        }
        return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v37);
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v39, v18, v20);
      v28 = (_QWORD *)a1;
      *(_QWORD *)(a1 + 24) = v40;
      *(_OWORD *)(a1 + 8) = v39;
      v29 = 0x8000000000000004LL;
LABEL_43:
      v28[4] = v29;
      *v28 = 1LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v37);
    }
    if ( !v48 )
    {
      v29 = 0x8000000000000003LL;
LABEL_36:
      v28 = (_QWORD *)a1;
      goto LABEL_43;
    }
    if ( v38 && *(_QWORD *)(*((_QWORD *)&v37 + 1) + 8 * v38 - 8) >= v48 )
    {
      v29 = 0x8000000000000005LL;
      goto LABEL_36;
    }
    if ( (v11 & 1) != 0 )
    {
      if ( v12 == 1 )
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v39, asc_1D08C, 1LL);
      else
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v39, asc_1D08D, 1LL);
      v28 = (_QWORD *)a1;
      v46 = v40;
      v45 = v39;
      *(_QWORD *)(a1 + 24) = v40;
      *(_OWORD *)(a1 + 8) = v45;
      v29 = 0x8000000000000002LL;
      goto LABEL_43;
    }
    alloc::vec::Vec<T,A>::push(&v37);
    if ( v12 )
      v11 = 1;
LABEL_5:
    v9 = core::str::iter::SplitInternal<P>::next(v43);
    v10 = v13;
    if ( v9 )
      continue;
    break;
  }
  v22 = v38;
  v3 = a1;
  if ( !v38 )
  {
LABEL_24:
    v23 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v23 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v23 = 8LL;
    alloc::slice::hack::into_vec(v43, v23, 1LL);
    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v37);
    v22 = *(_QWORD *)&v43[1];
    v38 = *(_QWORD *)&v43[1];
    v37 = v43[0];
  }
  v24 = v22 < 2;
  v25 = v12;
  if ( v24 )
    v25 = 0;
  *(_QWORD *)((char *)&v43[1] + 7) = v38;
  *(_OWORD *)((char *)v43 + 7) = v37;
  *(_BYTE *)(v3 + 8) = v25;
LABEL_29:
  v27 = *(_QWORD *)((char *)&v43[1] + 7);
  result = *(_QWORD *)((char *)v43 + 15);
  *(_OWORD *)(v3 + 9) = v43[0];
  *(_OWORD *)(v3 + 24) = __PAIR128__(v27, result);
  *(_QWORD *)v3 = 0LL;
  return result;
}
