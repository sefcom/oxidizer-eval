__int64 __fastcall uu_cp::copy_attributes(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 *a6)
{
  _QWORD *v8; // r13
  __int64 (__fastcall *v9)(); // rbp
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 *v16; // [rsp+8h] [rbp-220h] BYREF
  __int128 *v17; // [rsp+10h] [rbp-218h]
  __int128 v18; // [rsp+18h] [rbp-210h]
  __int128 v19; // [rsp+28h] [rbp-200h] BYREF
  __int128 **v20; // [rsp+38h] [rbp-1F0h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+40h] [rbp-1E8h]
  __int128 *v22; // [rsp+48h] [rbp-1E0h]
  __int64 (__fastcall *v23)(); // [rsp+50h] [rbp-1D8h]
  __int128 *v24; // [rsp+58h] [rbp-1D0h]
  __int128 *v25; // [rsp+60h] [rbp-1C8h]
  _BYTE v26[176]; // [rsp+68h] [rbp-1C0h] BYREF
  char v27[8]; // [rsp+118h] [rbp-110h] BYREF
  _QWORD *v28; // [rsp+120h] [rbp-108h]
  __int64 (__fastcall *v29)(); // [rsp+128h] [rbp-100h]
  __int128 v30; // [rsp+130h] [rbp-F8h]
  __int128 v31; // [rsp+148h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+158h] [rbp-D0h]
  _BYTE dest[144]; // [rsp+168h] [rbp-C0h] BYREF

  *(_QWORD *)&v19 = a4;
  *((_QWORD *)&v19 + 1) = a5;
  v16 = (_OWORD *)(&dword_0 + 1);
  v17 = a2;
  *(_QWORD *)&v18 = a3;
  BYTE8(v18) = 1;
  *(_QWORD *)&v31 = 1LL;
  *((_QWORD *)&v31 + 1) = a4;
  *(_QWORD *)&v32 = a5;
  BYTE8(v32) = 1;
  v20 = &v16;
  v21 = <os_display::Quoted as core::fmt::Display>::fmt;
  v22 = &v31;
  v23 = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)v26 = &unk_15EB98;
  *(_QWORD *)&v26[8] = 2LL;
  *(_QWORD *)&v26[32] = 0LL;
  *(_QWORD *)&v26[16] = &v20;
  *(_QWORD *)&v26[24] = 2LL;
  core::option::Option<T>::map_or_else(v27, v26);
  v8 = v28;
  v9 = v29;
  v20 = (__int128 **)v28;
  v21 = v29;
  v24 = a2;
  v25 = a3;
  std::fs::symlink_metadata(v26);
  if ( *(_QWORD *)v26 == 2LL )
  {
    *(_QWORD *)&v31 = v8;
    *((_QWORD *)&v31 + 1) = v9;
    *(_QWORD *)&v32 = *(_QWORD *)&v26[8];
    <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(v26, &v31);
LABEL_8:
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v26[48];
    v11 = *(_OWORD *)v26;
    v12 = *(_OWORD *)&v26[16];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v26[32];
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    return core::ptr::drop_in_place<alloc::string::String>(v27);
  }
  v30 = *(_OWORD *)&v26[16];
  memcpy(dest, &v26[32], sizeof(dest));
  v31 = *(_OWORD *)v26;
  v32 = *(_OWORD *)&v26[16];
  v16 = &v31;
  v17 = &v19;
  *(_QWORD *)&v18 = &v20;
  uu_cp::handle_preserve(v26, *a6, a6[1], &v16);
  if ( *(_QWORD *)v26 != 0x800000000000000CLL )
    goto LABEL_8;
  v16 = &v19;
  v17 = &v31;
  *(_QWORD *)&v18 = &v20;
  uu_cp::handle_preserve((__int64)v26, a6[2], a6[3], (__int64)&v16);
  if ( *(_QWORD *)v26 != 0x800000000000000CLL )
    goto LABEL_8;
  uu_cp::handle_preserve(v26, a6[4], a6[5], &v31, &v19);
  v10 = *(_QWORD *)v26;
  if ( *(_QWORD *)v26 == 0x800000000000000CLL
    && (v16 = v24,
        v17 = v25,
        v18 = v19,
        uu_cp::handle_preserve(v26, a6[10], a6[11], &v16),
        v10 = *(_QWORD *)v26,
        *(_QWORD *)v26 == 0x800000000000000CLL) )
  {
    *(_QWORD *)a1 = 0x800000000000000CLL;
  }
  else
  {
    v14 = *(_OWORD *)&v26[8];
    v15 = *(_OWORD *)&v26[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v26[40];
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v10;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v27);
}