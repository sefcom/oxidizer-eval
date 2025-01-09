__int64 __fastcall uu_cp::copy_attributes(__int64 a1, __int128 *a2, _QWORD *a3, __int64 a4, __int64 a5, char *a6)
{
  __int128 *v8; // rbp
  __int128 *v9; // r13
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 *v17; // [rsp+8h] [rbp-230h] BYREF
  __int128 *v18; // [rsp+10h] [rbp-228h]
  _QWORD *v19; // [rsp+18h] [rbp-220h]
  char v20; // [rsp+20h] [rbp-218h]
  _QWORD v21[2]; // [rsp+28h] [rbp-210h] BYREF
  char v22[8]; // [rsp+38h] [rbp-200h] BYREF
  __int128 *v23; // [rsp+40h] [rbp-1F8h]
  __int128 *v24; // [rsp+48h] [rbp-1F0h]
  _BYTE v25[176]; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v26[2]; // [rsp+100h] [rbp-138h] BYREF
  _QWORD v27[2]; // [rsp+110h] [rbp-128h] BYREF
  _QWORD v28[4]; // [rsp+120h] [rbp-118h] BYREF
  __int128 v29; // [rsp+140h] [rbp-F8h]
  __int128 v30; // [rsp+158h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+168h] [rbp-D0h]
  _BYTE dest[144]; // [rsp+178h] [rbp-C0h] BYREF

  v26[0] = a2;
  v26[1] = a3;
  v21[0] = a4;
  v21[1] = a5;
  v17 = (_OWORD *)(&dword_0 + 1);
  v18 = a2;
  v19 = a3;
  v20 = 1;
  *(_QWORD *)&v30 = 1LL;
  *((_QWORD *)&v30 + 1) = a4;
  *(_QWORD *)&v31 = a5;
  BYTE8(v31) = 1;
  v28[0] = &v17;
  v28[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v28[2] = &v30;
  v28[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)v25 = &unk_1B5E68;
  *(_QWORD *)&v25[8] = 2LL;
  *(_QWORD *)&v25[32] = 0LL;
  *(_QWORD *)&v25[16] = v28;
  *(_QWORD *)&v25[24] = 2LL;
  core::option::Option<T>::map_or_else(v22, v25);
  v8 = v23;
  v9 = v24;
  v27[0] = v23;
  v27[1] = v24;
  std::fs::symlink_metadata(v25, a2, a3);
  if ( *(_QWORD *)v25 == 2LL )
  {
    v17 = v8;
    v18 = v9;
    v19 = *(_QWORD **)&v25[8];
    <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(v25, &v17);
LABEL_8:
    v11 = *(_OWORD *)v25;
    v12 = *(_OWORD *)&v25[16];
    v13 = *(_OWORD *)&v25[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v25[48];
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    goto LABEL_10;
  }
  v29 = *(_OWORD *)&v25[16];
  memcpy(dest, &v25[32], sizeof(dest));
  v30 = *(_OWORD *)v25;
  v31 = *(_OWORD *)&v25[16];
  v17 = &v30;
  v18 = (__int128 *)v21;
  v19 = v27;
  uu_cp::handle_preserve((__int64)v25, *a6, a6[1], (__int64)&v17);
  if ( *(_DWORD *)v25 != 13 )
    goto LABEL_8;
  v17 = (__int128 *)v21;
  v18 = &v30;
  v19 = v27;
  uu_cp::handle_preserve((__int64)v25, a6[2], a6[3], (__int64)&v17);
  v10 = *(_QWORD *)v25;
  if ( *(_QWORD *)v25 == 13LL
    && (uu_cp::handle_preserve((__int64)v25, a6[4], a6[5], (__int64)&v30, (__int64)v21),
        v10 = *(_QWORD *)v25,
        *(_QWORD *)v25 == 13LL)
    && (uu_cp::handle_preserve((__int64)v25, a6[10], a6[11], (__int64)v26, (__int64)v21),
        v10 = *(_QWORD *)v25,
        *(_QWORD *)v25 == 13LL) )
  {
    *(_QWORD *)a1 = 13LL;
  }
  else
  {
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v25[56];
    v14 = *(_OWORD *)&v25[8];
    v15 = *(_OWORD *)&v25[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v25[40];
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v10;
  }
LABEL_10:
  core::ptr::drop_in_place<alloc::string::String>(v22);
  return a1;
}
