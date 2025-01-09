void __fastcall uu_tail::args::Settings::check_warnings(char ***a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  char **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  char **v11; // [rsp+8h] [rbp-70h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  __int64 **v13; // [rsp+18h] [rbp-60h]
  __int128 v14; // [rsp+20h] [rbp-58h]
  __int64 *v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v2 = (__int64)a1;
  v3 = *((_BYTE *)a1 + 76);
  if ( *((_BYTE *)a1 + 72) )
  {
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        v17 = uucore::util_name(a1, a2);
        v18 = v4;
        v15 = &v17;
        v16 = <&T as core::fmt::Display>::fmt;
        v11 = (char **)&unk_1BB5C0;
        v12 = 2LL;
        v13 = &v15;
        v14 = 1uLL;
        std::io::stdio::_eprint(&v11);
        v11 = &off_1BB5E0;
        v12 = 1LL;
        v13 = (__int64 **)&byte_8;
        v14 = 0LL;
        a1 = &v11;
        std::io::stdio::_eprint(&v11);
        v3 = 2;
      }
    }
    else
    {
      v17 = uucore::util_name(a1, a2);
      v18 = v5;
      v15 = &v17;
      v16 = <&T as core::fmt::Display>::fmt;
      v11 = (char **)&unk_1BB5C0;
      v12 = 2LL;
      v13 = &v15;
      v14 = 1uLL;
      std::io::stdio::_eprint(&v11);
      v11 = &off_1BB5F0;
      v12 = 1LL;
      v13 = (__int64 **)&byte_8;
      v14 = 0LL;
      a1 = &v11;
      std::io::stdio::_eprint(&v11);
      v3 = 0;
    }
  }
  v6 = *(_DWORD *)(v2 + 68);
  if ( v6 )
  {
    if ( v3 == 2 )
    {
      v17 = uucore::util_name(a1, a2);
      v18 = v7;
      v15 = &v17;
      v16 = <&T as core::fmt::Display>::fmt;
      v11 = (char **)&unk_1BB5C0;
      v12 = 2LL;
      v13 = &v15;
      v14 = 1uLL;
      std::io::stdio::_eprint(&v11);
      v8 = &off_1BB600;
LABEL_20:
      v11 = v8;
      v12 = 1LL;
      v13 = (__int64 **)&byte_8;
      v14 = 0LL;
      std::io::stdio::_eprint(&v11);
      return;
    }
    if ( !uu_tail::platform::unix::supports_pid_checks(v6) )
    {
      v17 = uucore::util_name(v6, a2);
      v18 = v9;
      v15 = &v17;
      v16 = <&T as core::fmt::Display>::fmt;
      v11 = (char **)&unk_1BB5C0;
      v12 = 2LL;
      v13 = &v15;
      v14 = 1uLL;
      std::io::stdio::_eprint(&v11);
      v11 = &off_1BB610;
      v12 = 1LL;
      v13 = (__int64 **)&byte_8;
      v14 = 0LL;
      std::io::stdio::_eprint(&v11);
    }
  }
  else if ( v3 == 2 )
  {
    return;
  }
  if ( (unsigned __int8)uu_tail::args::Settings::has_stdin(v2) )
  {
    if ( v6
      || v3
      || *(_QWORD *)(v2 + 40) != 1LL
      || (same_file::Handle::stdin(&v11), !(unsigned __int8)core::result::Result<T,E>::map_or(&v11)) )
    {
      v11 = (char **)std::io::stdio::stdin();
      if ( (unsigned __int8)std::sys::pal::unix::io::is_terminal(&v11) )
      {
        v17 = uucore::util_name(&v11, a2);
        v18 = v10;
        v15 = &v17;
        v16 = <&T as core::fmt::Display>::fmt;
        v11 = (char **)&unk_1BB5C0;
        v12 = 2LL;
        v13 = &v15;
        v14 = 1uLL;
        std::io::stdio::_eprint(&v11);
        v8 = &off_1BB620;
        goto LABEL_20;
      }
    }
  }
}
