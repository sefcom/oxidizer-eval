void __fastcall uu_tail::args::Settings::check_warnings(__int64 a1)
{
  char v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v5; // rdx
  char **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  char **v9; // [rsp+8h] [rbp-70h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  __int64 **v11; // [rsp+18h] [rbp-60h]
  __int128 v12; // [rsp+20h] [rbp-58h]
  __int64 *v13; // [rsp+38h] [rbp-40h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  v1 = *(_BYTE *)(a1 + 76);
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( v1 )
    {
      if ( v1 == 2 )
      {
        v15 = uucore::util_name();
        v16 = v2;
        v13 = &v15;
        v14 = <&T as core::fmt::Display>::fmt;
        v9 = (char **)&unk_1BB5C0;
        v10 = 2LL;
        v11 = &v13;
        v12 = 1uLL;
        std::io::stdio::_eprint(&v9);
        v9 = &off_1BB5E0;
        v10 = 1LL;
        v11 = (__int64 **)&byte_8;
        v12 = 0LL;
        std::io::stdio::_eprint(&v9);
        v1 = 2;
      }
    }
    else
    {
      v15 = uucore::util_name();
      v16 = v3;
      v13 = &v15;
      v14 = <&T as core::fmt::Display>::fmt;
      v9 = (char **)&unk_1BB5C0;
      v10 = 2LL;
      v11 = &v13;
      v12 = 1uLL;
      std::io::stdio::_eprint(&v9);
      v9 = &off_1BB5F0;
      v10 = 1LL;
      v11 = (__int64 **)&byte_8;
      v12 = 0LL;
      std::io::stdio::_eprint(&v9);
      v1 = 0;
    }
  }
  v4 = *(_DWORD *)(a1 + 68);
  if ( v4 )
  {
    if ( v1 == 2 )
    {
      v15 = uucore::util_name();
      v16 = v5;
      v13 = &v15;
      v14 = <&T as core::fmt::Display>::fmt;
      v9 = (char **)&unk_1BB5C0;
      v10 = 2LL;
      v11 = &v13;
      v12 = 1uLL;
      std::io::stdio::_eprint(&v9);
      v6 = &off_1BB600;
LABEL_20:
      v9 = v6;
      v10 = 1LL;
      v11 = (__int64 **)&byte_8;
      v12 = 0LL;
      std::io::stdio::_eprint(&v9);
      return;
    }
    if ( !(unsigned __int8)uu_tail::platform::unix::supports_pid_checks(v4) )
    {
      v15 = uucore::util_name();
      v16 = v7;
      v13 = &v15;
      v14 = <&T as core::fmt::Display>::fmt;
      v9 = (char **)&unk_1BB5C0;
      v10 = 2LL;
      v11 = &v13;
      v12 = 1uLL;
      std::io::stdio::_eprint(&v9);
      v9 = &off_1BB610;
      v10 = 1LL;
      v11 = (__int64 **)&byte_8;
      v12 = 0LL;
      std::io::stdio::_eprint(&v9);
    }
  }
  else if ( v1 == 2 )
  {
    return;
  }
  if ( (unsigned __int8)uu_tail::args::Settings::has_stdin(a1) )
  {
    if ( v4
      || v1
      || *(_QWORD *)(a1 + 40) != 1LL
      || (same_file::Handle::stdin(&v9), !(unsigned __int8)core::result::Result<T,E>::map_or(&v9)) )
    {
      v9 = (char **)std::io::stdio::stdin();
      if ( (unsigned __int8)std::sys::pal::unix::io::is_terminal(&v9) )
      {
        v15 = uucore::util_name();
        v16 = v8;
        v13 = &v15;
        v14 = <&T as core::fmt::Display>::fmt;
        v9 = (char **)&unk_1BB5C0;
        v10 = 2LL;
        v11 = &v13;
        v12 = 1uLL;
        std::io::stdio::_eprint(&v9);
        v6 = &off_1BB620;
        goto LABEL_20;
      }
    }
  }
}
