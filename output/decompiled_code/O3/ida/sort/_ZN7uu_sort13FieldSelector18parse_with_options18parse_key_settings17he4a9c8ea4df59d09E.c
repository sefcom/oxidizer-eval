        __int64 a6)
{
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  unsigned __int8 v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int128 v19; // xmm0
  char v21; // [rsp+14h] [rbp-A4h]
  _BYTE v22[24]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  int v25; // [rsp+4Ch] [rbp-6Ch] BYREF
  char *v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+58h] [rbp-60h]
  int *v28; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v29)(); // [rsp+68h] [rbp-50h]
  __int64 v30; // [rsp+70h] [rbp-48h] BYREF
  __int128 v31; // [rsp+78h] [rbp-40h]

  if ( !a3 )
  {
    LOBYTE(v17) = 0;
    goto LABEL_30;
  }
  v7 = a2;
  v8 = &a2[a3];
  v21 = 0;
  while ( 2 )
  {
    v11 = *v7;
    if ( (v11 & 0x80u) != 0 )
    {
      v12 = v11 & 0x1F;
      v13 = v7[1] & 0x3F;
      if ( (unsigned __int8)v11 <= 0xDFu )
      {
        v7 += 2;
        v11 = v13 | (v12 << 6);
      }
      else
      {
        v14 = (v13 << 6) | v7[2] & 0x3F;
        if ( (unsigned __int8)v11 < 0xF0u )
        {
          v7 += 3;
          a3 = (v12 << 12) | (unsigned int)v14;
          v11 = a3;
        }
        else
        {
          v15 = v7[3];
          v7 += 4;
          a3 = (unsigned int)(v14 << 6);
          v11 = ((v12 & 7) << 18) | a3 | v15 & 0x3F;
        }
      }
    }
    else
    {
      ++v7;
    }
    v16 = (unsigned int)(v11 - 77);
    switch ( v11 )
    {
      case 'M':
        v9 = (__int64)a4;
        v10 = 3LL;
        goto LABEL_4;
      case 'R':
        v9 = (__int64)a4;
        v10 = 5LL;
        goto LABEL_4;
      case 'V':
        uu_sort::KeySettings::set_sort_mode(v22, (__int64)a4, 4LL, v16, a5, a6);
        v17 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 != 0x8000000000000000LL )
          goto LABEL_32;
        goto LABEL_5;
      case 'b':
        v21 = 1;
        goto LABEL_5;
      case 'd':
        v18 = (unsigned __int8)a4[5];
        if ( v18 <= 3 )
        {
          v25 = *((_DWORD *)&unk_1EFD0 + v18);
          v26 = "d";
          v27 = <char as core::fmt::Display>::fmt;
          v28 = &v25;
          v29 = <char as core::fmt::Display>::fmt;
          *(_QWORD *)v22 = &off_1928C0;
          *(_QWORD *)&v22[8] = 3LL;
          v24 = 0LL;
          *(_QWORD *)&v22[16] = &v26;
          v23 = 2LL;
          alloc::fmt::format::format_inner(&v30, v22, a3, &v25, a5, a6);
          v17 = v30;
          if ( v30 != 0x8000000000000000LL )
          {
            v19 = v31;
LABEL_35:
            *(_OWORD *)(a1 + 8) = v19;
            *(_QWORD *)a1 = v17;
            return v17;
          }
        }
        a4[2] = 1;
LABEL_5:
        if ( v7 != v8 )
          continue;
        LOBYTE(v17) = v21 & 1;
LABEL_30:
        *(_BYTE *)(a1 + 8) = v17;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return v17;
      case 'f':
        a4[1] = 1;
        goto LABEL_5;
      case 'g':
        v9 = (__int64)a4;
        v10 = 2LL;
        goto LABEL_4;
      case 'h':
        v9 = (__int64)a4;
        v10 = 1LL;
        goto LABEL_4;
      case 'i':
        uu_sort::KeySettings::check_compatibility(v22, a4[5], 1LL, a4[2], a5, a6);
        v17 = *(_QWORD *)v22;
        if ( *(_QWORD *)v22 != 0x8000000000000000LL )
        {
LABEL_32:
          v19 = *(_OWORD *)&v22[8];
          goto LABEL_35;
        }
        a4[3] = 1;
        goto LABEL_5;
      case 'n':
        v9 = (__int64)a4;
        v10 = 0LL;
LABEL_4:
        uu_sort::KeySettings::set_sort_mode(v22, v9, v10, v16, a5, a6);
        if ( *(_QWORD *)v22 == 0x8000000000000000LL )
          goto LABEL_5;
        LOBYTE(v17) = v22[16];
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v22[16];
        *(_OWORD *)a1 = *(_OWORD *)v22;
        return v17;
      case 'r':
        a4[4] = 1;
        goto LABEL_5;
      default:
        LODWORD(v30) = v11;
        v26 = (char *)&v30;
        v27 = <char as core::fmt::Display>::fmt;
        *(_QWORD *)v22 = &off_192AE0;
        *(_QWORD *)&v22[8] = 2LL;
        v24 = 0LL;
        *(_QWORD *)&v22[16] = &v26;
        v23 = 1LL;
        LOBYTE(v17) = alloc::fmt::format::format_inner(a1, v22, a3, v16, a5, a6);
        return v17;
    }
  }
}
