bool __fastcall uu_test::path(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v4; // ebp
  int v5; // r15d
  int v6; // r14d
  __uid_t v9; // eax
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // r14
  char v16; // cl
  __uid_t v17; // eax
  __uid_t v18; // eax
  __int64 v19; // [rsp+0h] [rbp-268h] BYREF
  __int64 v20; // [rsp+8h] [rbp-260h] BYREF
  __int64 v21; // [rsp+10h] [rbp-258h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-250h]
  __int64 v23; // [rsp+20h] [rbp-248h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-240h]
  _OWORD dest[11]; // [rsp+30h] [rbp-238h] BYREF
  _OWORD v26[4]; // [rsp+E0h] [rbp-188h] BYREF
  int v27; // [rsp+120h] [rbp-148h]
  __m256i v28; // [rsp+124h] [rbp-144h]
  __int128 v29; // [rsp+144h] [rbp-124h]
  __int128 v30; // [rsp+154h] [rbp-114h]
  __int128 v31; // [rsp+164h] [rbp-104h]
  _BYTE v32[28]; // [rsp+174h] [rbp-F4h]
  _QWORD src[26]; // [rsp+198h] [rbp-D0h] BYREF

  if ( *a3 == 8 )
  {
    std::sys::pal::unix::fs::lstat(src);
    if ( src[0] != 2LL )
      goto LABEL_3;
LABEL_7:
    *((_QWORD *)&dest[0] + 1) = src[1];
    *(_QWORD *)&dest[0] = 2LL;
    goto LABEL_8;
  }
  std::sys::pal::unix::fs::stat(src);
  if ( src[0] == 2LL )
    goto LABEL_7;
LABEL_3:
  memcpy(dest, src, sizeof(dest));
  if ( *(_QWORD *)&dest[0] != 2LL )
  {
    v4 = DWORD2(dest[3]);
    v5 = HIDWORD(dest[3]);
    v6 = dest[4];
    v26[0] = dest[0];
    v26[1] = dest[1];
    v26[2] = dest[2];
    v26[3] = dest[3];
    v27 = dest[4];
    *(_OWORD *)&v32[12] = dest[10];
    *(_OWORD *)v32 = *(_OWORD *)((char *)&dest[9] + 4);
    v31 = *(_OWORD *)((char *)&dest[8] + 4);
    v30 = *(_OWORD *)((char *)&dest[7] + 4);
    v29 = *(_OWORD *)((char *)&dest[6] + 4);
    v28 = *(__m256i *)((char *)&dest[4] + 4);
    switch ( *a3 )
    {
      case 0:
        return (WORD4(dest[3]) & 0xF000) == 24576;
      case 1:
        return (WORD4(dest[3]) & 0xF000) == 0x2000;
      case 2:
        return (WORD4(dest[3]) & 0xF000) == 0x4000;
      case 3:
        return 1;
      case 4:
        std::fs::Metadata::accessed(&v21, v26);
        v14 = v22;
        if ( v22 == 1000000000 )
        {
          v20 = v21;
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v20, &off_1066A8, &off_1067F0);
        }
        v15 = v21;
        std::fs::Metadata::modified(&v23, v26);
        if ( v24 == 1000000000 )
        {
          v19 = v23;
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v19, &off_1066A8, &off_106808);
        }
        v16 = (v15 > v23) - (v15 < v23);
        if ( v15 > v23 == v15 < v23 )
          v16 = (v14 > v24) - (v14 < v24);
        return v16 == -1;
      case 5:
        return (WORD4(dest[3]) & 0xF000) == 0x8000;
      case 6:
        return (WORD4(dest[3]) & 0x400) != 0;
      case 7:
        return v6 == getegid();
      case 8:
        return (WORD4(dest[3]) & 0xF000) == 40960;
      case 9:
        return (WORD4(dest[3]) & 0x200) != 0;
      case 0xA:
        return v5 == geteuid();
      case 0xB:
        return (WORD4(dest[3]) & 0xF000) == 4096;
      case 0xC:
        v17 = geteuid();
        v10 = 256;
        if ( v17 == v5 )
          return (v10 & v4) != 0;
        v11 = getegid() == v6;
        v12 = 32;
        v10 = 4;
        break;
      case 0xD:
        return (WORD4(dest[3]) & 0xF000) == 49152;
      case 0xE:
        return *(__int64 *)((char *)&v28.m256i_i64[1] + 4) != 0;
      case 0xF:
        return (WORD4(dest[3]) & 0x800) != 0;
      case 0x10:
        v9 = geteuid();
        v10 = 128;
        if ( v9 == v5 )
          return (v10 & v4) != 0;
        v11 = getegid() == v6;
        v12 = 16;
        v10 = 2;
        break;
      case 0x11:
        v18 = geteuid();
        v10 = 64;
        if ( v18 == v5 )
          return (v10 & v4) != 0;
        v11 = getegid() == v6;
        v12 = 8;
        v10 = 1;
        break;
    }
    if ( v11 )
      v10 = v12;
    return (v10 & v4) != 0;
  }
LABEL_8:
  std::io::error::repr_bitpacked::decode_repr(src, *((_QWORD *)&dest[0] + 1));
  if ( LOBYTE(src[0]) >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src[1]);
  return 0;
}
