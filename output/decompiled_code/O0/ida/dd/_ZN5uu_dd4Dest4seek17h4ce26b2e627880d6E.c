__int64 __fastcall uu_dd::Dest::seek(_BYTE *a1, __int64 a2)
{
  _BYTE *v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // [rsp+Fh] [rbp-179h] BYREF
  __int64 v12; // [rsp+10h] [rbp-178h]
  unsigned __int64 v13; // [rsp+18h] [rbp-170h]
  __int64 v14; // [rsp+20h] [rbp-168h] BYREF
  char v15; // [rsp+28h] [rbp-160h]
  _QWORD v16[2]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v19[6]; // [rsp+60h] [rbp-128h] BYREF
  _QWORD v20[3]; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-E0h]
  __int64 v22; // [rsp+C0h] [rbp-C8h] BYREF
  unsigned __int64 v23[6]; // [rsp+C8h] [rbp-C0h] BYREF
  int v24; // [rsp+F8h] [rbp-90h]

  switch ( *a1 )
  {
    case 0:
      v14 = a2;
      v15 = 0;
      return std::io::copy::stack_buffer_copy(&v14, a1 + 8);
    case 1:
      v3 = a1 + 4;
      std::fs::File::metadata(&v22, a1 + 4);
      if ( v22 == 2 )
      {
        v4 = v23[0];
LABEL_9:
        v13 = v4;
        v12 = 2LL;
        goto LABEL_10;
      }
      if ( (v24 & 0xF000) != 0x6000 )
        goto LABEL_12;
      v5 = <std::fs::File as std::io::Seek>::seek(v3, 1LL, 0LL);
      v4 = v6;
      if ( v5 )
        goto LABEL_9;
      if ( <std::fs::File as std::io::Seek>::seek(v3, 0LL, 0LL) && v7 )
      {
        v13 = v7;
        v12 = 2LL;
        v4 = v7;
LABEL_10:
        std::io::error::repr_bitpacked::decode_repr(&v22, v4);
        if ( (unsigned __int8)v22 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v23);
        goto LABEL_12;
      }
      v12 = 1LL;
      v13 = v4;
      if ( v4 < a2 )
      {
        v8 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v9 = *(_QWORD *)(v8 + 8);
        v10 = *(_QWORD *)(v8 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
        v17[0] = v9;
        v17[1] = v10;
        v16[0] = v17;
        v16[1] = <&T as core::fmt::Display>::fmt;
        v19[0] = &unk_143C10;
        v19[1] = 2LL;
        v19[4] = 0LL;
        v19[2] = v16;
        v19[3] = 1LL;
        std::io::stdio::_eprint(v19);
        v20[0] = &off_143DF0;
        v20[1] = 1LL;
        v20[2] = 8LL;
        v21 = 0LL;
        std::io::stdio::_eprint(v20);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        return 0LL;
      }
LABEL_12:
      if ( a2 < 0 )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v11, &unk_143B90, &off_143E00);
      return <std::fs::File as std::io::Seek>::seek(v3, 2LL, a2);
    case 2:
      v18[0] = a1 + 4;
      v18[1] = a2;
      return std::io::copy::stack_buffer_copy(v18, &v11);
    case 3:
      return 0LL;
  }
}
