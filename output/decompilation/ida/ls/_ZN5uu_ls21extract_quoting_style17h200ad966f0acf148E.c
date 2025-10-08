__int64 __fastcall uu_ls::extract_quoting_style(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int matched; // eax
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int128 v7; // xmm0
  char v8; // r14
  char is_terminal; // al
  char v11; // [rsp+8h] [rbp-100h] BYREF
  __int128 v12; // [rsp+10h] [rbp-F8h] BYREF
  __int128 *v13; // [rsp+20h] [rbp-E8h]
  __int128 v14; // [rsp+28h] [rbp-E0h]
  __int128 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v16; // [rsp+50h] [rbp-B8h]
  __int128 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h]
  __int128 v19; // [rsp+80h] [rbp-88h] BYREF
  __int128 *v20; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall *v21)(); // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-50h]
  _BYTE v25[72]; // [rsp+C0h] [rbp-48h] BYREF

  LOBYTE(v2) = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v12, a1, aQuotingStyle, 13LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aQuotingStyle, 13LL, &v12);
  if ( v3 )
  {
    matched = uu_ls::match_quoting_style_name(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16), a2);
    if ( (_BYTE)matched == 4 )
    {
      *(_QWORD *)&v12 = &off_2868A0;
      *((_QWORD *)&v12 + 1) = 1LL;
      v13 = (__int128 *)&v11;
      v14 = 0LL;
      core::panicking::panic_fmt(&v12, &off_2868E0);
    }
    v5 = matched >> 8;
    v2 = HIWORD(matched);
  }
  else
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aLiteral, 7LL) )
      goto LABEL_5;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aEscape, 6LL) )
    {
      LOBYTE(matched) = 2;
      LOBYTE(v5) = 0;
      return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v5 << 8) | (unsigned int)(unsigned __int8)matched;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aQuoteName, 10LL) )
    {
      LOBYTE(v5) = 2;
      LOBYTE(matched) = 2;
      return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v5 << 8) | (unsigned int)(unsigned __int8)matched;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aDired_1, 5LL) )
    {
LABEL_5:
      LOBYTE(matched) = 3;
      LOBYTE(v5) = a2;
    }
    else
    {
      std::env::var(&v22, aQuotingStyle_0, 13LL);
      if ( v22 )
      {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v22);
      }
      else
      {
        v17 = v23;
        v18 = v24;
        v6 = uu_ls::match_quoting_style_name(*((__int64 *)&v23 + 1), v24, a2);
        if ( (_BYTE)v6 != 4 )
        {
          v5 = v6 >> 8;
          v2 = HIWORD(v6);
          v8 = v6;
          core::ptr::drop_in_place<alloc::string::String>(&v23);
          LOBYTE(matched) = v8;
          return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v5 << 8) | (unsigned int)(unsigned __int8)matched;
        }
        std::env::args(v25);
        <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v19, v25);
        if ( __OFSUB__(0LL, (_QWORD)v19) )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, aLs, 2LL);
          v16 = v13;
          v7 = v12;
        }
        else
        {
          v16 = v20;
          v7 = v19;
        }
        v15 = v7;
        *(_QWORD *)&v19 = &v15;
        *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v20 = &v17;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v12 = &unk_2868B0;
        *((_QWORD *)&v12 + 1) = 3LL;
        v13 = &v19;
        v14 = 2uLL;
        std::io::stdio::_eprint(&v12);
        core::ptr::drop_in_place<alloc::string::String>(&v15);
        core::ptr::drop_in_place<std::env::Args>(v25);
        core::ptr::drop_in_place<alloc::string::String>(&v17);
      }
      std::io::stdio::stdout();
      is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
      LOBYTE(v5) = 0;
      if ( !is_terminal )
        LOBYTE(v5) = a2;
      LOBYTE(matched) = 2 * (is_terminal ^ 1) + 1;
    }
  }
  return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v5 << 8) | (unsigned int)(unsigned __int8)matched;
}