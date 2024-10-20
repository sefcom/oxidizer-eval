__int64 __fastcall uu_dd::Dest::seek(_BYTE *a1, __int64 a2)
{
  _BYTE *v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-D8h] BYREF
  char **v10; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C0h]
  _QWORD *v12; // [rsp+40h] [rbp-B8h]
  __int128 v13; // [rsp+48h] [rbp-B0h]
  int v14; // [rsp+68h] [rbp-90h]

  switch ( *a1 )
  {
    case 0:
      LOBYTE(v11) = 0;
      v10 = (char **)a2;
      return std::io::copy::stack_buffer_copy(&v10, a1 + 8);
    case 1:
      v3 = a1 + 4;
      std::fs::File::metadata(&v10, a1 + 4);
      if ( (_DWORD)v10 == 2 )
      {
        v7 = v11;
LABEL_12:
        core::ptr::drop_in_place<std::io::error::Error>(&v7);
        goto LABEL_13;
      }
      if ( (v14 & 0xF000) != 0x6000 )
        goto LABEL_13;
      if ( <std::fs::File as std::io::Seek>::seek(v3, 1LL, 0LL)
        || (v5 = v4, <std::fs::File as std::io::Seek>::seek(v3, 0LL, 0LL)) && v4 )
      {
        v7 = v4;
        goto LABEL_12;
      }
      if ( v5 < a2 )
      {
        v9[0] = uucore::util_name();
        v9[1] = v6;
        v8[0] = v9;
        v8[1] = <&T as core::fmt::Display>::fmt;
        v10 = (char **)&unk_115C08;
        v11 = 2LL;
        v12 = v8;
        v13 = 1uLL;
        std::io::stdio::_eprint(&v10);
        v10 = &off_115CC8;
        v11 = 1LL;
        v12 = (_QWORD *)&byte_8;
        v13 = 0LL;
        std::io::stdio::_eprint(&v10);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        return 0LL;
      }
LABEL_13:
      if ( a2 < 0 )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v10, &unk_115B68, &off_115CD8);
      return <std::fs::File as std::io::Seek>::seek(v3, 2LL, a2);
    case 2:
      v10 = (char **)(a1 + 4);
      v11 = a2;
      return std::io::copy::generic_copy(&v10, &v10);
    case 3:
      return 0LL;
  }
}
