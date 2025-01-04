        __int64 a8)
{
  _BOOL8 v12; // rdi
  _QWORD *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  _BYTE v27[24]; // [rsp+0h] [rbp-168h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+18h] [rbp-150h]
  _QWORD *v29; // [rsp+20h] [rbp-148h]
  __int64 (__fastcall *v30)(); // [rsp+28h] [rbp-140h]
  _BYTE v31[24]; // [rsp+30h] [rbp-138h] BYREF
  __int128 v32; // [rsp+50h] [rbp-118h] BYREF
  __int64 v33; // [rsp+60h] [rbp-108h]
  __int128 v34; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE *v35; // [rsp+80h] [rbp-E8h]
  __int64 (__fastcall *v36)(); // [rsp+88h] [rbp-E0h]
  __int64 v37; // [rsp+90h] [rbp-D8h]
  __int64 v38; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v39[3]; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-A0h] BYREF
  _QWORD *v42; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-80h]
  __int128 v45; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+100h] [rbp-68h]
  _QWORD v47[3]; // [rsp+108h] [rbp-60h] BYREF
  _BYTE v48[72]; // [rsp+120h] [rbp-48h] BYREF

  v38 = a4;
  v39[0] = 0LL;
  v39[1] = 1LL;
  v39[2] = 0LL;
  uu_pr::get_formatted_line_number(v48, a2, a3[4], a5);
  v12 = *a3 == 0x8000000000000000LL;
  v13 = &a3[v12];
  core::result::Result<T,E>::unwrap(v12, v13);
  *(_QWORD *)v31 = v13;
  *(_QWORD *)&v34 = v48;
  *((_QWORD *)&v34 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v35 = v31;
  v36 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v27 = "\x01";
  *(_QWORD *)&v27[8] = 2LL;
  v29 = 0LL;
  *(_QWORD *)&v27[16] = &v34;
  v28 = (__int64 (__fastcall *)())(&dword_0 + 2);
  core::option::Option<T>::map_or_else(&v43, v27, v14, v15, v16, v17);
  v32 = v43;
  v18 = v44;
  v33 = v44;
  v40 = a2 + 168;
  v19 = v18 + 7 * core::iter::traits::iterator::Iterator::fold(*((_QWORD *)&v43 + 1), *((_QWORD *)&v43 + 1) + v44);
  v22 = a5 + 1;
  v23 = (_QWORD *)(a2 + 192);
  v24 = v39;
  if ( *(_BYTE *)(a2 + 323) )
    v23 = v39;
  v41 = v19;
  if ( v22 == a8 )
    v23 = v39;
  v42 = v23;
  v47[0] = &v38;
  v47[1] = &v41;
  v47[2] = &v32;
  if ( !a6 )
  {
    *(_QWORD *)&v27[16] = v44;
    *(_OWORD *)v27 = v43;
    goto LABEL_9;
  }
  uu_pr::get_line_for_printing::{{closure}}(v27, v47, a7);
  v25 = *(_QWORD *)v27;
  v34 = *(_OWORD *)&v27[8];
  *(_QWORD *)&v27[16] = v33;
  *(_OWORD *)v27 = v32;
  if ( v25 == 0x8000000000000000LL )
  {
LABEL_9:
    *(_QWORD *)&v31[16] = *(_QWORD *)&v27[16];
    *(_OWORD *)v31 = *(_OWORD *)v27;
    goto LABEL_10;
  }
  *(_OWORD *)&v31[8] = v34;
  *(_QWORD *)v31 = v25;
  core::ptr::drop_in_place<alloc::string::String>(v27);
LABEL_10:
  *(_QWORD *)v27 = &v40;
  *(_QWORD *)&v27[8] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v27[16] = v31;
  v28 = <alloc::string::String as core::fmt::Display>::fmt;
  v29 = &v42;
  v30 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v34 = &unk_75660;
  *((_QWORD *)&v34 + 1) = 3LL;
  v37 = 0LL;
  v35 = v27;
  v36 = (__int64 (__fastcall *)())(&dword_0 + 3);
  core::option::Option<T>::map_or_else(&v45, &v34, v24, <&T as core::fmt::Display>::fmt, v20, v21);
  core::ptr::drop_in_place<alloc::string::String>(v31);
  *(_QWORD *)(a1 + 16) = v46;
  *(_OWORD *)a1 = v45;
  core::ptr::drop_in_place<alloc::string::String>(v48);
  return core::ptr::drop_in_place<alloc::string::String>(v39);
}
