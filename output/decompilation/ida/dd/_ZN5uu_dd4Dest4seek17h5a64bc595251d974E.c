__int64 __fastcall uu_dd::Dest::seek(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  char **v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h]
  _QWORD *v10; // [rsp+10h] [rbp-68h]
  __int128 v11; // [rsp+18h] [rbp-60h]
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+50h] [rbp-28h] BYREF

  switch ( *a1 )
  {
    case 0:
      LOBYTE(v10) = 0;
      v8 = (char **)a2;
      v9 = a2;
      result = ((__int64 (__fastcall *)(char ***, _BYTE *))std::io::copy::generic_copy)(&v8, a1 + 8);
      break;
    case 1:
      uu_dd::try_get_len_of_block_device(v12, a1 + 4);
      if ( v12[0] == 2LL || (v12[0] & 1) == 0 || v12[1] >= a2 )
      {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(v12);
        core::result::Result<T,E>::unwrap(a2 >> 63, &off_13DDD8);
        result = <std::fs::File as std::io::Seek>::seek(a1 + 4, 2LL, a2);
      }
      else
      {
        v14[0] = uucore::util_name();
        v14[1] = v7;
        v13[0] = v14;
        v13[1] = <&T as core::fmt::Display>::fmt;
        v8 = (char **)&unk_13DC60;
        v9 = 2LL;
        v10 = v13;
        v11 = 1uLL;
        std::io::stdio::_eprint(&v8);
        v8 = &off_13DDC8;
        v9 = 1LL;
        v10 = (_QWORD *)&byte_8;
        v11 = 0LL;
        std::io::stdio::_eprint(&v8);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(v12);
        result = 0LL;
      }
      break;
    case 2:
      v8 = (char **)(a1 + 4);
      v9 = a2;
      v10 = (_QWORD *)a2;
      result = ((__int64 (__fastcall *)(char ***, unsigned __int64, __int64, __int64, __int64, __int64))std::io::copy::generic_copy)(
                 &v8,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6);
      break;
    case 3:
      result = 0LL;
      break;
  }
  return result;
}