void __fastcall uu_tail::args::Settings::check_warnings(__int64 a1)
{
  __int64 v1; // rdx
  char **v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // rdx
  char **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  char **v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __int64 **v12; // [rsp+18h] [rbp-60h]
  __int128 v13; // [rsp+20h] [rbp-58h]
  __int64 *v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      if ( *(_BYTE *)(a1 + 76) != 2 )
        goto LABEL_7;
      v16 = uucore::util_name();
      v17 = v1;
      v14 = &v16;
      v15 = <&T as core::fmt::Display>::fmt;
      v10 = (char **)&unk_173098;
      v11 = 2LL;
      v12 = &v14;
      v13 = 1uLL;
      std::io::stdio::_eprint(&v10);
      v2 = &off_1730B8;
    }
    else
    {
      v16 = uucore::util_name();
      v17 = v3;
      v14 = &v16;
      v15 = <&T as core::fmt::Display>::fmt;
      v10 = (char **)&unk_173098;
      v11 = 2LL;
      v12 = &v14;
      v13 = 1uLL;
      std::io::stdio::_eprint(&v10);
      v2 = &off_1730C8;
    }
    v10 = v2;
    v11 = 1LL;
    v12 = (__int64 **)&byte_8;
    v13 = 0LL;
    std::io::stdio::_eprint(&v10);
  }
LABEL_7:
  v4 = *(_DWORD *)(a1 + 68);
  v5 = *(_BYTE *)(a1 + 76);
  if ( v4 )
  {
    if ( v5 == 2 )
    {
      v16 = uucore::util_name();
      v17 = v6;
      v14 = &v16;
      v15 = <&T as core::fmt::Display>::fmt;
      v10 = (char **)&unk_173098;
      v11 = 2LL;
      v12 = &v14;
      v13 = 1uLL;
      std::io::stdio::_eprint(&v10);
      v7 = &off_1730D8;
LABEL_20:
      v10 = v7;
      v11 = 1LL;
      v12 = (__int64 **)&byte_8;
      v13 = 0LL;
      std::io::stdio::_eprint(&v10);
      return;
    }
    if ( !(unsigned __int8)uu_tail::platform::unix::supports_pid_checks(v4) )
    {
      v16 = uucore::util_name();
      v17 = v8;
      v14 = &v16;
      v15 = <&T as core::fmt::Display>::fmt;
      v10 = (char **)&unk_173098;
      v11 = 2LL;
      v12 = &v14;
      v13 = 1uLL;
      std::io::stdio::_eprint(&v10);
      v10 = &off_1730E8;
      v11 = 1LL;
      v12 = (__int64 **)&byte_8;
      v13 = 0LL;
      std::io::stdio::_eprint(&v10);
    }
  }
  else if ( v5 == 2 )
  {
    return;
  }
  if ( (unsigned __int8)uu_tail::args::Settings::has_stdin(a1) )
  {
    if ( v4 != 0
      || v5 != 0
      || *(_QWORD *)(a1 + 40) != 1LL
      || (same_file::Handle::stdin(&v10), !(unsigned __int8)core::result::Result<T,E>::is_ok_and(&v10)) )
    {
      std::io::stdio::stdin();
      if ( (unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() )
      {
        v16 = uucore::util_name();
        v17 = v9;
        v14 = &v16;
        v15 = <&T as core::fmt::Display>::fmt;
        v10 = (char **)&unk_173098;
        v11 = 2LL;
        v12 = &v14;
        v13 = 1uLL;
        std::io::stdio::_eprint(&v10);
        v7 = &off_1730F8;
        goto LABEL_20;
      }
    }
  }
}