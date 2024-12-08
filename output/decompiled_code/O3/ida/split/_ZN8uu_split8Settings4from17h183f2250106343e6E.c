char *__fastcall uu_split::Settings::from(char *dest, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rax
  unsigned __int8 v7; // al
  char v8; // al
  __int64 v9; // rcx
  char *v10; // r15
  __int64 v11; // rcx
  __int128 v12; // xmm0
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // bp
  char flag; // al
  __int64 v22; // rcx
  char **v24; // rdi
  char v25; // [rsp+Ch] [rbp-24Ch]
  __int128 v26; // [rsp+10h] [rbp-248h] BYREF
  __int128 v27; // [rsp+20h] [rbp-238h]
  __int128 v28; // [rsp+30h] [rbp-228h]
  __int128 v29; // [rsp+40h] [rbp-218h]
  __int64 v30; // [rsp+58h] [rbp-200h] BYREF
  __int128 v31; // [rsp+60h] [rbp-1F8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-1E8h]
  __int64 v33; // [rsp+80h] [rbp-1D8h]
  _OWORD src[11]; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v35; // [rsp+140h] [rbp-118h]
  __int64 v36; // [rsp+150h] [rbp-108h]
  _BYTE v37[48]; // [rsp+160h] [rbp-F8h] BYREF
  __int128 v38; // [rsp+190h] [rbp-C8h]
  __int64 v39; // [rsp+1A0h] [rbp-B8h]
  __int128 v40; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+1C0h] [rbp-98h]
  __int128 v42; // [rsp+1C8h] [rbp-90h] BYREF
  __int64 v43; // [rsp+1D8h] [rbp-80h]
  __int128 v44; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v45; // [rsp+1F0h] [rbp-68h]
  int v46; // [rsp+200h] [rbp-58h] BYREF
  __int128 v47; // [rsp+208h] [rbp-50h]
  __int64 v48; // [rsp+218h] [rbp-40h]

  uu_split::strategy::Strategy::from(&v46);
  if ( v46 == 4 )
  {
    *(_QWORD *)&v27 = v48;
    v26 = v47;
  }
  else
  {
    core::ops::function::FnOnce::call_once(src, &v46);
    v3 = *(_QWORD *)&src[0];
    v26 = *(_OWORD *)((char *)src + 8);
    *(_QWORD *)&v27 = *((_QWORD *)&src[1] + 1);
    if ( *(_QWORD *)&src[0] != 9LL )
    {
      v11 = *(_QWORD *)&src[2];
      *(_QWORD *)&v37[16] = v27;
      v12 = v26;
      *(_OWORD *)v37 = v26;
      *((_QWORD *)dest + 4) = v27;
      *((_OWORD *)dest + 1) = v12;
      *((_QWORD *)dest + 1) = v3;
      *((_QWORD *)dest + 5) = v11;
      *(_QWORD *)dest = 2LL;
      return dest;
    }
  }
  v38 = v26;
  v39 = v27;
  v44 = v26;
  v45 = v27;
  uu_split::filenames::Suffix::from(src, a2, &v44);
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
  {
    core::ops::function::FnOnce::call_once(&v26, (char *)src + 8);
    v33 = v28;
    v4 = v26;
    v5 = v27;
    v32 = v27;
    v31 = v26;
    *((_QWORD *)dest + 5) = v28;
    *(_OWORD *)(dest + 24) = v5;
    *(_OWORD *)(dest + 8) = v4;
    *(_QWORD *)dest = 2LL;
    return dest;
  }
  v32 = *(_OWORD *)((char *)&src[1] + 8);
  *(_OWORD *)&v37[8] = *(_OWORD *)((char *)src + 8);
  *(_OWORD *)&v37[24] = *(_OWORD *)((char *)&src[1] + 8);
  *(_QWORD *)&v37[40] = *((_QWORD *)&src[2] + 1);
  *(_QWORD *)v37 = *(_QWORD *)&src[0];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aSeparator, 9LL);
  clap_builder::parser::error::MatchesError::unwrap(&v26, aSeparator, 9LL, src);
  if ( (_QWORD)v26 )
  {
    src[3] = v29;
    src[2] = v28;
    src[1] = v27;
    src[0] = v26;
    v6 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(src);
    if ( !v6 )
    {
      v24 = &off_148858;
      goto LABEL_40;
    }
    v30 = v6;
    v7 = core::iter::traits::iterator::Iterator::try_fold(src, &v30);
    v8 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v7);
    v9 = 6LL;
    if ( v8 )
    {
      v10 = *(char **)(v30 + 8);
      v2 = *(_QWORD *)(v30 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v2, a0_0, 2LL) )
      {
        v25 = 0;
        goto LABEL_14;
      }
      if ( v2 == 1 )
      {
        v13 = *v10;
        goto LABEL_13;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v31, v10, v2);
      *((_QWORD *)dest + 4) = v32;
      *((_OWORD *)dest + 1) = v31;
      v9 = 5LL;
    }
    *((_QWORD *)dest + 1) = v9;
    *(_QWORD *)dest = 2LL;
    goto LABEL_35;
  }
  v13 = 10;
LABEL_13:
  v25 = v13;
LABEL_14:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, a2, aIoBlksize, 11LL);
  v14 = clap_builder::parser::error::MatchesError::unwrap(aIoBlksize, 11LL, src);
  v15 = v14;
  if ( v14 )
  {
    uucore::parser::parse_size::parse_size_u64(src, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
    if ( LODWORD(src[0]) == 3 )
    {
      v2 = *((_QWORD *)&src[0] + 1);
      if ( *((_QWORD *)&src[0] + 1) )
      {
        if ( *((_QWORD *)&src[0] + 1) < 0x20000001uLL )
        {
          core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(src);
          v16 = 1LL;
          goto LABEL_21;
        }
      }
    }
    <alloc::string::String as core::clone::Clone>::clone(&v26, v15);
    *((_QWORD *)dest + 4) = v27;
    *((_OWORD *)dest + 1) = v26;
    *((_QWORD *)dest + 1) = 8LL;
    *(_QWORD *)dest = 2LL;
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(src);
LABEL_35:
    core::ptr::drop_in_place<uu_split::filenames::Suffix>(v37);
    return dest;
  }
  v16 = 0LL;
LABEL_21:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26, a2, aPrefix, 6LL);
  v17 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, &v26);
  if ( !v17 )
  {
    v24 = &off_148870;
LABEL_40:
    core::option::unwrap_failed(v24);
  }
  <alloc::string::String as core::clone::Clone>::clone(&v40, v17);
  v28 = *(_OWORD *)&v37[32];
  v27 = *(_OWORD *)&v37[16];
  v26 = *(_OWORD *)v37;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a2, aInput, 5LL);
  v18 = clap_builder::parser::error::MatchesError::unwrap(aInput, 5LL, &v31);
  if ( !v18 )
    core::option::unwrap_failed(&off_148888);
  <alloc::string::String as core::clone::Clone>::clone(&v42, v18);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v31, a2, aFilter, 6LL);
  v19 = clap_builder::parser::error::MatchesError::unwrap(aFilter, 6LL, &v31);
  if ( v19 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v31, v19);
    v36 = v32;
    v35 = v31;
  }
  else
  {
    *(_QWORD *)&v35 = 0x8000000000000000LL;
  }
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aVerbose, 7LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aElideEmptyFile, 17LL);
  *((_QWORD *)&src[3] + 1) = v41;
  *(_OWORD *)((char *)&src[2] + 8) = v40;
  src[4] = v26;
  src[5] = v27;
  src[6] = v28;
  src[7] = v42;
  *(_QWORD *)&src[8] = v43;
  *(_OWORD *)((char *)&src[8] + 8) = v35;
  *((_QWORD *)&src[9] + 1) = v36;
  *(_QWORD *)&src[2] = v39;
  src[1] = v38;
  LOBYTE(src[10]) = v20 == 2;
  BYTE2(src[10]) = v25;
  BYTE1(src[10]) = flag;
  *(_QWORD *)&src[0] = v16;
  *((_QWORD *)&src[0] + 1) = v2;
  if ( (unsigned __int64)v38 <= 5
    && (v22 = 42LL, _bittest64(&v22, v38))
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
