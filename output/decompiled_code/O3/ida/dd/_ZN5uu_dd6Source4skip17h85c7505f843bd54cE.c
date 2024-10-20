__int64 __fastcall uu_dd::Source::skip(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdx
  __int128 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-F0h] BYREF
  __int128 *v10; // [rsp+10h] [rbp-E8h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+18h] [rbp-E0h]
  __int128 v12; // [rsp+20h] [rbp-D8h] BYREF
  char **v13; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C0h]
  __int128 **v15; // [rsp+40h] [rbp-B8h]
  __int128 v16; // [rsp+48h] [rbp-B0h]
  int v17; // [rsp+68h] [rbp-90h]

  if ( *a1 )
  {
    v2 = a1 + 1;
    if ( *a1 != 1 )
    {
      v13 = (char **)(a1 + 1);
      v14 = a2;
      return std::io::copy::generic_copy(&v13, &v13);
    }
    std::fs::File::metadata(&v13, v2);
    if ( (_DWORD)v13 == 2 )
    {
      v9 = v14;
    }
    else
    {
      if ( (v17 & 0xF000) != 0x6000 )
      {
LABEL_14:
        v8 = (__int64)(a1 + 1);
        v9 = a2;
        result = std::io::copy::generic_copy(&v8, &v13);
        if ( !result && v6 < a2 )
        {
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v12 = xmmword_11BE68;
          v10 = &v12;
          v11 = <&T as core::fmt::Display>::fmt;
          v13 = (char **)&unk_115C08;
          v14 = 2LL;
          v15 = &v10;
          v16 = 1uLL;
          std::io::stdio::_eprint(&v13);
          v13 = &off_115C38;
          v14 = 1LL;
          v15 = (__int128 **)&byte_8;
          v16 = 0LL;
          std::io::stdio::_eprint(&v13);
          return 0LL;
        }
        return result;
      }
      if ( !<std::fs::File as std::io::Seek>::seek(v2, 1LL, 0LL) )
      {
        v5 = v4;
        if ( !<std::fs::File as std::io::Seek>::seek(v2, 0LL, 0LL) || !v4 )
        {
          if ( v5 < a2 )
          {
            *(_QWORD *)&v7 = uucore::util_name();
            v12 = v7;
            v10 = &v12;
            v11 = <&T as core::fmt::Display>::fmt;
            v13 = (char **)&unk_115C08;
            v14 = 2LL;
            v15 = &v10;
            v16 = 1uLL;
            std::io::stdio::_eprint(&v13);
            v13 = &off_115C28;
            v14 = 1LL;
            v15 = (__int128 **)&byte_8;
            v16 = 0LL;
            std::io::stdio::_eprint(&v13);
            _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
            return 0LL;
          }
          goto LABEL_14;
        }
      }
      v9 = v4;
    }
    v8 = 2LL;
    core::ptr::drop_in_place<std::io::error::Error>(&v9);
    goto LABEL_14;
  }
  if ( a2 < 0 )
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v13, &unk_115B68, &off_115BF0);
  return <std::fs::File as std::io::Seek>::seek(a1 + 1, 2LL, a2);
}
