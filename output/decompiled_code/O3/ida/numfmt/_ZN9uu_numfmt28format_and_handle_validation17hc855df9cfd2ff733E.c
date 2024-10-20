_QWORD *__fastcall uu_numfmt::format_and_handle_validation(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  _QWORD *result; // rax
  char v14; // bl
  void *v15; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+10h] [rbp-D8h]
  __int128 **v17; // [rsp+18h] [rbp-D0h]
  __int64 v18; // [rsp+20h] [rbp-C8h]
  __int64 v19; // [rsp+28h] [rbp-C0h]
  __int128 v20; // [rsp+38h] [rbp-B0h] BYREF
  __int128 **v21; // [rsp+48h] [rbp-A0h]
  __int64 (__fastcall *v22)(); // [rsp+50h] [rbp-98h]
  __int128 *v23; // [rsp+58h] [rbp-90h] BYREF
  __int128 v24; // [rsp+60h] [rbp-88h]
  __int64 v25; // [rsp+70h] [rbp-78h]
  __int128 v26; // [rsp+78h] [rbp-70h] BYREF
  __int64 v27; // [rsp+88h] [rbp-60h]
  __int128 v28; // [rsp+90h] [rbp-58h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-48h]
  _QWORD v30[2]; // [rsp+A8h] [rbp-40h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-30h] BYREF

  v5 = a1;
  v30[0] = a1;
  v30[1] = a2;
  uu_numfmt::format::format_and_print(&v26, a1, a2, a3);
  v10 = v26;
  if ( (_QWORD)v26 != 0x8000000000000000LL )
  {
    v29 = v27;
    v28 = v26;
    switch ( *(_BYTE *)(a3 + 200) )
    {
      case 0:
        v11 = *((_QWORD *)&v26 + 1);
        v12 = v27;
        result = (_QWORD *)_rust_alloc(32LL, 8LL);
        if ( !result )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        *result = 2LL;
        result[1] = v10;
        result[2] = v11;
        result[3] = v12;
        return result;
      case 1:
        v25 = v27;
        v24 = v26;
        v23 = (_OWORD *)(&dword_0 + 2);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 2);
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v31 = xmmword_FFDE0;
        *(_QWORD *)&v20 = &v31;
        *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
        v21 = &v23;
        v22 = <uu_numfmt::errors::NumfmtError as core::fmt::Display>::fmt;
        v15 = &unk_FADF8;
        v16 = 3LL;
        v19 = 0LL;
        v17 = (__int128 **)&v20;
        v18 = 2LL;
        std::io::stdio::_eprint(&v15);
        v5 = (__int64 *)v24;
        if ( (_QWORD)v24 )
          _rust_dealloc(*((_QWORD *)&v24 + 1), v24, 1LL);
        v14 = 1;
        goto LABEL_14;
      case 2:
        if ( uucore::UTIL_NAME != 2 )
        {
          v5 = &uucore::UTIL_NAME;
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        }
        v20 = xmmword_FFDE0;
        v23 = &v20;
        *(_QWORD *)&v24 = <&T as core::fmt::Display>::fmt;
        v15 = &unk_FAE28;
        v16 = 2LL;
        v19 = 0LL;
        v17 = &v23;
        v18 = 1LL;
        std::io::stdio::_eprint(&v15);
        *(_QWORD *)&v20 = &v28;
        *((_QWORD *)&v20 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v15 = &unk_FAE48;
        v16 = 2LL;
        v19 = 0LL;
        v17 = (__int128 **)&v20;
        v18 = 1LL;
        std::io::stdio::_eprint(&v15);
        goto LABEL_8;
      case 3:
LABEL_8:
        v14 = 0;
LABEL_14:
        *(_QWORD *)&v20 = v30;
        *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
        v15 = &unk_FAE48;
        v16 = 2LL;
        v19 = 0LL;
        v17 = (__int128 **)&v20;
        v18 = 1LL;
        std::io::stdio::_print(&v15, v5, v6, v7, v8, v9);
        if ( !v14 && (_QWORD)v28 )
          _rust_dealloc(*((_QWORD *)&v28 + 1), v28, 1LL);
        break;
    }
  }
  return 0LL;
}
