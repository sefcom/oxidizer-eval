__int64 __fastcall uu_tee::process_error(_BYTE *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r15
  __int128 v7; // xmm0
  __int128 v9; // xmm0
  __int64 v10; // [rsp+0h] [rbp-98h] BYREF
  void *v11; // [rsp+8h] [rbp-90h] BYREF
  __int64 v12; // [rsp+10h] [rbp-88h]
  _BYTE **v13; // [rsp+18h] [rbp-80h]
  __int64 v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  _BYTE *v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-58h]
  __int64 *v18; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall *v19)(); // [rsp+50h] [rbp-48h]
  _BYTE v20[24]; // [rsp+58h] [rbp-40h] BYREF
  char v21; // [rsp+70h] [rbp-28h]

  v6 = a2;
  v10 = a2;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        goto LABEL_9;
      case 1:
        goto LABEL_6;
      case 2:
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        break;
      case 3:
        if ( (unsigned __int8)std::io::error::Error::kind(a2) == 11 )
          goto LABEL_10;
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        break;
    }
    *(_OWORD *)v20 = xmmword_EC6B0;
    v16 = v20;
    v17 = <&T as core::fmt::Display>::fmt;
    v11 = &anon_53ff2aae8c1b62ba59dc209553c8e3d7_39_llvm_2604383847107207927;
    v12 = 2LL;
    v15 = 0LL;
    v13 = &v16;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
    v9 = *(_OWORD *)(a3 + 8);
    *(_QWORD *)v20 = 0LL;
    *(_OWORD *)&v20[8] = v9;
    v21 = 0;
    v16 = v20;
    v17 = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &v10;
    v19 = <std::io::error::Error as core::fmt::Display>::fmt;
    v11 = &unk_E7A50;
    v12 = 3LL;
    v15 = 0LL;
    v13 = &v16;
    v14 = 2LL;
    std::io::stdio::_eprint(&v11);
    return v10;
  }
  else
  {
LABEL_6:
    if ( (unsigned __int8)std::io::error::Error::kind(a2) != 11 )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
LABEL_9:
      *(_OWORD *)v20 = xmmword_EC6B0;
      v16 = v20;
      v17 = <&T as core::fmt::Display>::fmt;
      v11 = &anon_53ff2aae8c1b62ba59dc209553c8e3d7_39_llvm_2604383847107207927;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v16;
      v14 = 1LL;
      std::io::stdio::_eprint(&v11);
      v7 = *(_OWORD *)(a3 + 8);
      *(_QWORD *)v20 = 0LL;
      *(_OWORD *)&v20[8] = v7;
      v21 = 0;
      v16 = v20;
      v17 = <os_display::Quoted as core::fmt::Display>::fmt;
      v18 = &v10;
      v19 = <std::io::error::Error as core::fmt::Display>::fmt;
      v11 = &unk_E7A50;
      v12 = 3LL;
      v15 = 0LL;
      v13 = &v16;
      v14 = 2LL;
      std::io::stdio::_eprint(&v11);
      ++*a4;
      v6 = v10;
    }
LABEL_10:
    core::ptr::drop_in_place<std::io::error::Error>(v6);
    return 0LL;
  }
}
