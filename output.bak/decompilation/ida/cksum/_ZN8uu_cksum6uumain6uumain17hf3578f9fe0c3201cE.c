__int64 __fastcall uu_cksum::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  unsigned __int8 flag; // bp
  __int64 v5; // rax
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  char v8; // al
  _QWORD *v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // r13
  unsigned __int8 v14; // r14
  unsigned __int8 v15; // r12
  unsigned __int8 v16; // bp
  unsigned __int8 v17; // al
  unsigned __int8 v19; // r15
  int v20; // r13d
  int v21; // r14d
  __int64 v22; // r13
  char v23; // r14
  char v24; // bp
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int8 v28; // [rsp+Eh] [rbp-3DAh]
  __int16 v29; // [rsp+Eh] [rbp-3DAh]
  unsigned __int8 v30; // [rsp+Fh] [rbp-3D9h]
  __int128 v31; // [rsp+10h] [rbp-3D8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-3C8h]
  __int64 v33; // [rsp+28h] [rbp-3C0h]
  __int64 v34; // [rsp+30h] [rbp-3B8h]
  _QWORD v35[2]; // [rsp+38h] [rbp-3B0h] BYREF
  __m256i v36; // [rsp+48h] [rbp-3A0h]
  __int64 v37; // [rsp+68h] [rbp-380h]
  __int64 v38; // [rsp+70h] [rbp-378h] BYREF
  __int64 v39; // [rsp+78h] [rbp-370h]
  __m256i v40; // [rsp+80h] [rbp-368h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-348h]
  __int64 v42; // [rsp+B0h] [rbp-338h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-330h]
  __int64 v44; // [rsp+C0h] [rbp-328h]
  __int128 v45; // [rsp+C8h] [rbp-320h]
  __int64 v46; // [rsp+D8h] [rbp-310h]
  __int64 v47; // [rsp+E0h] [rbp-308h]
  __int16 v48; // [rsp+E8h] [rbp-300h]
  char v49; // [rsp+EAh] [rbp-2FEh]
  char v50; // [rsp+EBh] [rbp-2FDh]
  __int64 v51[14]; // [rsp+378h] [rbp-70h] BYREF

  uu_cksum::uu_app(&v42);
  clap_builder::builder::command::Command::try_get_matches_from(&v38, &v42, a1, a2);
  if ( v38 != 0x8000000000000000LL )
  {
    v37 = v41;
    v36 = v40;
    v35[0] = v38;
    v35[1] = v39;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aCheck, 5LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, v35, aAlgorithm, 9LL);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aAlgorithm, 9LL, &v42);
    if ( v5 )
    {
      v31 = *(_OWORD *)(v5 + 8);
      v6 = <T as core::slice::cmp::SliceContains>::slice_contains(&v31, &off_352958, 3LL);
      LOBYTE(v7) = 12;
      if ( (v6 & flag) != 0 )
        goto LABEL_17;
    }
    else if ( flag )
    {
      v31 = 1uLL;
      v8 = <T as core::slice::cmp::SliceContains>::slice_contains(&v31, &off_352958, 3LL);
      LOBYTE(v7) = 12;
      if ( v8 )
        goto LABEL_17;
    }
    else
    {
      *(_QWORD *)&v31 = aCrc;
      *((_QWORD *)&v31 + 1) = 3LL;
      <T as core::slice::cmp::SliceContains>::slice_contains(&v31, &off_352958, 3LL);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, v35, aLength, 6LL);
    v9 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aLength, 6LL, &v42);
    if ( v9 )
    {
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, *((_QWORD *)&v31 + 1), aBlake2b_0, 7LL);
      LOBYTE(v7) = 10;
      if ( !v10 )
      {
LABEL_17:
        v3 = alloc::boxed::Box<T>::new((unsigned __int8)v7);
        goto LABEL_18;
      }
      uucore::features::checksum::calculate_blake2b_length(&v42, *v9, v11, v7);
      v12 = v43;
      v2 = v44;
      if ( v42 )
      {
        v3 = v43;
LABEL_18:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
        return v3;
      }
    }
    else
    {
      v12 = 0LL;
    }
    v32 = v2;
    if ( !flag )
    {
      uu_cksum::handle_tag_text_binary_flags((__int64)&v42, (__int64)v35);
      v3 = v42;
      if ( !v42 )
      {
        v29 = v43;
        uucore::features::checksum::detect_algo(&v42, v31, *((_QWORD *)&v31 + 1), v12, v32);
        v22 = v42;
        v3 = v43;
        if ( v42 )
        {
          *(_OWORD *)&v40.m256i_u64[1] = v45;
          v38 = v42;
          v39 = v43;
          v40.m256i_i64[0] = v44;
          v23 = 10;
          if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aZero_0, 4LL) )
            v23 = 0;
          v24 = 1;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aRaw, 3LL) )
            v24 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aBase64, 6LL);
          v33 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v40);
          v34 = v25;
          v26 = v40.m256i_i64[2];
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, v35, "filemode{", 4LL);
          clap_builder::parser::error::MatchesError::unwrap(v51, "filemode{", 4LL, &v42);
          v42 = v12;
          v43 = v32;
          v44 = v22;
          *(_QWORD *)&v45 = v3;
          *((_QWORD *)&v45 + 1) = v33;
          v46 = v34;
          v47 = v26;
          v48 = v29;
          v49 = v24;
          v50 = v23;
          if ( v51[0] )
            v27 = uu_cksum::cksum((__int64)&v42);
          else
            v27 = uu_cksum::cksum((__int64)&v42);
          v3 = v27;
          if ( !v27 )
          {
            core::ptr::drop_in_place<uu_cksum::Options>(v40.m256i_i64[0], v40.m256i_i64[1]);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
            return 0LL;
          }
          core::ptr::drop_in_place<uu_cksum::Options>(v40.m256i_i64[0], v40.m256i_i64[1]);
        }
      }
      goto LABEL_18;
    }
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aText, 4LL);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aBinary_0, 6LL);
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aStrict, 6LL);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aStatus, 6LL);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aWarn, 4LL);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aIgnoreMissing, 14LL);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aQuiet, 5LL);
    LOBYTE(v7) = 11;
    if ( !(v14 | v13) )
    {
      v19 = v17;
      v20 = DWORD2(v31);
      v21 = DWORD2(v31);
      if ( *((_QWORD *)&v31 + 1) )
        v21 = v31;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, v35, "filemode{", 4LL);
      clap_builder::parser::error::MatchesError::unwrap(&v38, "filemode{", 4LL, &v42);
      core::option::Option<T>::map_or_else(&v42, &v38);
      v3 = uucore::features::checksum::perform_checksum_validation(
             v43,
             (int)v43 + 16 * (int)v44,
             v21,
             v20,
             v12,
             v32,
             (v19 << 16) | (v16 << 8) | (v28 << 24) | ((unsigned __int64)v30 << 32) | ((unsigned __int64)v15 << 40));
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v42);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v39);
}
