__int64 __fastcall uu_pr::get_line_for_printing(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  _BOOL8 v11; // rdi
  _QWORD *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  _BYTE v21[24]; // [rsp+0h] [rbp-138h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+18h] [rbp-120h]
  _QWORD *v23; // [rsp+20h] [rbp-118h]
  __int64 (__fastcall *v24)(); // [rsp+28h] [rbp-110h]
  _BYTE v25[24]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v26; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-D8h]
  __int64 v28; // [rsp+68h] [rbp-D0h]
  __int128 v29; // [rsp+70h] [rbp-C8h] BYREF
  __int128 *v30; // [rsp+80h] [rbp-B8h]
  __int64 (__fastcall *v31)(); // [rsp+88h] [rbp-B0h]
  __int64 v32; // [rsp+90h] [rbp-A8h]
  __int64 v33; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v34[3]; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD *v37; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v38[3]; // [rsp+D8h] [rbp-60h] BYREF
  _BYTE v39[72]; // [rsp+F0h] [rbp-48h] BYREF

  v33 = a4;
  v34[0] = 0LL;
  v34[1] = 1LL;
  v34[2] = 0LL;
  uu_pr::get_formatted_line_number(v39, a2, a3[4], a5);
  v28 = a1;
  v11 = __OFSUB__(0LL, *a3);
  v12 = &a3[v11];
  core::result::Result<T,E>::unwrap(v11, v12);
  *(_QWORD *)&v26 = v12;
  *(_QWORD *)&v29 = v39;
  *((_QWORD *)&v29 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v30 = &v26;
  v31 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v21 = "\x01";
  *(_QWORD *)&v21[8] = 2LL;
  v23 = 0LL;
  *(_QWORD *)&v21[16] = &v29;
  v22 = (__int64 (__fastcall *)())(&dword_0 + 2);
  core::option::Option<T>::map_or_else(v25, v21);
  v26 = *(_OWORD *)v25;
  v13 = *(_QWORD *)&v25[16];
  v27 = *(_QWORD *)&v25[16];
  v35 = a2 + 168;
  v14 = v13
      + 7 * core::iter::traits::iterator::Iterator::fold(*(_QWORD *)&v25[8], *(_QWORD *)&v25[8] + *(_QWORD *)&v25[16]);
  v15 = a5 + 1;
  v16 = (_QWORD *)(a2 + 192);
  if ( (*(_BYTE *)(a2 + 323) & 1) != 0 )
    v16 = v34;
  if ( v15 == a8 )
    v16 = v34;
  v36 = v14;
  v37 = v16;
  v38[0] = &v33;
  v38[1] = &v36;
  v38[2] = &v26;
  if ( (a6 & 1) == 0 )
  {
    *(_QWORD *)&v21[16] = v27;
    *(_OWORD *)v21 = v26;
    v18 = v28;
    goto LABEL_9;
  }
  uu_pr::get_line_for_printing::{{closure}}(v21, v38, a7);
  v17 = *(_QWORD *)v21;
  v29 = *(_OWORD *)&v21[8];
  *(_QWORD *)&v21[16] = v27;
  *(_OWORD *)v21 = v26;
  v18 = v28;
  if ( v17 == 0x8000000000000000LL )
  {
LABEL_9:
    *(_QWORD *)&v25[16] = *(_QWORD *)&v21[16];
    *(_OWORD *)v25 = *(_OWORD *)v21;
    goto LABEL_10;
  }
  *(_OWORD *)&v25[8] = v29;
  *(_QWORD *)v25 = v17;
  v19 = v28;
  core::ptr::drop_in_place<alloc::string::String>(v21);
  v18 = v19;
LABEL_10:
  *(_QWORD *)v21 = &v35;
  *(_QWORD *)&v21[8] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v21[16] = v25;
  v22 = <alloc::string::String as core::fmt::Display>::fmt;
  v23 = &v37;
  v24 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v29 = &unk_58358;
  *((_QWORD *)&v29 + 1) = 3LL;
  v32 = 0LL;
  v30 = (__int128 *)v21;
  v31 = (__int64 (__fastcall *)())(&dword_0 + 3);
  core::option::Option<T>::map_or_else(v18, &v29);
  core::ptr::drop_in_place<alloc::string::String>(v25);
  core::ptr::drop_in_place<alloc::string::String>(v39);
  return core::ptr::drop_in_place<alloc::string::String>(v34);
}