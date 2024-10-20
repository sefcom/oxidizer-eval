signed __int64 *__fastcall uu_tee::open(signed __int64 *a1, const void *a2, signed __int64 a3, int a4, _BYTE *a5)
{
  int v8; // ebp
  _DWORD *v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  void *v13; // r13
  signed __int64 v14; // rcx
  signed __int64 v16; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+10h] [rbp-D8h] BYREF
  int v18; // [rsp+18h] [rbp-D0h]
  __int16 v19; // [rsp+1Ch] [rbp-CCh]
  __int64 v20; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-C0h]
  __int64 v22; // [rsp+30h] [rbp-B8h]
  _DWORD v23[2]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-A8h]
  void *v25; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-98h]
  __int128 **v27; // [rsp+58h] [rbp-90h]
  __int64 v28; // [rsp+60h] [rbp-88h]
  __int64 v29; // [rsp+68h] [rbp-80h]
  __int128 *v30; // [rsp+78h] [rbp-70h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+80h] [rbp-68h]
  signed __int64 *v32; // [rsp+88h] [rbp-60h]
  __int64 (__fastcall *v33)(); // [rsp+90h] [rbp-58h]
  __int128 v34; // [rsp+98h] [rbp-50h] BYREF
  signed __int64 v35; // [rsp+A8h] [rbp-40h]
  char v36; // [rsp+B0h] [rbp-38h]

  std::sys::os_str::bytes::Slice::to_owned(&v20);
  v17 = 0x1B600000000LL;
  v18 = 0;
  v19 = 0;
  if ( a4 )
    BYTE2(v18) = 1;
  else
    HIBYTE(v18) = 1;
  BYTE1(v18) = 1;
  LOBYTE(v19) = 1;
  std::fs::OpenOptions::_open(v23, &v17, v21, v22);
  if ( !v23[0] )
  {
    v8 = v23[1];
    v9 = (_DWORD *)_rust_alloc(4LL, 4LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v10 = v9;
    *v9 = v8;
    if ( a3 )
    {
      if ( a3 < 0 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = 1LL;
        v12 = _rust_alloc(a3, 1LL);
        if ( v12 )
        {
          v13 = (void *)v12;
LABEL_17:
          memcpy(v13, a2, a3);
          *a1 = a3;
          a1[1] = (signed __int64)v13;
          a1[2] = a3;
          a1[3] = (signed __int64)v10;
          a1[4] = (signed __int64)&off_E79E0;
          goto LABEL_18;
        }
      }
      alloc::raw_vec::handle_error(v11, a3);
    }
    v13 = &dword_0 + 1;
    goto LABEL_17;
  }
  v16 = v24;
  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v34 = xmmword_EC6B0;
  v30 = &v34;
  v31 = <&T as core::fmt::Display>::fmt;
  v25 = &anon_53ff2aae8c1b62ba59dc209553c8e3d7_39_llvm_2604383847107207927;
  v26 = 2LL;
  v29 = 0LL;
  v27 = &v30;
  v28 = 1LL;
  std::io::stdio::_eprint(&v25);
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v34 + 1) = a2;
  v35 = a3;
  v36 = 0;
  v30 = &v34;
  v31 = <os_display::Quoted as core::fmt::Display>::fmt;
  v32 = &v16;
  v33 = <std::io::error::Error as core::fmt::Display>::fmt;
  v25 = &unk_E7A50;
  v26 = 3LL;
  v29 = 0LL;
  v27 = &v30;
  v28 = 2LL;
  std::io::stdio::_eprint(&v25);
  if ( a5 && *a5 > 1u )
  {
    v14 = v16;
    *a1 = 0x8000000000000000LL;
    a1[1] = v14;
  }
  else
  {
    *a1 = 0x8000000000000001LL;
    core::ptr::drop_in_place<std::io::error::Error>(v16);
  }
LABEL_18:
  if ( v20 )
    _rust_dealloc(v21, v20, 1LL);
  return a1;
}
