_QWORD *__fastcall flealib::screenshot::Screenshot::take_screenshot(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rbp
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  char **v20; // rsi
  __int64 (__fastcall *v21)(); // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r14
  __int16 v30; // ax
  __int64 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rax
  unsigned __int64 i; // rax
  _QWORD *v35; // r14
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // rax
  char **v41; // rdx
  __int64 v42; // [rsp+0h] [rbp-198h] BYREF
  __int128 *v43; // [rsp+8h] [rbp-190h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+10h] [rbp-188h]
  __int128 v45; // [rsp+18h] [rbp-180h] BYREF
  __m256i v46; // [rsp+28h] [rbp-170h]
  __int128 v47; // [rsp+48h] [rbp-150h]
  __int128 v48; // [rsp+58h] [rbp-140h] BYREF
  const char *v49; // [rsp+68h] [rbp-130h]
  __int64 v50; // [rsp+70h] [rbp-128h]
  __int64 v51; // [rsp+78h] [rbp-120h]
  __int128 *v52; // [rsp+88h] [rbp-110h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+90h] [rbp-108h]
  __int64 v54; // [rsp+98h] [rbp-100h]
  _QWORD *v55; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-F0h]
  __int64 (__fastcall *v57)(); // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-E0h] BYREF
  const char *v59; // [rsp+C8h] [rbp-D0h]
  __int64 v60; // [rsp+D0h] [rbp-C8h]
  __int64 v61; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+E0h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+E8h] [rbp-B0h]
  __int128 v64; // [rsp+F0h] [rbp-A8h] BYREF
  __m256i v65; // [rsp+100h] [rbp-98h]
  __int128 v66; // [rsp+120h] [rbp-78h]
  __int64 v67; // [rsp+138h] [rbp-60h]
  __int64 v68; // [rsp+140h] [rbp-58h]
  unsigned __int64 v69; // [rsp+148h] [rbp-50h]
  __int128 v70; // [rsp+150h] [rbp-48h] BYREF
  const char *v71; // [rsp+160h] [rbp-38h]

  v6 = a1;
  v7 = core::time::Duration::new(1LL, 0LL);
  v9 = core::time::Duration::checked_div(v7, v8);
  if ( v10 == 1000000000 )
    core::option::expect_failed(aDivideByZeroEr, 53LL, &off_70BBA0);
  v11 = v9;
  v12 = v10;
  scrap::common::x11::Display::primary(&v58);
  if ( BYTE4(v59) == 2 )
  {
    v43 = (__int128 *)v58;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      <T as alloc::string::SpecToString>::spec_to_string(&v48, &v43);
      v52 = &v48;
      v53 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = asc_4FB30;
      *((_QWORD *)&v45 + 1) = 1LL;
      v46.m256i_i64[0] = (__int64)&v52;
      *(_OWORD *)&v46.m256i_u64[1] = 1uLL;
      v13 = log::__private_api::loc(&off_70BCD8);
      *(_QWORD *)&v64 = aFlealibScreens;
      *((_QWORD *)&v64 + 1) = 19LL;
      v65.m256i_i64[0] = (__int64)aFlealibScreens;
      v65.m256i_i64[1] = 19LL;
      v65.m256i_i64[2] = v13;
      log::__private_api::log(&v45, 1LL, &v64);
      core::ptr::drop_in_place<alloc::string::String>(&v48);
    }
    <T as alloc::string::SpecToString>::spec_to_string(&v45, &v43);
    a1[2] = v46.m256i_i64[0];
    *(_OWORD *)a1 = v45;
    core::ptr::drop_in_place<std::io::error::Error>(&v43);
    return v6;
  }
  v71 = v59;
  v70 = v58;
  scrap::common::x11::Capturer::new(&v45, &v70);
  if ( v46.m256i_i8[28] == 2 )
  {
    v42 = v45;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      <T as alloc::string::SpecToString>::spec_to_string(&v52, &v42);
      v43 = (__int128 *)&v52;
      v44 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v48 = asc_4FB30;
      *((_QWORD *)&v48 + 1) = 1LL;
      v51 = 0LL;
      v49 = (const char *)&v43;
      v50 = 1LL;
      v14 = log::__private_api::loc(&off_70BCC0);
      *(_QWORD *)&v58 = aFlealibScreens;
      *((_QWORD *)&v58 + 1) = 19LL;
      v59 = aFlealibScreens;
      v60 = 19LL;
      v61 = v14;
      log::__private_api::log(&v48, 1LL, &v58);
      core::ptr::drop_in_place<alloc::string::String>(&v52);
    }
    <T as alloc::string::SpecToString>::spec_to_string(&v48, &v42);
    a1[2] = v49;
    *(_OWORD *)a1 = v48;
    core::ptr::drop_in_place<std::io::error::Error>(&v42);
    return v6;
  }
  v67 = a3;
  v68 = a4;
  v66 = v47;
  v65 = v46;
  v64 = v45;
  v56 = v46.m256i_u16[10];
  v63 = v46.m256i_u16[11];
  v55 = a1;
  while ( 1 )
  {
    scrap::common::x11::Capturer::frame(&v43, &v64);
    v15 = v43;
    if ( v43 )
      break;
    v57 = v44;
    if ( (unsigned __int8)std::io::error::Error::kind() != 13 )
    {
      v31 = std::io::error::Error::new(40LL, aExceptionWhile, 34LL);
      v32 = v55;
      v42 = v31;
      if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
      {
        <T as alloc::string::SpecToString>::spec_to_string(&v58, &v42);
        v52 = &v58;
        v53 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v45 = asc_4FB30;
        *((_QWORD *)&v45 + 1) = 1LL;
        v46.m256i_i64[0] = (__int64)&v52;
        *(_OWORD *)&v46.m256i_u64[1] = 1uLL;
        v33 = log::__private_api::loc(&off_70BCA8);
        *(_QWORD *)&v48 = aFlealibScreens;
        *((_QWORD *)&v48 + 1) = 19LL;
        v49 = aFlealibScreens;
        v50 = 19LL;
        v51 = v33;
        log::__private_api::log(&v45, 1LL, &v48);
        core::ptr::drop_in_place<alloc::string::String>(&v58);
      }
      <T as alloc::string::SpecToString>::spec_to_string(&v45, &v42);
      v32[2] = v46.m256i_i64[0];
      *(_OWORD *)v32 = v45;
      core::ptr::drop_in_place<std::io::error::Error>(&v42);
      core::ptr::drop_in_place<std::io::error::Error>(&v57);
      goto LABEL_37;
    }
    std::thread::sleep(v11, v12);
    core::ptr::drop_in_place<std::io::error::Error>(&v57);
  }
  v16 = (unsigned __int64)v44;
  v17 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER);
  v18 = v63;
  if ( v17 >= 4 )
  {
    *(_QWORD *)&v45 = &off_70BB80;
    *((_QWORD *)&v45 + 1) = 1LL;
    v46.m256i_i64[0] = 8LL;
    *(_OWORD *)&v46.m256i_u64[1] = 0LL;
    v19 = log::__private_api::loc(&off_70BBB8);
    *(_QWORD *)&v48 = aFlealibScreens;
    *((_QWORD *)&v48 + 1) = 19LL;
    v49 = aFlealibScreens;
    v50 = 19LL;
    v51 = v19;
    log::__private_api::log(&v45, 4LL, &v48);
  }
  v20 = &off_70BBD0;
  v52 = (__int128 *)alloc::raw_vec::RawVecInner<A>::with_capacity_in(4 * v18 * v56, &off_70BBD0);
  v53 = v21;
  v54 = 0LL;
  if ( !v18 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_70BBE8);
  if ( HIDWORD(v16) )
  {
    v22 = v16 % v18;
    v62 = v16 / v18;
    if ( v56 )
    {
LABEL_19:
      v23 = 0LL;
      while ( 1 )
      {
        v24 = v23;
        v69 = <usize as core::iter::range::Step>::forward_unchecked(v23, v20, v22);
        v25 = v62 * v24;
        v26 = 0LL;
        do
        {
          v27 = <usize as core::iter::range::Step>::forward_unchecked(v26, v20, v22);
          v28 = v25 + 4 * v26 + 2;
          if ( v28 >= v16 )
          {
            v41 = &off_70BC48;
            goto LABEL_45;
          }
          v29 = v27;
          v28 = v25 + 4 * v26;
          if ( v28 + 1 >= v16 )
          {
            ++v28;
            v41 = &off_70BC60;
            goto LABEL_45;
          }
          if ( v28 >= v16 )
          {
            v41 = &off_70BC78;
LABEL_45:
            core::panicking::panic_bounds_check(v28, v16, v41);
          }
          v30 = __ROL2__(*(_WORD *)((char *)v15 + v28), 8);
          LOBYTE(v45) = *((_BYTE *)v15 + v28 + 2);
          *(_WORD *)((char *)&v45 + 1) = v30;
          BYTE3(v45) = -1;
          v20 = (char **)&v45;
          alloc::vec::Vec<T,A>::append_elements(&v52, &v45, 4LL, &off_70BC90);
          v26 = v29;
        }
        while ( v29 < v56 );
        LODWORD(v18) = v63;
        v23 = v69;
        if ( v69 >= v63 )
          goto LABEL_33;
      }
    }
  }
  else
  {
    v22 = (unsigned int)v16 % (unsigned int)v18;
    v62 = (unsigned int)v16 / (unsigned int)v18;
    if ( v56 )
      goto LABEL_19;
  }
  for ( i = 0LL; i < v18; i = <usize as core::iter::range::Step>::forward_unchecked(i, &off_70BBD0, v22) )
    ;
LABEL_33:
  std::fs::File::create(&v45, v67, v68);
  v35 = v55;
  v36 = core::result::Result<T,E>::unwrap(&v45);
  v37 = repng::encode(v36, v56, (unsigned int)v18, v53, v54);
  if ( v37 )
  {
    v42 = v37;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      <T as alloc::string::SpecToString>::spec_to_string(&v58, &v42);
      v43 = &v58;
      v44 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = asc_4FB30;
      *((_QWORD *)&v45 + 1) = 1LL;
      v46.m256i_i64[0] = (__int64)&v43;
      *(_OWORD *)&v46.m256i_u64[1] = 1uLL;
      v38 = log::__private_api::loc(&off_70BC30);
      *(_QWORD *)&v48 = aFlealibScreens;
      *((_QWORD *)&v48 + 1) = 19LL;
      v49 = aFlealibScreens;
      v50 = 19LL;
      v51 = v38;
      log::__private_api::log(&v45, 1LL, &v48);
      core::ptr::drop_in_place<alloc::string::String>(&v58);
    }
    <T as alloc::string::SpecToString>::spec_to_string(&v45, &v42);
    v35[2] = v46.m256i_i64[0];
    *(_OWORD *)v35 = v45;
    core::ptr::drop_in_place<std::io::error::Error>(&v42);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v52);
LABEL_37:
    core::ptr::drop_in_place<scrap::common::x11::Capturer>(&v64);
    return v55;
  }
  else
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) > 3 )
    {
      *(_QWORD *)&v45 = &off_70BB90;
      *((_QWORD *)&v45 + 1) = 1LL;
      v46.m256i_i64[0] = 8LL;
      *(_OWORD *)&v46.m256i_u64[1] = 0LL;
      v40 = log::__private_api::loc(&off_70BC18);
      *(_QWORD *)&v48 = aFlealibScreens;
      *((_QWORD *)&v48 + 1) = 19LL;
      v49 = aFlealibScreens;
      v50 = 19LL;
      v51 = v40;
      log::__private_api::log(&v45, 4LL, &v48);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v52);
    v6 = v55;
    *v55 = 0x8000000000000000LL;
    core::ptr::drop_in_place<scrap::common::x11::Capturer>(&v64);
  }
  return v6;
}