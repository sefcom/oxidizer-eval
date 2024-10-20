__int64 *__fastcall uu_cut::get_delimiters(__int64 *a1, __int64 a2, char a3)
{
  char flag; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  const char *v14; // r13
  __int64 v15; // r12
  _WORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _WORD *v30; // rdx
  __int64 v31; // rsi
  void *v32; // rax
  const char *v34; // [rsp+0h] [rbp-118h] BYREF
  __int64 v35; // [rsp+8h] [rbp-110h]
  const char **v36; // [rsp+10h] [rbp-108h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+18h] [rbp-100h]
  __int128 *v38; // [rsp+20h] [rbp-F8h]
  __int64 (__fastcall *v39)(); // [rsp+28h] [rbp-F0h]
  char **v40; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-E0h]
  const char ***v42; // [rsp+40h] [rbp-D8h]
  __int64 v43; // [rsp+48h] [rbp-D0h]
  __int64 v44; // [rsp+50h] [rbp-C8h]
  __int128 v45; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+70h] [rbp-A8h]
  __int128 v47; // [rsp+80h] [rbp-98h]
  __int128 v48; // [rsp+90h] [rbp-88h]
  __int64 v49; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v50; // [rsp+A8h] [rbp-70h]
  __int128 v51; // [rsp+B8h] [rbp-60h]
  __int128 v52; // [rsp+C8h] [rbp-50h]
  __int128 v53; // [rsp+D8h] [rbp-40h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aWhitespaceDeli_0, 20LL, &off_11ADC8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v49, a2, aDelimiter_0, 9LL);
  v34 = aDelimiter_0;
  v35 = 9LL;
  if ( v49 )
  {
    v48 = v53;
    v47 = v52;
    v46 = v51;
    v45 = v50;
    v36 = &v34;
    v37 = <&T as core::fmt::Display>::fmt;
    v38 = &v45;
    v39 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v40 = &anon_8a413ea3e55ef2f27523b53f9db0d00f_6_llvm_16715495509781371082;
    v41 = 2LL;
    v44 = 0LL;
    v42 = &v36;
    v43 = 2LL;
    ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64, const char *, __int64))core::panicking::panic_fmt)(
      &v40,
      &off_11ADE0,
      v5,
      v6,
      v7,
      v8,
      v34,
      v35);
  }
  v9 = v50;
  if ( !(_QWORD)v50 )
  {
    v14 = 0LL;
    if ( !flag )
      v14 = asc_1FD1C;
    v15 = 1LL;
    goto LABEL_21;
  }
  if ( !flag )
  {
    v15 = 1LL;
    if ( a3 )
    {
      v14 = asc_1FD8D;
    }
    else
    {
      v16 = *(_WORD **)(v50 + 8);
      if ( !v16 )
        goto LABEL_34;
      v17 = *(_QWORD *)(v50 + 16);
      if ( v17 < 0 )
        goto LABEL_34;
      v14 = (const char *)&anon_9991a5e7f959198e12fa4a6044476d0a_63_llvm_12840200675837644167;
      if ( v17 && (v17 != 2 || *v16 != 10023) )
      {
        v18 = *(_QWORD *)(v50 + 16);
        v19 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v50);
        v21 = std::ffi::os_str::OsStr::to_str(v19, v20);
        if ( (unsigned __int8)core::option::Option<T>::is_some_and(v21, v22)
          || (v23 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v9),
              !std::ffi::os_str::OsStr::to_str(v23, v24))
          && v18 >= 2 )
        {
          v10 = aTheDelimiterMu;
          v11 = 40LL;
          goto LABEL_5;
        }
        v14 = (const char *)<uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v9);
        v15 = v25;
      }
    }
LABEL_21:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v49, a2, aOutputDelimite, 16LL);
    v34 = aOutputDelimite;
    v35 = 16LL;
    if ( v49 )
    {
      v48 = v53;
      v47 = v52;
      v46 = v51;
      v45 = v50;
      v36 = &v34;
      v37 = <&T as core::fmt::Display>::fmt;
      v38 = &v45;
      v39 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v40 = &anon_8a413ea3e55ef2f27523b53f9db0d00f_6_llvm_16715495509781371082;
      v41 = 2LL;
      v44 = 0LL;
      v42 = &v36;
      v43 = 2LL;
      ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64, const char *, __int64))core::panicking::panic_fmt)(
        &v40,
        &off_11ADF8,
        v26,
        v27,
        v28,
        v29,
        v34,
        v35);
    }
    if ( !(_QWORD)v50 )
    {
      v32 = 0LL;
LABEL_30:
      a1[1] = (__int64)v14;
      a1[2] = v15;
      a1[3] = (__int64)v32;
      a1[4] = v27;
      v13 = 0LL;
      goto LABEL_31;
    }
    v30 = *(_WORD **)(v50 + 8);
    if ( v30 )
    {
      v31 = *(_QWORD *)(v50 + 16);
      if ( v31 >= 0 )
      {
        v27 = 1LL;
        v32 = &anon_9991a5e7f959198e12fa4a6044476d0a_63_llvm_12840200675837644167;
        if ( v31 && (v31 != 2 || *v30 != 10023) )
        {
          v32 = *(void **)(v50 + 8);
          v27 = *(_QWORD *)(v50 + 16);
        }
        goto LABEL_30;
      }
    }
LABEL_34:
    core::panicking::panic_nounwind(anon_8a413ea3e55ef2f27523b53f9db0d00f_41_llvm_16715495509781371082, 162LL);
  }
  v10 = aInvalidInputOn;
  v11 = 73LL;
LABEL_5:
  a1[1] = uucore::mods::error::USimpleError::new(1LL, v10, v11);
  a1[2] = v12;
  v13 = 1LL;
LABEL_31:
  *a1 = v13;
  return a1;
}
