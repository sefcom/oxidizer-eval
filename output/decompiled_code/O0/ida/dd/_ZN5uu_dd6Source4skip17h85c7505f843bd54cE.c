__int64 __fastcall uu_dd::Source::skip(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r15
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  char v16; // [rsp+Fh] [rbp-1F9h] BYREF
  __int64 v17; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v18; // [rsp+18h] [rbp-1F0h]
  _QWORD v19[2]; // [rsp+20h] [rbp-1E8h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-1D8h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-1C8h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-1B8h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-1A8h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp-198h] BYREF
  _QWORD v25[6]; // [rsp+80h] [rbp-188h] BYREF
  _QWORD v26[6]; // [rsp+B0h] [rbp-158h] BYREF
  _QWORD v27[3]; // [rsp+E0h] [rbp-128h] BYREF
  __int128 v28; // [rsp+F8h] [rbp-110h]
  _QWORD v29[3]; // [rsp+110h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+128h] [rbp-E0h]
  __int64 v31; // [rsp+140h] [rbp-C8h] BYREF
  unsigned __int64 v32[6]; // [rsp+148h] [rbp-C0h] BYREF
  int v33; // [rsp+178h] [rbp-90h]

  if ( *a1 )
  {
    v2 = a1 + 1;
    if ( *a1 != 1 )
    {
      v24[0] = a1 + 1;
      v24[1] = a2;
      return std::io::copy::stack_buffer_copy(v24, &v16);
    }
    std::fs::File::metadata(&v31, v2);
    if ( v31 == 2 )
    {
      v3 = v32[0];
LABEL_10:
      v18 = v3;
      v17 = 2LL;
      goto LABEL_11;
    }
    if ( (v33 & 0xF000) == 0x6000 )
    {
      v5 = <std::fs::File as std::io::Seek>::seek(v2, 1LL, 0LL);
      v3 = v6;
      if ( v5 )
        goto LABEL_10;
      if ( <std::fs::File as std::io::Seek>::seek(v2, 0LL, 0LL) && v12 )
      {
        v18 = v12;
        v17 = 2LL;
        v3 = v12;
LABEL_11:
        std::io::error::repr_bitpacked::decode_repr(&v31, v3);
        if ( (unsigned __int8)v31 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v32);
        goto LABEL_13;
      }
      v17 = 1LL;
      v18 = v3;
      if ( v3 < a2 )
      {
        v13 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v14 = *(_QWORD *)(v13 + 8);
        v15 = *(_QWORD *)(v13 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v14, 1LL, 1LL, v15);
        v20[0] = v14;
        v20[1] = v15;
        v19[0] = v20;
        v19[1] = <&T as core::fmt::Display>::fmt;
        v25[0] = &unk_143C10;
        v25[1] = 2LL;
        v25[4] = 0LL;
        v25[2] = v19;
        v25[3] = 1LL;
        std::io::stdio::_eprint(v25);
        v27[0] = &off_143C30;
        v27[1] = 1LL;
        v27[2] = 8LL;
        v28 = 0LL;
        std::io::stdio::_eprint(v27);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        return 0LL;
      }
    }
LABEL_13:
    v21[0] = a1 + 1;
    v21[1] = a2;
    v8 = std::io::copy::stack_buffer_copy(v21, &v16);
    result = 1LL;
    if ( v8 )
      return result;
    if ( v7 < a2 )
    {
      v9 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v10 = *(_QWORD *)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v11);
      v23[0] = v10;
      v23[1] = v11;
      v22[0] = v23;
      v22[1] = <&T as core::fmt::Display>::fmt;
      v26[0] = &unk_143C10;
      v26[1] = 2LL;
      v26[4] = 0LL;
      v26[2] = v22;
      v26[3] = 1LL;
      std::io::stdio::_eprint(v26);
      v29[0] = &off_143C40;
      v29[1] = 1LL;
      v29[2] = 8LL;
      v30 = 0LL;
      std::io::stdio::_eprint(v29);
    }
    return 0LL;
  }
  if ( a2 < 0 )
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v16, &unk_143B90, &off_143BF8);
  return <std::fs::File as std::io::Seek>::seek(a1 + 1, 2LL, a2);
}
