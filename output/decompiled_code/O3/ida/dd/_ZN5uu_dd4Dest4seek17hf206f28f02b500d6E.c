__int64 __fastcall uu_dd::Dest::seek(_BYTE *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  char v4; // [rsp+Fh] [rbp-79h] BYREF
  int v5; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-70h]
  char **v7; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h]
  _QWORD *v9; // [rsp+30h] [rbp-58h]
  __int128 v10; // [rsp+38h] [rbp-50h]
  _QWORD v11[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+60h] [rbp-28h] BYREF

  switch ( *a1 )
  {
    case 0:
      LOBYTE(v8) = 0;
      v7 = (char **)a2;
      result = std::io::copy::generic_copy(&v7, a1 + 8);
      break;
    case 1:
      uu_dd::try_get_len_of_block_device(&v5, a1 + 4);
      if ( v5 == 1 && v6 < a2 )
      {
        v12[0] = uucore::util_name();
        v12[1] = v3;
        v11[0] = v12;
        v11[1] = <&T as core::fmt::Display>::fmt;
        v7 = (char **)&unk_161008;
        v8 = 2LL;
        v9 = v11;
        v10 = 1uLL;
        std::io::stdio::_eprint(&v7);
        v7 = &off_1610E0;
        v8 = 1LL;
        v9 = (_QWORD *)&byte_8;
        v10 = 0LL;
        std::io::stdio::_eprint(&v7);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v5);
        result = 0LL;
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v5);
        core::result::Result<T,E>::unwrap(a2 >> 63, &off_1610F0);
        result = <std::fs::File as std::io::Seek>::seek(a1 + 4, 2LL, a2);
      }
      break;
    case 2:
      v7 = (char **)(a1 + 4);
      v8 = a2;
      result = std::io::copy::generic_copy(&v7, &v4);
      break;
    case 3:
      result = 0LL;
      break;
  }
  return result;
}
