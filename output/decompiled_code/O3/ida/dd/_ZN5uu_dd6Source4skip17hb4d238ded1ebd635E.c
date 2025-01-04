__int64 __fastcall uu_dd::Source::skip(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // r15
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // [rsp+Fh] [rbp-79h] BYREF
  _DWORD *v8; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-70h]
  char **v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int64 **v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int64 *v14; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h]

  v2 = a1 + 1;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      uu_dd::try_get_len_of_block_device(&v8, v2);
      if ( (_DWORD)v8 == 1 && v9 < a2 )
      {
        v16 = uucore::util_name();
        v17 = v3;
        v14 = &v16;
        v15 = <&T as core::fmt::Display>::fmt;
        v10 = (char **)&unk_161008;
        v11 = 2LL;
        v12 = &v14;
        v13 = 1uLL;
        std::io::stdio::_eprint(&v10);
        v10 = &off_161028;
        v11 = 1LL;
        v12 = (__int64 **)&byte_8;
        v13 = 0LL;
        std::io::stdio::_eprint(&v10);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v8);
        return 0LL;
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v8);
        v8 = a1 + 1;
        v9 = a2;
        result = std::io::copy::generic_copy(&v8, &v7);
        if ( !result && v5 < a2 )
        {
          v16 = uucore::util_name();
          v17 = v6;
          v14 = &v16;
          v15 = <&T as core::fmt::Display>::fmt;
          v10 = (char **)&unk_161008;
          v11 = 2LL;
          v12 = &v14;
          v13 = 1uLL;
          std::io::stdio::_eprint(&v10);
          v10 = &off_161038;
          v11 = 1LL;
          v12 = (__int64 **)&byte_8;
          v13 = 0LL;
          std::io::stdio::_eprint(&v10);
          return 0LL;
        }
      }
    }
    else
    {
      v10 = (char **)(a1 + 1);
      v11 = a2;
      return std::io::copy::generic_copy(&v10, &v7);
    }
  }
  else
  {
    core::result::Result<T,E>::unwrap(a2 >> 63, &off_161048);
    return <std::fs::File as std::io::Seek>::seek(v2, 2LL, a2);
  }
  return result;
}
