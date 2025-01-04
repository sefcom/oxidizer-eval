__int64 __fastcall uu_shred::pass_name(__int64 a1, _BYTE *a2, __int64 a3, _QWORD **a4, __int64 a5, __int64 a6)
{
  _BYTE *v7; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-F0h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-E8h]
  void *v10; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+20h] [rbp-D8h]
  _QWORD *v12; // [rsp+28h] [rbp-D0h]
  __int64 v13; // [rsp+30h] [rbp-C8h]
  _QWORD *v14; // [rsp+38h] [rbp-C0h]
  __int64 v15; // [rsp+40h] [rbp-B8h]
  _BYTE *v16; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-98h]
  __int64 (__fastcall *v19)(); // [rsp+68h] [rbp-90h]
  _QWORD *v20; // [rsp+70h] [rbp-88h]
  __int64 (__fastcall *v21)(); // [rsp+78h] [rbp-80h]
  char v22; // [rsp+80h] [rbp-78h]
  __int64 v23; // [rsp+88h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-50h]
  __int64 v26; // [rsp+B0h] [rbp-48h]
  char v27; // [rsp+B8h] [rbp-40h]
  __int64 v28; // [rsp+C0h] [rbp-38h]
  __int64 v29; // [rsp+D0h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-18h]
  __int64 v31; // [rsp+E8h] [rbp-10h]
  char v32; // [rsp+F0h] [rbp-8h]

  if ( *a2 )
  {
    if ( *a2 == 2 )
      return <T as alloc::slice::hack::ConvertVec>::to_vec();
    v16 = a2 + 1;
    v7 = a2 + 2;
    v8 = a2 + 3;
    v17[0] = &v16;
    v17[1] = <&T as core::fmt::LowerHex>::fmt;
    v18 = &v7;
    v19 = <&T as core::fmt::LowerHex>::fmt;
    a4 = &v8;
    v20 = &v8;
    v21 = <&T as core::fmt::LowerHex>::fmt;
    v10 = &unk_1F050;
    v11 = 3LL;
    v14 = 0LL;
    v12 = v17;
    v13 = 3LL;
  }
  else
  {
    v7 = a2 + 1;
    v8 = &v7;
    v9 = <&T as core::fmt::LowerHex>::fmt;
    v17[0] = 2LL;
    v18 = (_QWORD *)(&dword_0 + 2);
    v20 = 0LL;
    v21 = (__int64 (__fastcall *)())&qword_20;
    v22 = 3;
    v23 = 2LL;
    v24 = 2LL;
    v25 = 0LL;
    v26 = 32LL;
    v27 = 3;
    v28 = 2LL;
    v29 = 2LL;
    v30 = 0LL;
    v31 = 32LL;
    v32 = 3;
    v10 = &unk_1F050;
    v11 = 3LL;
    v14 = v17;
    v15 = 3LL;
    v12 = &v8;
    v13 = 1LL;
  }
  return ((__int64 (__fastcall *)(__int64, void **, __int64, _QWORD **, __int64, __int64, _BYTE *, _QWORD *, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
           a1,
           &v10,
           a3,
           a4,
           a5,
           a6,
           v7,
           v8,
           v9);
}
