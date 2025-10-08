__int64 __fastcall uu_tee::open(_QWORD *a1, __int64 a2, __int64 a3, int a4, _BYTE *a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-D0h] BYREF
  int v14; // [rsp+10h] [rbp-C8h]
  __int16 v15; // [rsp+14h] [rbp-C4h]
  __int128 v16; // [rsp+18h] [rbp-C0h] BYREF
  __int64 **v17; // [rsp+28h] [rbp-B0h]
  __int64 v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+38h] [rbp-A0h]
  __int64 v20; // [rsp+48h] [rbp-90h]
  _BYTE *v21; // [rsp+50h] [rbp-88h]
  _DWORD v22[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int64 *v24; // [rsp+68h] [rbp-70h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-68h]
  __int64 *v26; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall *v27)(); // [rsp+80h] [rbp-58h]
  __int64 v28; // [rsp+88h] [rbp-50h] BYREF
  __int64 v29; // [rsp+90h] [rbp-48h]
  __int64 v30; // [rsp+98h] [rbp-40h]
  char v31; // [rsp+A0h] [rbp-38h]

  v21 = a5;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, a2, a3);
  v7 = *((_QWORD *)&v16 + 1);
  v20 = v16;
  v13 = 0x1B600000000LL;
  v14 = 0;
  v15 = 0;
  if ( a4 )
    BYTE2(v14) = 1;
  else
    HIBYTE(v14) = 1;
  BYTE1(v14) = 1;
  LOBYTE(v15) = 1;
  std::fs::OpenOptions::open(v22, &v13, *((_QWORD *)&v16 + 1), v17);
  if ( v22[0] == 1 )
  {
    v12 = v23;
    v28 = uucore::util_name();
    v29 = v8;
    v24 = &v28;
    v25 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = &unk_EA4F0;
    *((_QWORD *)&v16 + 1) = 2LL;
    v19 = 0LL;
    v17 = &v24;
    v18 = 1LL;
    std::io::stdio::_eprint(&v16);
    v28 = 0LL;
    v29 = a2;
    v30 = a3;
    v31 = 0;
    v24 = &v28;
    v25 = <os_display::Quoted as core::fmt::Display>::fmt;
    v26 = &v12;
    v27 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = &unk_EA510;
    *((_QWORD *)&v16 + 1) = 3LL;
    v19 = 0LL;
    v17 = &v24;
    v18 = 2LL;
    std::io::stdio::_eprint(&v16);
    if ( v21 && *v21 > 1u )
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
    v9 = alloc::boxed::Box<T>::new(v22[1]);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, a2, a3);
    a1[2] = v17;
    *(_OWORD *)a1 = v16;
    a1[3] = v9;
    a1[4] = &off_EA540;
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(v20, v7);
}