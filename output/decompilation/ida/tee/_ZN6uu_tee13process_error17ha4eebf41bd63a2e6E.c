__int64 __fastcall uu_tee::process_error(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-A0h] BYREF
  void *v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  __int64 **v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  __int64 *v17; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-60h]
  __int64 *v19; // [rsp+50h] [rbp-58h]
  __int64 (__fastcall *v20)(); // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp-38h]
  char v24; // [rsp+78h] [rbp-30h]

  v11 = a2;
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
    v21 = uucore::util_name();
    v22 = v10;
    v17 = &v21;
    v18 = <&T as core::fmt::Display>::fmt;
    v12 = &unk_EA4F0;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v17;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
    v21 = 0LL;
    v22 = a3;
    v23 = a4;
    v24 = 0;
    v17 = &v21;
    v18 = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &v11;
    v20 = <std::io::error::Error as core::fmt::Display>::fmt;
    v12 = &unk_EA510;
    v13 = 3LL;
    v16 = 0LL;
    v14 = &v17;
    v15 = 2LL;
    std::io::stdio::_eprint(&v12);
    return v11;
  }
  else
  {
LABEL_3:
    if ( (unsigned __int8)std::io::error::Error::kind(a2) != 11 )
    {
LABEL_4:
      v21 = uucore::util_name();
      v22 = v8;
      v17 = &v21;
      v18 = <&T as core::fmt::Display>::fmt;
      v12 = &unk_EA4F0;
      v13 = 2LL;
      v16 = 0LL;
      v14 = &v17;
      v15 = 1LL;
      std::io::stdio::_eprint(&v12);
      v21 = 0LL;
      v22 = a3;
      v23 = a4;
      v24 = 0;
      v17 = &v21;
      v18 = <os_display::Quoted as core::fmt::Display>::fmt;
      v19 = &v11;
      v20 = <std::io::error::Error as core::fmt::Display>::fmt;
      v12 = &unk_EA510;
      v13 = 3LL;
      v16 = 0LL;
      v14 = &v17;
      v15 = 2LL;
      std::io::stdio::_eprint(&v12);
      ++*a5;
    }
LABEL_5:
    core::ptr::drop_in_place<std::io::error::Error>(v11);
    return 0LL;
  }
}