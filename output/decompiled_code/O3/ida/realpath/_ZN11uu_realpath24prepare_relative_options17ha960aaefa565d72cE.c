        unsigned __int8 a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned int v9; // r13d
  const char ***v10; // rbp
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int128 v13; // kr00_16
  __int64 v14; // r15
  char **v16; // [rsp+8h] [rbp-120h]
  __int64 v17; // [rsp+10h] [rbp-118h]
  __int64 v18; // [rsp+18h] [rbp-110h]
  char **v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+28h] [rbp-100h]
  const char ***v21; // [rsp+30h] [rbp-F8h]
  __int64 v22; // [rsp+38h] [rbp-F0h]
  __int64 v23; // [rsp+40h] [rbp-E8h]
  const char *v24; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-D0h]
  const char **v26; // [rsp+60h] [rbp-C8h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+68h] [rbp-C0h]
  __int128 *v28; // [rsp+70h] [rbp-B8h]
  __int64 (__fastcall *v29)(); // [rsp+78h] [rbp-B0h]
  __int128 v30; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+90h] [rbp-98h]
  __int64 v32; // [rsp+A0h] [rbp-88h]
  __int128 v33; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-68h]
  __int64 v35; // [rsp+D0h] [rbp-58h]
  const char ***v36; // [rsp+D8h] [rbp-50h]
  _QWORD v37[9]; // [rsp+E0h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v33, a2, aRelativeTo, 11LL);
  v24 = aRelativeTo;
  v25 = 11LL;
  if ( (_DWORD)v33 != 2 )
  {
    v32 = v35;
    v31 = v34;
    v30 = v33;
    v26 = &v24;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v30;
    v29 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v19 = &anon_e3dccfd3189561d264c0b721ac2dd36e_2_llvm_11398483313410484421;
    v20 = 2LL;
    v23 = 0LL;
    v21 = &v26;
    v22 = 2LL;
    core::panicking::panic_fmt(&v19, &anon_e3dccfd3189561d264c0b721ac2dd36e_4_llvm_11398483313410484421);
  }
  if ( *((_QWORD *)&v33 + 1) )
    std::sys::os_str::bytes::Slice::to_owned(
      v37,
      *(_QWORD *)(*((_QWORD *)&v33 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v33 + 1) + 16LL),
      0x8000000000000000LL);
  else
    v37[0] = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v33, a2, aRelativeBase, 13LL);
  v24 = aRelativeBase;
  v25 = 13LL;
  if ( (_DWORD)v33 != 2 )
  {
    v32 = v35;
    v31 = v34;
    v30 = v33;
    v26 = &v24;
    v27 = <&T as core::fmt::Display>::fmt;
    v28 = &v30;
    v29 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v19 = &anon_e3dccfd3189561d264c0b721ac2dd36e_2_llvm_11398483313410484421;
    v20 = 2LL;
    v23 = 0LL;
    v21 = &v26;
    v22 = 2LL;
    core::panicking::panic_fmt(&v19, &anon_e3dccfd3189561d264c0b721ac2dd36e_4_llvm_11398483313410484421);
  }
  if ( *((_QWORD *)&v33 + 1) )
  {
    std::sys::os_str::bytes::Slice::to_owned(
      &v19,
      *(_QWORD *)(*((_QWORD *)&v33 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v33 + 1) + 16LL),
      v7);
    v8 = (unsigned __int64)v19;
    v18 = v20;
    v36 = v21;
  }
  else
  {
    v8 = 0x8000000000000000LL;
  }
  v9 = a4;
  uu_realpath::canonicalize_relative_option(&v19, v37, a3, a4);
  v10 = v21;
  v16 = v19;
  if ( v19 == (char **)0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    if ( 2 * v8 )
    {
      v11 = v18;
      v12 = v8;
LABEL_23:
      _rust_dealloc(v11, v12, 1LL);
      return a1;
    }
    return a1;
  }
  v17 = v20;
  v19 = (char **)v8;
  v20 = v18;
  v21 = v36;
  uu_realpath::canonicalize_relative_option(&v30, &v19, a3, v9);
  v13 = v30;
  v14 = v31;
  if ( (_QWORD)v30 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v30 + 1);
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    v12 = (unsigned __int64)v16;
    if ( !(2LL * (_QWORD)v16) )
      return a1;
LABEL_22:
    v11 = v17;
    goto LABEL_23;
  }
  if ( v16 == (char **)0x8000000000000000LL
    || (_QWORD)v30 == 0x8000000000000000LL
    || (unsigned __int8)std::path::Path::_starts_with(v17, v10, *((_QWORD *)&v30 + 1), v31) )
  {
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 40) = v14;
    return a1;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  if ( (_QWORD)v13 )
    _rust_dealloc(*((_QWORD *)&v13 + 1), v13, 1LL);
  v12 = (unsigned __int64)v16;
  if ( v16 )
    goto LABEL_22;
  return a1;
}
