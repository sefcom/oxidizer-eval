char *__fastcall uu_split::Settings::from(char *dest, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  unsigned __int8 v8; // al
  char v9; // al
  __int64 v10; // rcx
  char *v11; // r15
  __int64 v12; // rcx
  __int128 v13; // xmm0
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // bp
  char flag; // al
  __int64 v23; // rcx
  char **v25; // rdi
  char v26; // [rsp+Ch] [rbp-24Ch]
  __int128 v27; // [rsp+10h] [rbp-248h] BYREF
  __int128 v28; // [rsp+20h] [rbp-238h]
  __int128 v29; // [rsp+30h] [rbp-228h]
  __int128 v30; // [rsp+40h] [rbp-218h]
  __int64 v31; // [rsp+58h] [rbp-200h] BYREF
  __int128 v32; // [rsp+60h] [rbp-1F8h] BYREF
  __int128 v33; // [rsp+70h] [rbp-1E8h]
  __int64 v34; // [rsp+80h] [rbp-1D8h]
  _OWORD src[11]; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+140h] [rbp-118h]
  __int64 v37; // [rsp+150h] [rbp-108h]
  _BYTE v38[48]; // [rsp+160h] [rbp-F8h] BYREF
  __int128 v39; // [rsp+190h] [rbp-C8h]
  __int64 v40; // [rsp+1A0h] [rbp-B8h]
  __int128 v41; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+1C0h] [rbp-98h]
  __int128 v43; // [rsp+1C8h] [rbp-90h] BYREF
  __int64 v44; // [rsp+1D8h] [rbp-80h]
  __int128 v45; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+1F0h] [rbp-68h]
  __int64 v47; // [rsp+200h] [rbp-58h] BYREF
  __int128 v48; // [rsp+208h] [rbp-50h]
  __int64 v49; // [rsp+218h] [rbp-40h]

  uu_split::strategy::Strategy::from(&v47, a2, a3);
  if ( (_DWORD)v47 == 4 )
  {
    *(_QWORD *)&v28 = v49;
    v27 = v48;
  }
  else
  {
    core::ops::function::FnOnce::call_once(src, &v47);
    v4 = *(_QWORD *)&src[0];
    v27 = *(_OWORD *)((char *)src + 8);
    *(_QWORD *)&v28 = *((_QWORD *)&src[1] + 1);
    if ( *(_QWORD *)&src[0] != 9LL )
    {
      v12 = *(_QWORD *)&src[2];
      *(_QWORD *)&v38[16] = v28;
      v13 = v27;
      *(_OWORD *)v38 = v27;
      *((_QWORD *)dest + 4) = v28;
      *((_OWORD *)dest + 1) = v13;
      *((_QWORD *)dest + 1) = v4;
      *((_QWORD *)dest + 5) = v12;
      *(_QWORD *)dest = 2LL;
      return dest;
    }
  }
  v39 = v27;
  v40 = v28;
  v45 = v27;
  v46 = v28;
  uu_split::filenames::Suffix::from((__int64)src, a2, (__int64 *)&v45);
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
  {
    core::ops::function::FnOnce::call_once(&v27, (char *)src + 8);
    v34 = v29;
    v5 = v27;
    v6 = v28;
    v33 = v28;
    v32 = v27;
    *((_QWORD *)dest + 5) = v29;
    *(_OWORD *)(dest + 24) = v6;
    *(_OWORD *)(dest + 8) = v5;
    *(_QWORD *)dest = 2LL;
    return dest;
  }
  v33 = *(_OWORD *)((char *)&src[1] + 8);
  *(_OWORD *)&v38[8] = *(_OWORD *)((char *)src + 8);
  *(_OWORD *)&v38[24] = *(_OWORD *)((char *)&src[1] + 8);
  *(_QWORD *)&v38[40] = *((_QWORD *)&src[2] + 1);
  *(_QWORD *)v38 = *(_QWORD *)&src[0];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aSeparator, 9LL);
  clap_builder::parser::error::MatchesError::unwrap(&v27, aSeparator, 9LL, src);
  if ( (_QWORD)v27 )
  {
    src[3] = v30;
    src[2] = v29;
    src[1] = v28;
    src[0] = v27;
    v7 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(src);
    if ( !v7 )
    {
      v25 = &off_148338;
      goto LABEL_40;
    }
    v31 = v7;
    v8 = core::iter::traits::iterator::Iterator::try_fold(src, &v31);
    v9 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8);
    v10 = 6LL;
    if ( v9 )
    {
      v11 = *(char **)(v31 + 8);
      v3 = *(_QWORD *)(v31 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v3, a0_0, 2LL) )
      {
        v26 = 0;
        goto LABEL_14;
      }
      if ( v3 == 1 )
      {
        v14 = *v11;
        goto LABEL_13;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, v11, v3);
      *((_QWORD *)dest + 4) = v33;
      *((_OWORD *)dest + 1) = v32;
      v10 = 5LL;
    }
    *((_QWORD *)dest + 1) = v10;
    *(_QWORD *)dest = 2LL;
    goto LABEL_35;
  }
  v14 = 10;
LABEL_13:
  v26 = v14;
LABEL_14:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aIoBlksize, 11LL);
  v15 = clap_builder::parser::error::MatchesError::unwrap(aIoBlksize, 11LL, src);
  v16 = v15;
  if ( v15 )
  {
    uucore::parser::parse_size::parse_size_u64(src, *(_QWORD *)(v15 + 8), *(_QWORD *)(v15 + 16));
    if ( LODWORD(src[0]) == 3 )
    {
      v3 = *((_QWORD *)&src[0] + 1);
      if ( *((_QWORD *)&src[0] + 1) )
      {
        if ( *((_QWORD *)&src[0] + 1) < 0x20000001uLL )
        {
          core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(src);
          v17 = 1LL;
          goto LABEL_21;
        }
      }
    }
    <alloc::string::String as core::clone::Clone>::clone(&v27, v16);
    *((_QWORD *)dest + 4) = v28;
    *((_OWORD *)dest + 1) = v27;
    *((_QWORD *)dest + 1) = 8LL;
    *(_QWORD *)dest = 2LL;
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(src);
LABEL_35:
    core::ptr::drop_in_place<uu_split::filenames::Suffix>(v38);
    return dest;
  }
  v17 = 0LL;
LABEL_21:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, a2, aPrefix, 6LL);
  v18 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, &v27);
  if ( !v18 )
  {
    v25 = &off_148350;
LABEL_40:
    core::option::unwrap_failed(v25);
  }
  <alloc::string::String as core::clone::Clone>::clone(&v41, v18);
  v29 = *(_OWORD *)&v38[32];
  v28 = *(_OWORD *)&v38[16];
  v27 = *(_OWORD *)v38;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, a2, aInput, 5LL);
  v19 = clap_builder::parser::error::MatchesError::unwrap(aInput, 5LL, &v32);
  if ( !v19 )
    core::option::unwrap_failed(&off_148368);
  <alloc::string::String as core::clone::Clone>::clone(&v43, v19);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, a2, aFilter, 6LL);
  v20 = clap_builder::parser::error::MatchesError::unwrap(aFilter, 6LL, &v32);
  if ( v20 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v32, v20);
    v37 = v33;
    v36 = v32;
  }
  else
  {
    *(_QWORD *)&v36 = 0x8000000000000000LL;
  }
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aVerbose, 7LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL);
  *((_QWORD *)&src[3] + 1) = v42;
  *(_OWORD *)((char *)&src[2] + 8) = v41;
  src[4] = v27;
  src[5] = v28;
  src[6] = v29;
  src[7] = v43;
  *(_QWORD *)&src[8] = v44;
  *(_OWORD *)((char *)&src[8] + 8) = v36;
  *((_QWORD *)&src[9] + 1) = v37;
  *(_QWORD *)&src[2] = v40;
  src[1] = v39;
  LOBYTE(src[10]) = v21 == 2;
  BYTE2(src[10]) = v26;
  BYTE1(src[10]) = flag;
  *(_QWORD *)&src[0] = v17;
  *((_QWORD *)&src[0] + 1) = v3;
  if ( (unsigned __int64)v39 <= 5
    && (v23 = 42LL, _bittest64(&v23, v39))
    && *((_QWORD *)&src[8] + 1) != 0x8000000000000000LL )
  {
    *((_QWORD *)dest + 1) = 7LL;
    *(_QWORD *)dest = 2LL;
    core::ptr::drop_in_place<uu_split::Settings>(src);
  }
  else
  {
    memcpy(dest, src, 0xA8uLL);
  }
  return dest;
}
