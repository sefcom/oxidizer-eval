_QWORD *__fastcall uu_split::Settings::from(_QWORD *dest, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int8 v11; // al
  char v12; // al
  __int64 v13; // rcx
  char *v14; // r13
  __int64 v15; // rbp
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // bp
  char flag; // al
  __int64 v24; // rcx
  char **v26; // rdi
  char v27; // [rsp+Ch] [rbp-1ECh]
  __int128 v28; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v29; // [rsp+20h] [rbp-1D8h]
  __int128 v30; // [rsp+30h] [rbp-1C8h]
  __int128 v31; // [rsp+40h] [rbp-1B8h]
  __int128 v32; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-198h]
  __int64 v34; // [rsp+70h] [rbp-188h]
  __int64 v35; // [rsp+78h] [rbp-180h] BYREF
  _BYTE src[168]; // [rsp+80h] [rbp-178h] BYREF
  __int64 v37; // [rsp+128h] [rbp-D0h]
  __int128 v38; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+140h] [rbp-B8h]
  __int128 v40; // [rsp+148h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+158h] [rbp-A0h]
  __int128 v42; // [rsp+160h] [rbp-98h]
  __int64 v43; // [rsp+170h] [rbp-88h]
  __int128 v44; // [rsp+180h] [rbp-78h] BYREF
  __int64 v45; // [rsp+190h] [rbp-68h]
  __int128 v46; // [rsp+1A0h] [rbp-58h]
  __int128 v47; // [rsp+1B0h] [rbp-48h]

  uu_split::strategy::Strategy::from((__int64)src, a2, a3, a4);
  v4 = *(_QWORD *)src;
  v28 = *(_OWORD *)&src[8];
  *(_QWORD *)&v29 = *(_QWORD *)&src[24];
  if ( *(_QWORD *)src != 4LL )
  {
    v7 = *(_QWORD *)&src[32];
    v8 = v28;
    v32 = v28;
    *(_QWORD *)&v33 = v29;
    dest[4] = v29;
    *((_OWORD *)dest + 1) = v8;
    dest[1] = v4;
    dest[5] = v7;
    *dest = 2LL;
    return dest;
  }
  v42 = v28;
  v43 = v29;
  v44 = v28;
  v45 = v29;
  uu_split::filenames::Suffix::from((__int64)src, a2, (__int64 *)&v44);
  v5 = *(_QWORD *)src;
  if ( __OFSUB__(-*(_QWORD *)src, 1LL) )
  {
    v6 = *(_OWORD *)&src[8];
    v32 = *(_OWORD *)&src[8];
    v33 = *(_OWORD *)&src[24];
    *((_OWORD *)dest + 2) = *(_OWORD *)&src[24];
    *((_OWORD *)dest + 1) = v6;
    dest[1] = 4LL;
    *dest = 2LL;
    return dest;
  }
  v9 = *(_QWORD *)&src[8];
  v46 = *(_OWORD *)&src[16];
  v47 = *(_OWORD *)&src[32];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2);
  clap_builder::parser::error::MatchesError::unwrap(&v28, src);
  if ( (_QWORD)v28 )
  {
    *(_OWORD *)&src[48] = v31;
    *(_OWORD *)&src[32] = v30;
    *(_OWORD *)&src[16] = v29;
    *(_OWORD *)src = v28;
    v10 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(src);
    if ( !v10 )
    {
      v26 = &off_10AE60;
      goto LABEL_38;
    }
    v35 = v10;
    v11 = core::iter::traits::iterator::Iterator::try_fold(src, &v35);
    v12 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v11, 0LL);
    v13 = 6LL;
    if ( v12 )
    {
      v14 = *(char **)(v35 + 8);
      v15 = *(_QWORD *)(v35 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, a0, 2LL) )
      {
        v27 = 0;
        goto LABEL_12;
      }
      if ( v15 == 1 )
      {
        v16 = *v14;
        goto LABEL_11;
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v32, v14, v15);
      dest[4] = v33;
      *((_OWORD *)dest + 1) = v32;
      v13 = 5LL;
    }
    dest[1] = v13;
    *dest = 2LL;
    goto LABEL_33;
  }
  v16 = 10;
LABEL_11:
  v27 = v16;
LABEL_12:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aIoBlksize, 11LL);
  v17 = clap_builder::parser::error::MatchesError::unwrap(aIoBlksize, 11LL, src);
  v18 = v17;
  if ( v17 )
  {
    uucore::features::parser::parse_size::parse_size_u64(src, *(_QWORD *)(v17 + 8));
    if ( *(_DWORD *)src == 4 && *(_QWORD *)&src[8] && *(_QWORD *)&src[8] < 0x20000001uLL )
    {
      v37 = *(_QWORD *)&src[8];
      core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(src);
      v34 = 1LL;
      goto LABEL_19;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v28, v18);
    dest[4] = v29;
    *((_OWORD *)dest + 1) = v28;
    dest[1] = 8LL;
    *dest = 2LL;
    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(src);
LABEL_33:
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v9);
    return dest;
  }
  v34 = 0LL;
LABEL_19:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v28, a2, aPrefix, 6LL);
  v19 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, &v28);
  if ( !v19 )
  {
    v26 = &off_10AE78;
LABEL_38:
    core::option::unwrap_failed(v26);
  }
  <alloc::string::String as core::clone::Clone>::clone(&v38, v19);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v28, a2, aInput, 5LL);
  v20 = clap_builder::parser::error::MatchesError::unwrap(aInput, 5LL, &v28);
  if ( !v20 )
    core::option::unwrap_failed(&off_10AE90);
  <alloc::string::String as core::clone::Clone>::clone(&v40, v20);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v28, a2, aFilter, 6LL);
  v21 = clap_builder::parser::error::MatchesError::unwrap(aFilter, 6LL, &v28);
  if ( v21 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v28, v21);
    *(_QWORD *)&v33 = v29;
    v32 = v28;
  }
  else
  {
    *(_QWORD *)&v32 = 0x8000000000000000LL;
  }
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aVerbose, 7LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL);
  *(_QWORD *)&src[56] = v39;
  *(_OWORD *)&src[40] = v38;
  *(_QWORD *)&src[64] = v5;
  *(_QWORD *)&src[72] = v9;
  *(_OWORD *)&src[80] = v46;
  *(_OWORD *)&src[96] = v47;
  *(_OWORD *)&src[112] = v40;
  *(_QWORD *)&src[128] = v41;
  *(_OWORD *)&src[136] = v32;
  *(_QWORD *)&src[152] = v33;
  *(_QWORD *)&src[32] = v43;
  *(_OWORD *)&src[16] = v42;
  src[160] = v22 == 2;
  src[162] = v27;
  src[161] = flag;
  *(_QWORD *)src = v34;
  *(_QWORD *)&src[8] = v37;
  if ( (unsigned __int64)v42 <= 5 && (v24 = 42LL, _bittest64(&v24, v42)) && *(_QWORD *)&src[136] != 0x8000000000000000LL )
  {
    dest[1] = 7LL;
    *dest = 2LL;
    core::ptr::drop_in_place<uu_split::Settings>(src);
  }
  else
  {
    memcpy(dest, src, 0xA8uLL);
  }
  return dest;
}