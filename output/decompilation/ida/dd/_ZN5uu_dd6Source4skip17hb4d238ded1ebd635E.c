__int64 __fastcall uu_dd::Source::skip(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // [rsp+Fh] [rbp-79h] BYREF
  _DWORD *v9; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-70h]
  char **v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-60h]
  __int64 **v13; // [rsp+30h] [rbp-58h]
  __int128 v14; // [rsp+38h] [rbp-50h]
  __int64 *v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-20h]

  v3 = a1 + 1;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      uu_dd::try_get_len_of_block_device(&v9, (__int64)v3, a3);
      if ( (_DWORD)v9 == 1 && v10 < a2 )
      {
        v17 = uucore::util_name();
        v18 = v4;
        v15 = &v17;
        v16 = <&T as core::fmt::Display>::fmt;
        v11 = (char **)&unk_161008;
        v12 = 2LL;
        v13 = &v15;
        v14 = 1uLL;
        std::io::stdio::_eprint(&v11);
        v11 = &off_161028;
        v12 = 1LL;
        v13 = (__int64 **)&byte_8;
        v14 = 0LL;
        std::io::stdio::_eprint(&v11);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v9);
        return 0LL;
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v9);
        v9 = a1 + 1;
        v10 = a2;
        result = std::io::copy::generic_copy(&v9, &v8);
        if ( !result && v6 < a2 )
        {
          v17 = uucore::util_name();
          v18 = v7;
          v15 = &v17;
          v16 = <&T as core::fmt::Display>::fmt;
          v11 = (char **)&unk_161008;
          v12 = 2LL;
          v13 = &v15;
          v14 = 1uLL;
          std::io::stdio::_eprint(&v11);
          v11 = &off_161038;
          v12 = 1LL;
          v13 = (__int64 **)&byte_8;
          v14 = 0LL;
          std::io::stdio::_eprint(&v11);
          return 0LL;
        }
      }
    }
    else
    {
      v11 = (char **)(a1 + 1);
      v12 = a2;
      return std::io::copy::generic_copy(&v11, &v8);
    }
  }
  else
  {
    core::result::Result<T,E>::unwrap(a2 >> 63, &off_161048);
    return <std::fs::File as std::io::Seek>::seek(v3, 2LL, a2);
  }
  return result;
}
