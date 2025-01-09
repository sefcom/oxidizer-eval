__int64 __fastcall uu_tee::process_error(_BYTE *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  void *v13; // [rsp+8h] [rbp-90h] BYREF
  __int64 v14; // [rsp+10h] [rbp-88h]
  __int64 **v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 *v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+40h] [rbp-58h]
  __int64 *v20; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall *v21)(); // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  __int128 v23; // [rsp+60h] [rbp-38h]
  char v24; // [rsp+70h] [rbp-28h]

  v6 = a2;
  v12 = a2;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        goto LABEL_4;
      case 1:
        goto LABEL_3;
      case 2:
        break;
      case 3:
        if ( (unsigned __int8)std::io::error::Error::kind(a2) == 11 )
          goto LABEL_5;
        break;
    }
    v22 = uucore::util_name();
    *(_QWORD *)&v23 = v10;
    v18 = &v22;
    v19 = <&T as core::fmt::Display>::fmt;
    v13 = &unk_11F9A8;
    v14 = 2LL;
    v17 = 0LL;
    v15 = &v18;
    v16 = 1LL;
    std::io::stdio::_eprint(&v13);
    v11 = *(_OWORD *)(a3 + 8);
    v22 = 0LL;
    v23 = v11;
    v24 = 0;
    v18 = &v22;
    v19 = <os_display::Quoted as core::fmt::Display>::fmt;
    v20 = &v12;
    v21 = <std::io::error::Error as core::fmt::Display>::fmt;
    v13 = &unk_11F9C8;
    v14 = 3LL;
    v17 = 0LL;
    v15 = &v18;
    v16 = 2LL;
    std::io::stdio::_eprint(&v13);
    return v12;
  }
  else
  {
LABEL_3:
    if ( (unsigned __int8)std::io::error::Error::kind(a2) != 11 )
    {
LABEL_4:
      v22 = uucore::util_name();
      *(_QWORD *)&v23 = v7;
      v18 = &v22;
      v19 = <&T as core::fmt::Display>::fmt;
      v13 = &unk_11F9A8;
      v14 = 2LL;
      v17 = 0LL;
      v15 = &v18;
      v16 = 1LL;
      std::io::stdio::_eprint(&v13);
      v8 = *(_OWORD *)(a3 + 8);
      v22 = 0LL;
      v23 = v8;
      v24 = 0;
      v18 = &v22;
      v19 = <os_display::Quoted as core::fmt::Display>::fmt;
      v20 = &v12;
      v21 = <std::io::error::Error as core::fmt::Display>::fmt;
      v13 = &unk_11F9C8;
      v14 = 3LL;
      v17 = 0LL;
      v15 = &v18;
      v16 = 2LL;
      std::io::stdio::_eprint(&v13);
      ++*a4;
      v6 = v12;
    }
LABEL_5:
    core::ptr::drop_in_place<std::io::error::Error>(v6);
    return 0LL;
  }
}
