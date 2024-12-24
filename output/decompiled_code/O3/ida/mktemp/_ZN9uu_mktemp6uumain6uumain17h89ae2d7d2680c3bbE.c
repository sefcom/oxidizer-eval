__int64 __fastcall uu_mktemp::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  __m128i v8; // xmm0
  char v9; // r15
  char v10; // bp
  char v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-478h] BYREF
  __int64 v20; // [rsp+8h] [rbp-470h]
  __int64 v21; // [rsp+10h] [rbp-468h]
  __int64 v22; // [rsp+18h] [rbp-460h] BYREF
  __int128 v23; // [rsp+20h] [rbp-458h]
  __int128 v24; // [rsp+30h] [rbp-448h] BYREF
  __int64 v25; // [rsp+40h] [rbp-438h]
  _BYTE v26[56]; // [rsp+50h] [rbp-428h] BYREF
  __int128 v27; // [rsp+88h] [rbp-3F0h]
  __int64 v28; // [rsp+98h] [rbp-3E0h]
  __m128i v29; // [rsp+A0h] [rbp-3D8h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-3C8h]
  __int128 v31; // [rsp+C0h] [rbp-3B8h]
  __int128 v32; // [rsp+D0h] [rbp-3A8h]
  __int128 v33; // [rsp+E0h] [rbp-398h]
  _OWORD v34[3]; // [rsp+F0h] [rbp-388h] BYREF
  __int64 v35; // [rsp+120h] [rbp-358h]
  __m128i v36; // [rsp+130h] [rbp-348h]
  __int128 v37; // [rsp+140h] [rbp-338h]
  _OWORD v38[2]; // [rsp+150h] [rbp-328h] BYREF
  __int64 v39; // [rsp+178h] [rbp-300h] BYREF
  __m128i v40; // [rsp+180h] [rbp-2F8h]
  __m128i v41; // [rsp+190h] [rbp-2E8h] BYREF
  __int128 v42; // [rsp+1A0h] [rbp-2D8h]
  __int128 v43; // [rsp+1B0h] [rbp-2C8h]
  __int128 v44; // [rsp+1C0h] [rbp-2B8h]
  __int128 v45; // [rsp+1D0h] [rbp-2A8h]

  core::iter::traits::iterator::Iterator::collect(&v19, a1, a2);
  uu_mktemp::uu_app(&v41);
  clap_builder::builder::command::Command::try_get_matches_from(v26, &v41, &v19);
  if ( *(_QWORD *)v26 != 0x8000000000000000LL )
  {
    v35 = *(_QWORD *)&v26[48];
    v8 = _mm_loadu_si128((const __m128i *)v26);
    v34[2] = *(_OWORD *)&v26[32];
    v34[1] = *(_OWORD *)&v26[16];
    v34[0] = v8;
    uu_mktemp::Options::from((__int64)&v29, (__int64)v34);
    std::env::var(&v41, aPosixlyCorrect, 15LL);
    if ( v41.m128i_i64[0] )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v41);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v41);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v34,
                              &unk_15CA8,
                              *(&uu_mktemp::ARG_TEMPLATE + 1)) )
      {
        if ( !v21 )
          core::option::unwrap_failed(&off_1337A0);
        if ( !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(
                                 *(_QWORD *)(v20 + 24 * v21 - 16),
                                 *(_QWORD *)(v20 + 24 * v21 - 8),
                                 v29.m128i_i64[1],
                                 v30) )
        {
          *((_QWORD *)&v42 + 1) = 0x8000000000000006LL;
          v7 = alloc::boxed::Box<T>::new(&v41);
          core::ptr::drop_in_place<uu_mktemp::Options>(&v29);
          goto LABEL_13;
        }
      }
    }
    v9 = BYTE9(v33);
    v10 = BYTE10(v33);
    v11 = BYTE8(v33);
    v45 = v33;
    v12 = _mm_loadu_si128(&v29);
    v44 = v32;
    v43 = v31;
    v42 = v30;
    v41 = v12;
    uu_mktemp::Params::from((__int64)v26, (__int128 *)v41.m128i_i8);
    v13 = *(_QWORD *)v26;
    if ( *(_QWORD *)v26 == 0x8000000000000000LL )
    {
      v14 = _mm_loadu_si128((const __m128i *)&v26[8]);
      v38[0] = *(_OWORD *)&v26[40];
      v37 = *(_OWORD *)&v26[24];
      v36 = v14;
      v43 = *(_OWORD *)&v26[40];
      v42 = *(_OWORD *)&v26[24];
      v41 = v14;
      v7 = alloc::boxed::Box<T>::new(&v41);
LABEL_13:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
      goto LABEL_24;
    }
    v38[1] = v27;
    v38[0] = *(_OWORD *)&v26[40];
    v37 = *(_OWORD *)&v26[24];
    v36 = *(__m128i *)&v26[8];
    v23 = *(_OWORD *)&v26[8];
    v25 = *(_QWORD *)&v26[40];
    v24 = *(_OWORD *)&v26[24];
    *(_QWORD *)&v26[16] = *((_QWORD *)&v27 + 1);
    v15 = _mm_loadu_si128((const __m128i *)((char *)v38 + 8));
    *(__m128i *)v26 = v15;
    v22 = v13;
    if ( v9 )
      uu_mktemp::dry_exec(
        (__int64)&v41,
        v23,
        *((__int64 *)&v23 + 1),
        *(__int64 *)&v26[32],
        *(__int64 *)&v26[40],
        v28,
        v15.m128i_i64[1],
        *((__int64 *)&v27 + 1));
    else
      uu_mktemp::exec(
        (__int64)&v41,
        v23,
        *((__int64 *)&v23 + 1),
        *(__int64 *)&v26[32],
        *(__int64 *)&v26[40],
        v28,
        v15.m128i_i64[1],
        *((__int64 *)&v27 + 1),
        v11);
    v16 = _mm_loadu_si128((const __m128i *)&v41.m128i_u64[1]);
    if ( v10 )
    {
      if ( v41.m128i_i64[0] == 0x8000000000000000LL )
      {
        v7 = uu_mktemp::uumain::uumain::{{closure}}(v16.m128i_i64[0], _mm_shuffle_epi32(v16, 238).m128i_u64[0]);
LABEL_22:
        core::ptr::drop_in_place<alloc::string::String>(v26);
        core::ptr::drop_in_place<alloc::string::String>(&v24);
        core::ptr::drop_in_place<std::path::PathBuf>(&v22);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
        goto LABEL_24;
      }
    }
    else if ( v41.m128i_i64[0] == 0x8000000000000000LL )
    {
      v7 = v16.m128i_i64[0];
      goto LABEL_22;
    }
    v39 = v41.m128i_i64[0];
    v40 = v16;
    v17 = uucore::mods::display::println_verbatim(&v39);
    v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
    core::ptr::drop_in_place<alloc::string::String>(v26);
    core::ptr::drop_in_place<alloc::string::String>(&v24);
    core::ptr::drop_in_place<std::path::PathBuf>(&v22);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
    goto LABEL_24;
  }
  v2 = *(_QWORD *)&v26[8];
  if ( *(_BYTE *)(*(_QWORD *)&v26[8] + 213LL) != 5 )
    goto LABEL_7;
  v3 = *(_QWORD *)(*(_QWORD *)&v26[8] + 64LL);
  v4 = *(_QWORD *)(*(_QWORD *)&v26[8] + 40LL) + *(_QWORD *)(*(_QWORD *)&v26[8] + 48LL);
  v5 = v3 + 32LL * *(_QWORD *)(*(_QWORD *)&v26[8] + 72LL);
  v41.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)&v26[8] + 40LL);
  v41.m128i_i64[1] = v4;
  *(_QWORD *)&v42 = v3;
  *((_QWORD *)&v42 + 1) = v5;
  v6 = core::iter::traits::iterator::Iterator::try_fold(&v41);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v6) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v29, aTooManyTemplat, 18LL);
    *(_QWORD *)&v42 = v30;
    v41 = _mm_loadu_si128(&v29);
    DWORD2(v42) = 1;
    v7 = alloc::boxed::Box<T>::new(&v41);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  }
  else
  {
LABEL_7:
    v7 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  }
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v19);
  return v7;
}
