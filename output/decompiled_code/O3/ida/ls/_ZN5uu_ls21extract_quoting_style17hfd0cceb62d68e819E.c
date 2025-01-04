__int64 __fastcall uu_ls::extract_quoting_style(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int matched; // ebp
  unsigned int v5; // r14d
  char is_terminal; // al
  __int128 v8; // xmm0
  char v9; // [rsp+8h] [rbp-100h] BYREF
  __int128 v10; // [rsp+10h] [rbp-F8h] BYREF
  __int128 *v11; // [rsp+20h] [rbp-E8h]
  __int128 v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+48h] [rbp-C0h]
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int128 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int128 v18; // [rsp+80h] [rbp-88h] BYREF
  __int128 *v19; // [rsp+90h] [rbp-78h]
  __int128 v20; // [rsp+A0h] [rbp-68h] BYREF
  __int128 *v21; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall *v22)(); // [rsp+B8h] [rbp-50h]
  _BYTE v23[72]; // [rsp+C0h] [rbp-48h] BYREF

  LOBYTE(v2) = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v10,
    a1,
    anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,
    13LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(
         anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,
         13LL,
         &v10);
  if ( v3 )
  {
    matched = uu_ls::match_quoting_style_name(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16), a2);
    v5 = HIWORD(matched);
    if ( BYTE2(matched) == 4 )
    {
      *(_QWORD *)&v10 = &off_212320;
      *((_QWORD *)&v10 + 1) = 1LL;
      v11 = (__int128 *)&v9;
      v12 = 0LL;
      core::panicking::panic_fmt(&v10, &off_212360);
    }
    v2 = matched >> 8;
    return ((unsigned __int8)v5 << 16) | ((unsigned __int8)v2 << 8) | (unsigned int)(unsigned __int8)matched;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_9938bf1084d6f67f99da587aeb78cfa9_29_llvm_7263189302602752264,
                          7LL) )
    goto LABEL_5;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_9938bf1084d6f67f99da587aeb78cfa9_28_llvm_7263189302602752264,
                          6LL) )
  {
    LOBYTE(v5) = 2;
    LOBYTE(matched) = 0;
    return ((unsigned __int8)v5 << 16) | ((unsigned __int8)v2 << 8) | (unsigned int)(unsigned __int8)matched;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_9938bf1084d6f67f99da587aeb78cfa9_30_llvm_7263189302602752264,
                          10LL) )
  {
    LOBYTE(matched) = 2;
    LOBYTE(v5) = 2;
    return ((unsigned __int8)v5 << 16) | ((unsigned __int8)v2 << 8) | (unsigned int)(unsigned __int8)matched;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_3f7e092f2ea554bdd060175bd8ea63d9_38_llvm_16502254941234113161,
                          5LL) )
  {
LABEL_5:
    LOBYTE(v5) = 3;
    LOBYTE(matched) = a2;
    return ((unsigned __int8)v5 << 16) | ((unsigned __int8)v2 << 8) | (unsigned int)(unsigned __int8)matched;
  }
  std::env::var(&v13, aQuotingStyle, 13LL);
  if ( v13 )
  {
LABEL_13:
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v13);
LABEL_14:
    *(_QWORD *)&v10 = std::io::stdio::stdout();
    is_terminal = std::sys::pal::unix::io::is_terminal(&v10);
    LOBYTE(matched) = 1;
    if ( !is_terminal )
      LOBYTE(matched) = a2;
    LOBYTE(v5) = 3;
    if ( is_terminal )
      LOBYTE(v5) = a2;
    LOBYTE(v2) = 0;
    return ((unsigned __int8)v5 << 16) | ((unsigned __int8)v2 << 8) | (unsigned int)(unsigned __int8)matched;
  }
  v16 = v14;
  v17 = v15;
  matched = uu_ls::match_quoting_style_name(*((__int64 *)&v14 + 1), v15, a2);
  v5 = HIWORD(matched);
  if ( BYTE2(matched) == 4 )
  {
    std::env::args(v23);
    <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v20, v23);
    if ( (_QWORD)v20 == 0x8000000000000000LL )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aLs, 2LL);
      v19 = v11;
      v8 = v10;
    }
    else
    {
      v19 = v21;
      v8 = v20;
    }
    v18 = v8;
    *(_QWORD *)&v20 = &v18;
    *((_QWORD *)&v20 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v21 = &v16;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &unk_212330;
    *((_QWORD *)&v10 + 1) = 3LL;
    v11 = &v20;
    v12 = 2uLL;
    std::io::stdio::_eprint(&v10);
    core::ptr::drop_in_place<alloc::string::String>(&v18);
    core::ptr::drop_in_place<std::env::Args>(v23);
    core::ptr::drop_in_place<alloc::string::String>(&v16);
    if ( !v13 )
      goto LABEL_14;
    goto LABEL_13;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v16);
  v2 = matched >> 8;
  if ( v13 )
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v13);
  return ((unsigned __int8)v5 << 16) | ((unsigned __int8)v2 << 8) | (unsigned int)(unsigned __int8)matched;
}
