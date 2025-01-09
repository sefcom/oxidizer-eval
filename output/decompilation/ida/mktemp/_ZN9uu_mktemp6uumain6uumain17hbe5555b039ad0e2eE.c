__int64 __fastcall uu_mktemp::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __m128i v3; // xmm0
  unsigned __int8 v4; // al
  __int64 v5; // rbx
  __m128i v6; // xmm0
  char v7; // r15
  char v8; // bp
  char v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-478h] BYREF
  __int64 v18; // [rsp+8h] [rbp-470h]
  __int64 v19; // [rsp+10h] [rbp-468h]
  __int64 v20; // [rsp+18h] [rbp-460h] BYREF
  __int128 v21; // [rsp+20h] [rbp-458h]
  __int128 v22; // [rsp+30h] [rbp-448h] BYREF
  __int64 v23; // [rsp+40h] [rbp-438h]
  __m128i v24; // [rsp+50h] [rbp-428h] BYREF
  __int128 v25; // [rsp+60h] [rbp-418h]
  __int128 v26; // [rsp+70h] [rbp-408h]
  __int128 v27; // [rsp+80h] [rbp-3F8h]
  __int128 v28; // [rsp+90h] [rbp-3E8h]
  _BYTE v29[56]; // [rsp+A0h] [rbp-3D8h] BYREF
  __int128 v30; // [rsp+D8h] [rbp-3A0h]
  __int64 v31; // [rsp+E8h] [rbp-390h]
  _OWORD v32[3]; // [rsp+F0h] [rbp-388h] BYREF
  __int64 v33; // [rsp+120h] [rbp-358h]
  __m128i v34; // [rsp+130h] [rbp-348h]
  __int128 v35; // [rsp+140h] [rbp-338h]
  _OWORD v36[2]; // [rsp+150h] [rbp-328h] BYREF
  __int64 v37; // [rsp+178h] [rbp-300h] BYREF
  __m128i v38; // [rsp+180h] [rbp-2F8h]
  __m128i v39; // [rsp+190h] [rbp-2E8h] BYREF
  __int128 v40; // [rsp+1A0h] [rbp-2D8h]
  __int128 v41; // [rsp+1B0h] [rbp-2C8h]
  __int128 v42; // [rsp+1C0h] [rbp-2B8h]
  __int128 v43; // [rsp+1D0h] [rbp-2A8h]

  core::iter::traits::iterator::Iterator::collect(&v17, a1, a2);
  uu_mktemp::uu_app(&v39);
  clap_builder::builder::command::Command::try_get_matches_from(v29, &v39, &v17);
  if ( *(_QWORD *)v29 != 0x8000000000000000LL )
  {
    v33 = *(_QWORD *)&v29[48];
    v6 = _mm_loadu_si128((const __m128i *)v29);
    v32[2] = *(_OWORD *)&v29[32];
    v32[1] = *(_OWORD *)&v29[16];
    v32[0] = v6;
    uu_mktemp::Options::from((__int64)&v24, (__int64)v32);
    std::env::var(&v39, aPosixlyCorrect, 15LL);
    if ( v39.m128i_i64[0] )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v39);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v39);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v32,
                              &unk_15E20,
                              *(&uu_mktemp::ARG_TEMPLATE + 1)) )
      {
        if ( !v19 )
          core::option::unwrap_failed(&off_133DB8);
        if ( !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(
                                 *(_QWORD *)(v18 + 24 * v19 - 16),
                                 *(_QWORD *)(v18 + 24 * v19 - 8),
                                 v24.m128i_i64[1],
                                 v25) )
        {
          *((_QWORD *)&v40 + 1) = 0x8000000000000006LL;
          v5 = alloc::boxed::Box<T>::new(&v39);
          core::ptr::drop_in_place<uu_mktemp::Options>(&v24);
          goto LABEL_13;
        }
      }
    }
    v7 = BYTE9(v28);
    v8 = BYTE10(v28);
    v9 = BYTE8(v28);
    v43 = v28;
    v10 = _mm_loadu_si128(&v24);
    v42 = v27;
    v41 = v26;
    v40 = v25;
    v39 = v10;
    uu_mktemp::Params::from((__int64)v29, (__int128 *)v39.m128i_i8);
    v11 = *(_QWORD *)v29;
    if ( *(_QWORD *)v29 == 0x8000000000000000LL )
    {
      v12 = _mm_loadu_si128((const __m128i *)&v29[8]);
      v36[0] = *(_OWORD *)&v29[40];
      v35 = *(_OWORD *)&v29[24];
      v34 = v12;
      v41 = *(_OWORD *)&v29[40];
      v40 = *(_OWORD *)&v29[24];
      v39 = v12;
      v5 = alloc::boxed::Box<T>::new(&v39);
LABEL_13:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
      goto LABEL_24;
    }
    v36[1] = v30;
    v36[0] = *(_OWORD *)&v29[40];
    v35 = *(_OWORD *)&v29[24];
    v34 = *(__m128i *)&v29[8];
    v21 = *(_OWORD *)&v29[8];
    v23 = *(_QWORD *)&v29[40];
    v22 = *(_OWORD *)&v29[24];
    *(_QWORD *)&v29[16] = *((_QWORD *)&v30 + 1);
    v13 = _mm_loadu_si128((const __m128i *)((char *)v36 + 8));
    *(__m128i *)v29 = v13;
    v20 = v11;
    if ( v7 )
      uu_mktemp::dry_exec(
        (__int64)&v39,
        v21,
        *((__int64 *)&v21 + 1),
        *(__int64 *)&v29[32],
        *(__int64 *)&v29[40],
        v31,
        v13.m128i_i64[1],
        *((__int64 *)&v30 + 1));
    else
      uu_mktemp::exec(
        (__int64)&v39,
        v21,
        *((__int64 *)&v21 + 1),
        *(__int64 *)&v29[32],
        *(__int64 *)&v29[40],
        v31,
        v13.m128i_i64[1],
        *((__int64 *)&v30 + 1),
        v9);
    v14 = _mm_loadu_si128((const __m128i *)&v39.m128i_u64[1]);
    if ( v8 )
    {
      if ( v39.m128i_i64[0] == 0x8000000000000000LL )
      {
        v5 = uu_mktemp::uumain::uumain::{{closure}}(v14.m128i_i64[0], _mm_shuffle_epi32(v14, 238).m128i_u64[0]);
LABEL_22:
        core::ptr::drop_in_place<alloc::string::String>(v29);
        core::ptr::drop_in_place<alloc::string::String>(&v22);
        core::ptr::drop_in_place<std::path::PathBuf>(&v20);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
        goto LABEL_24;
      }
    }
    else if ( v39.m128i_i64[0] == 0x8000000000000000LL )
    {
      v5 = v14.m128i_i64[0];
      goto LABEL_22;
    }
    v37 = v39.m128i_i64[0];
    v38 = v14;
    v15 = uucore::mods::display::println_verbatim(&v37);
    v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15);
    core::ptr::drop_in_place<alloc::string::String>(v29);
    core::ptr::drop_in_place<alloc::string::String>(&v22);
    core::ptr::drop_in_place<std::path::PathBuf>(&v20);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
    goto LABEL_24;
  }
  v2 = *(_QWORD *)&v29[8];
  if ( *(_BYTE *)(*(_QWORD *)&v29[8] + 213LL) == 5
    && (clap_builder::util::flat_map::FlatMap<K,V>::iter(&v39, *(_QWORD *)&v29[8] + 32LL),
        v3 = _mm_loadu_si128(&v39),
        v25 = v40,
        v24 = v3,
        v4 = core::iter::traits::iterator::Iterator::try_fold(&v24),
        (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v4)) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, aTooManyTemplat, 18LL);
    *(_QWORD *)&v40 = v25;
    v39 = _mm_loadu_si128(&v24);
    DWORD2(v40) = 1;
    v5 = alloc::boxed::Box<T>::new(&v39);
    core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  }
  else
  {
    v5 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  }
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
  return v5;
}
