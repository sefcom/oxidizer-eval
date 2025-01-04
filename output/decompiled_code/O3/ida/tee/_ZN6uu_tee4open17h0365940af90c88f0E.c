_QWORD *__fastcall uu_tee::open(_QWORD *a1, __int64 a2, __int64 a3, int a4, _BYTE *a5)
{
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-D8h] BYREF
  int v14; // [rsp+18h] [rbp-D0h]
  __int16 v15; // [rsp+1Ch] [rbp-CCh]
  __int128 v16; // [rsp+20h] [rbp-C8h] BYREF
  __int64 **v17; // [rsp+30h] [rbp-B8h]
  __int64 v18; // [rsp+38h] [rbp-B0h]
  __int64 v19; // [rsp+40h] [rbp-A8h]
  _BYTE v20[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+60h] [rbp-88h]
  _DWORD v23[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v24; // [rsp+70h] [rbp-78h]
  __int64 *v25; // [rsp+78h] [rbp-70h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+80h] [rbp-68h]
  __int64 *v27; // [rsp+88h] [rbp-60h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-58h]
  __int64 v29; // [rsp+98h] [rbp-50h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-48h]
  __int64 v31; // [rsp+A8h] [rbp-40h]
  char v32; // [rsp+B0h] [rbp-38h]

  std::sys::os_str::bytes::Slice::to_owned(v20);
  v13 = 0x1B600000000LL;
  v14 = 0;
  v15 = 0;
  if ( a4 )
    BYTE2(v14) = 1;
  else
    HIBYTE(v14) = 1;
  BYTE1(v14) = 1;
  LOBYTE(v15) = 1;
  std::fs::OpenOptions::open(v23, &v13, v21, v22);
  if ( v23[0] )
  {
    v12 = v24;
    v29 = uucore::util_name();
    v30 = v8;
    v25 = &v29;
    v26 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = &unk_11F9A8;
    *((_QWORD *)&v16 + 1) = 2LL;
    v19 = 0LL;
    v17 = &v25;
    v18 = 1LL;
    std::io::stdio::_eprint(&v16);
    v29 = 0LL;
    v30 = a2;
    v31 = a3;
    v32 = 0;
    v25 = &v29;
    v26 = <os_display::Quoted as core::fmt::Display>::fmt;
    v27 = &v12;
    v28 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = &unk_11F9C8;
    *((_QWORD *)&v16 + 1) = 3LL;
    v19 = 0LL;
    v17 = &v25;
    v18 = 2LL;
    std::io::stdio::_eprint(&v16);
    if ( a5 && *a5 > 1u )
    {
      v10 = v12;
      *a1 = 0x8000000000000000LL;
      a1[1] = v10;
    }
    else
    {
      *a1 = 0x8000000000000001LL;
      core::ptr::drop_in_place<std::io::error::Error>(v12);
    }
  }
  else
  {
    v9 = alloc::boxed::Box<T>::new(v23[1]);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v16, a2, a3);
    a1[2] = v17;
    *(_OWORD *)a1 = v16;
    a1[3] = v9;
    a1[4] = &off_11F9F8;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v20);
  return a1;
}
