__int64 __fastcall uu_numfmt::format_and_handle_validation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(); // rdx
  char v6; // bl
  __int64 v7; // rdx
  void *v8; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-C8h]
  __int64 v10; // [rsp+20h] [rbp-B8h]
  __int64 v11; // [rsp+28h] [rbp-B0h]
  __int128 *v12; // [rsp+38h] [rbp-A0h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+40h] [rbp-98h]
  __int128 ***v14; // [rsp+48h] [rbp-90h]
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-88h]
  __int128 v16; // [rsp+58h] [rbp-80h] BYREF
  __int64 v17; // [rsp+68h] [rbp-70h]
  __int128 **v18; // [rsp+70h] [rbp-68h] BYREF
  __int128 v19; // [rsp+78h] [rbp-60h]
  __int64 v20; // [rsp+88h] [rbp-50h]
  __int128 v21; // [rsp+90h] [rbp-48h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-38h]
  _QWORD v23[2]; // [rsp+A8h] [rbp-30h] BYREF
  _QWORD v24[4]; // [rsp+B8h] [rbp-20h] BYREF

  v23[0] = a1;
  v23[1] = a2;
  uu_numfmt::format::format_and_print(&v16, a1, a2, a3);
  if ( (_QWORD)v16 != 0x8000000000000000LL )
  {
    v22 = v17;
    v21 = v16;
    switch ( *(_BYTE *)(a3 + 200) )
    {
      case 0:
        v10 = v17;
        v9 = v16;
        v8 = &dword_0 + 2;
        return alloc::boxed::Box<T>::new(&v8);
      case 1:
        v20 = v17;
        v19 = v16;
        v18 = (__int128 **)(&dword_0 + 2);
        uucore::mods::error::set_exit_code(2LL);
        v24[0] = uucore::util_name();
        v24[1] = v7;
        v12 = (__int128 *)v24;
        v13 = <&T as core::fmt::Display>::fmt;
        v14 = &v18;
        v15 = <uu_numfmt::errors::NumfmtError as core::fmt::Display>::fmt;
        v8 = &unk_1362D0;
        *(_QWORD *)&v9 = 3LL;
        v11 = 0LL;
        *((_QWORD *)&v9 + 1) = &v12;
        v10 = 2LL;
        std::io::stdio::_eprint(&v8);
        core::ptr::drop_in_place<uu_numfmt::errors::NumfmtError>(&v18);
        v6 = 1;
        goto LABEL_7;
      case 2:
        v12 = (__int128 *)uucore::util_name();
        v13 = v5;
        v18 = &v12;
        *(_QWORD *)&v19 = <&T as core::fmt::Display>::fmt;
        v8 = &unk_136300;
        *(_QWORD *)&v9 = 2LL;
        v11 = 0LL;
        *((_QWORD *)&v9 + 1) = &v18;
        v10 = 1LL;
        std::io::stdio::_eprint(&v8);
        v12 = &v21;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v8 = &unk_136320;
        *(_QWORD *)&v9 = 2LL;
        v11 = 0LL;
        *((_QWORD *)&v9 + 1) = &v12;
        v10 = 1LL;
        std::io::stdio::_eprint(&v8);
        goto LABEL_5;
      case 3:
LABEL_5:
        v6 = 0;
LABEL_7:
        v12 = (__int128 *)v23;
        v13 = <&T as core::fmt::Display>::fmt;
        v8 = &unk_136320;
        *(_QWORD *)&v9 = 2LL;
        v11 = 0LL;
        *((_QWORD *)&v9 + 1) = &v12;
        v10 = 1LL;
        std::io::stdio::_print(&v8);
        if ( !v6 )
          core::ptr::drop_in_place<alloc::string::String>(&v21);
        break;
    }
  }
  return 0LL;
}
