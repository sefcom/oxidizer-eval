__int64 __fastcall uu_dd::Source::skip(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // r15
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  __int64 (__fastcall *v11)(); // rdx
  char **v12; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 **v14; // [rsp+10h] [rbp-78h]
  __int128 v15; // [rsp+18h] [rbp-70h]
  __int64 **v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+38h] [rbp-50h]
  __int64 *v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]
  unsigned __int64 v22; // [rsp+60h] [rbp-28h]

  v2 = a1 + 1;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      uu_dd::try_get_len_of_block_device(&v16, v2);
      if ( v16 == (__int64 **)((char *)&dword_0 + 2) || ((unsigned __int8)v16 & 1) == 0 || (unsigned __int64)v17 >= a2 )
      {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v16);
        v20 = (__int64)(a1 + 1);
        v21 = a2;
        v22 = a2;
        result = std::io::copy::generic_copy(&v20, v2, v5, v6, v7, v8, v12, v13, v14);
        if ( !(result & 1 | (a2 <= v9)) )
        {
          v10 = result;
          v18 = (__int64 *)uucore::util_name();
          v19 = v11;
          v16 = &v18;
          v17 = <&T as core::fmt::Display>::fmt;
          v12 = (char **)&unk_13DC60;
          v13 = 2LL;
          v14 = (__int64 **)&v16;
          v15 = 1uLL;
          std::io::stdio::_eprint(&v12);
          v12 = &off_13DC90;
          v13 = 1LL;
          v14 = (__int64 **)&byte_8;
          v15 = 0LL;
          std::io::stdio::_eprint(&v12);
          return v10;
        }
      }
      else
      {
        v20 = uucore::util_name();
        v21 = v3;
        v18 = &v20;
        v19 = <&T as core::fmt::Display>::fmt;
        v12 = (char **)&unk_13DC60;
        v13 = 2LL;
        v14 = &v18;
        v15 = 1uLL;
        std::io::stdio::_eprint(&v12);
        v12 = &off_13DC80;
        v13 = 1LL;
        v14 = (__int64 **)&byte_8;
        v15 = 0LL;
        std::io::stdio::_eprint(&v12);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v16);
        return 0LL;
      }
    }
    else
    {
      v12 = (char **)(a1 + 1);
      v13 = a2;
      v14 = (__int64 **)a2;
      return ((__int64 (__fastcall *)(char ***))std::io::copy::generic_copy)(&v12);
    }
  }
  else
  {
    core::result::Result<T,E>::unwrap(a2 >> 63, &off_13DCA0);
    return <std::fs::File as std::io::Seek>::seek(v2, 2LL, a2);
  }
  return result;
}