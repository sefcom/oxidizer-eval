void __fastcall rg::flags::hiargs::Patterns::from_low_args(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  _OWORD *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // rax
  _QWORD *v21; // rcx
  char **v22; // rax
  char v23; // [rsp+Fh] [rbp-199h]
  _BYTE v24[48]; // [rsp+10h] [rbp-198h] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-168h]
  __int64 **v26; // [rsp+48h] [rbp-160h]
  __int128 v27; // [rsp+50h] [rbp-158h] BYREF
  __int64 v28; // [rsp+60h] [rbp-148h]
  __int128 v29; // [rsp+68h] [rbp-140h] BYREF
  __int64 v30; // [rsp+78h] [rbp-130h]
  __int128 v31; // [rsp+80h] [rbp-128h] BYREF
  __int64 v32; // [rsp+90h] [rbp-118h]
  __int64 *v33; // [rsp+98h] [rbp-110h] BYREF
  __int64 *v34; // [rsp+A0h] [rbp-108h]
  __m256i v35; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-C8h]
  __int128 v37; // [rsp+F0h] [rbp-B8h]
  __int64 v38; // [rsp+100h] [rbp-A8h]
  __int128 v39; // [rsp+110h] [rbp-98h] BYREF
  __int64 v40; // [rsp+120h] [rbp-88h]
  __int128 v41; // [rsp+130h] [rbp-78h]
  __int64 v42; // [rsp+140h] [rbp-68h]
  __int128 v43; // [rsp+148h] [rbp-60h] BYREF
  __int64 v44; // [rsp+158h] [rbp-50h]
  __int128 v45; // [rsp+160h] [rbp-48h] BYREF
  __int64 v46; // [rsp+170h] [rbp-38h]

  if ( *(_BYTE *)(a3 + 556) )
  {
    *a1 = 0LL;
    a1[1] = 8LL;
    a1[2] = 0LL;
    return;
  }
  if ( !*(_QWORD *)(a3 + 216) )
  {
    if ( *(_QWORD *)(a3 + 192) )
    {
      alloc::vec::Vec<T,A>::remove(&v33, a3 + 176);
      a2 = &v33;
      alloc::string::String::from_utf8(v24);
      if ( *(_QWORD *)v24 == 0x8000000000000000LL )
      {
        v37 = *(_OWORD *)&v24[8];
        v38 = *(_QWORD *)&v24[24];
        v18 = alloc::alloc::Global::alloc_impl(8LL, 24LL, 0LL);
        if ( !v18 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v19 = v37;
        *(_QWORD *)(v18 + 16) = v38;
        *(_OWORD *)v18 = v19;
        *a1 = 1LL;
        a1[1] = v18;
        a1[2] = 1LL;
        return;
      }
      *(_OWORD *)&v35.m256i_u64[1] = *(_OWORD *)v24;
      v35.m256i_i64[3] = *(_QWORD *)&v24[16];
      v35.m256i_i64[0] = 1LL;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::ffi::os_str::OsString>>(&v35);
      v22 = &off_3EB020;
    }
    else
    {
      v22 = &off_3EB010;
    }
    *(_QWORD *)v24 = v22;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    a1[1] = anyhow::__private::format_err(v24, a2, a3, a4, a5, a6);
    *a1 = 0x8000000000000000LL;
    return;
  }
  v26 = a2;
  v25 = a1;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v24);
  v36 = *(_OWORD *)&v24[32];
  v35 = *(__m256i *)v24;
  *(_QWORD *)&v7 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)(a3 + 216), 8LL, 24LL, &off_3EB058);
  v29 = v7;
  v30 = 0LL;
  alloc::vec::Vec<T,A>::drain(&v33, a3 + 200);
  v8 = v33;
  if ( v33 != v34 )
  {
    v23 = *((_BYTE *)v26 + 25);
    do
    {
      while ( 1 )
      {
        v33 = v8 + 4;
        v9 = *v8;
        if ( *v8 == 2 )
          goto LABEL_22;
        v10 = v8 + 1;
        v42 = v10[2];
        v41 = *(_OWORD *)v10;
        if ( (v9 & 1) != 0 )
          break;
        *(_QWORD *)&v24[16] = v10[2];
        *(_OWORD *)v24 = *(_OWORD *)v10;
        rg::flags::hiargs::Patterns::from_low_args::{{closure}}(&v35, &v29, v24);
        v8 = v33;
        if ( v33 == v34 )
          goto LABEL_22;
      }
      v31 = v41;
      v11 = v42;
      v32 = v42;
      if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(
                              *((_QWORD *)&v41 + 1),
                              v42,
                              asc_69BA0,
                              1LL) )
      {
        if ( (v23 & 1) != 0 )
        {
          *(_QWORD *)v24 = &off_3EB030;
          *(_QWORD *)&v24[8] = 1LL;
          *(_QWORD *)&v24[16] = 8LL;
          *(_OWORD *)&v24[24] = 0LL;
          v20 = anyhow::__private::format_err(v24, v11, v12, v13, v14, v15);
          goto LABEL_29;
        }
        grep_cli::pattern::patterns_from_stdin(v24);
        v16 = *(_QWORD *)&v24[8];
        if ( *(_QWORD *)v24 == 0x8000000000000000LL )
          goto LABEL_28;
        v43 = *(_OWORD *)v24;
        v44 = *(_QWORD *)&v24[16];
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v24, &v43);
        while ( 1 )
        {
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, v24);
          if ( (_QWORD)v27 == 0x8000000000000000LL )
            break;
          v40 = v28;
          v39 = v27;
          rg::flags::hiargs::Patterns::from_low_args::{{closure}}(&v35, &v29, &v39);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v24);
        *((_BYTE *)v26 + 25) = 1;
        v23 = 1;
      }
      else
      {
        grep_cli::pattern::patterns_from_path(v24, &v31);
        v16 = *(_QWORD *)&v24[8];
        if ( *(_QWORD *)v24 == 0x8000000000000000LL )
        {
LABEL_28:
          v20 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v16);
LABEL_29:
          v21 = v25;
          v25[1] = v20;
          *v21 = 0x8000000000000000LL;
          core::ptr::drop_in_place<std::path::PathBuf>(&v31);
          core::ptr::drop_in_place<alloc::vec::drain::Drain<rg::flags::lowargs::PatternSource>>(&v33);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29);
          goto LABEL_23;
        }
        v45 = *(_OWORD *)v24;
        v46 = *(_QWORD *)&v24[16];
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v24, &v45);
        while ( 1 )
        {
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, v24);
          if ( (_QWORD)v27 == 0x8000000000000000LL )
            break;
          v40 = v28;
          v39 = v27;
          rg::flags::hiargs::Patterns::from_low_args::{{closure}}(&v35, &v29, &v39);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v24);
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v31);
      v8 = v33;
    }
    while ( v33 != v34 );
  }
LABEL_22:
  core::ptr::drop_in_place<alloc::vec::drain::Drain<rg::flags::lowargs::PatternSource>>(&v33);
  v17 = v25;
  v25[2] = v30;
  *v17 = v29;
LABEL_23:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v35);
}