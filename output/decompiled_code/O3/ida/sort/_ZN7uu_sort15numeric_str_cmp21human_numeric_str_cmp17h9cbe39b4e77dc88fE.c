char __fastcall uu_sort::numeric_str_cmp::human_numeric_str_cmp(unsigned __int8 **a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r8
  unsigned __int8 *v3; // r9
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // cl
  unsigned __int8 *v6; // rdx
  unsigned __int8 *v7; // rcx
  unsigned __int8 *v8; // r10
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rax
  int v11; // esi
  char v12; // r11
  char v13; // bp
  int v14; // ebp
  char result; // al
  unsigned __int8 v16; // r11
  int v17; // r11d
  unsigned __int8 *v18; // rsi
  int v19; // r14d
  char v20; // bp
  char v21; // r15
  int v22; // r15d
  unsigned __int8 v23; // bp
  int v24; // ebp
  bool v25; // cf
  bool v26; // r14
  char v27; // r11
  int v28; // eax
  unsigned __int8 *v29; // r8
  unsigned int v30; // edi
  bool v31; // zf
  int v32; // edx
  int v33; // r10d
  int v34; // r9d
  unsigned __int8 v35; // di
  __int64 v36; // r8
  int v37; // r9d
  int v38; // r11d
  int v39; // r10d
  unsigned __int8 v40; // r8
  unsigned __int8 *v41; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 *v42; // [rsp+8h] [rbp-40h]
  _QWORD v43[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1[2];
  v3 = a2[2];
  v4 = v2[8];
  v5 = v3[8];
  if ( v4 != v5 )
    return v4 < v5 ? -1 : 1;
  v6 = *a1;
  v7 = *a2;
  v8 = a2[1];
  v9 = a1[1];
  v10 = &v9[(_QWORD)v6];
  if ( v9 )
  {
    v11 = *(v10 - 1);
    if ( (v11 & 0x80u) != 0 )
    {
      v12 = *(v10 - 2);
      if ( v12 >= -64 )
      {
        v17 = v12 & 0x1F;
      }
      else
      {
        v13 = *(v10 - 3);
        if ( v13 >= -64 )
          v14 = v13 & 0xF;
        else
          v14 = ((*(v10 - 4) & 7) << 6) | v13 & 0x3F;
        v17 = (v14 << 6) | v12 & 0x3F;
      }
      v11 = (v17 << 6) | v11 & 0x3F;
    }
    v16 = 0;
    switch ( v11 )
    {
      case 'E':
        v16 = 6;
        break;
      case 'G':
        v16 = 3;
        break;
      case 'K':
      case 'k':
        v16 = 1;
        break;
      case 'M':
        v16 = 2;
        break;
      case 'P':
        v16 = 5;
        break;
      case 'T':
        v16 = 4;
        break;
      case 'Y':
        v16 = 8;
        break;
      case 'Z':
        v16 = 7;
        break;
      default:
        break;
    }
  }
  else
  {
    v16 = 0;
  }
  v18 = &v8[(_QWORD)v7];
  if ( v8 )
  {
    v19 = *(v18 - 1);
    if ( (v19 & 0x80u) != 0 )
    {
      v20 = *(v18 - 2);
      if ( v20 >= -64 )
      {
        v24 = v20 & 0x1F;
      }
      else
      {
        v21 = *(v18 - 3);
        if ( v21 >= -64 )
          v22 = v21 & 0xF;
        else
          v22 = ((*(v18 - 4) & 7) << 6) | v21 & 0x3F;
        v24 = (v22 << 6) | v20 & 0x3F;
      }
      v19 = (v24 << 6) | v19 & 0x3F;
    }
    v23 = 0;
    switch ( v19 )
    {
      case 'E':
        v23 = 6;
        break;
      case 'G':
        v23 = 3;
        break;
      case 'K':
      case 'k':
        v23 = 1;
        break;
      case 'M':
        v23 = 2;
        break;
      case 'P':
        v23 = 5;
        break;
      case 'T':
        v23 = 4;
        break;
      case 'Y':
        v23 = 8;
        break;
      case 'Z':
        v23 = 7;
        break;
      default:
        break;
    }
  }
  else
  {
    v23 = 0;
  }
  v25 = v16 < v23;
  v26 = v16 != v23;
  v27 = -1;
  if ( !v25 )
    v27 = v26;
  if ( v27 )
  {
    result = -v27;
    if ( v4 )
      return v27;
    return result;
  }
  if ( v8 && v9 && *(_QWORD *)v2 != *(_QWORD *)v3 )
  {
    LOBYTE(v28) = -(*(_QWORD *)v2 < *(_QWORD *)v3);
LABEL_94:
    result = v28 | 1;
    if ( v4 )
      return result;
    if ( result != -1 )
      return -1;
    return 1;
  }
  v41 = v6;
  v42 = &v9[(_QWORD)v6];
  v43[0] = v7;
  v43[1] = &v8[(_QWORD)v7];
  while ( 1 )
  {
    v29 = v6;
    v30 = 1114112;
    v31 = v6 == v10;
    v6 = v10;
    if ( !v31 )
    {
      while ( 1 )
      {
        v30 = *v29;
        if ( (v30 & 0x80u) != 0 )
        {
          v32 = v30 & 0x1F;
          v33 = v29[1] & 0x3F;
          if ( (unsigned __int8)v30 <= 0xDFu )
          {
            v29 += 2;
            v30 = v33 | (v32 << 6);
          }
          else
          {
            v34 = (v33 << 6) | v29[2] & 0x3F;
            if ( (unsigned __int8)v30 < 0xF0u )
            {
              v29 += 3;
              v3 = (unsigned __int8 *)((v32 << 12) | (unsigned int)v34);
              v30 = (unsigned int)v3;
            }
            else
            {
              v35 = v29[3];
              v29 += 4;
              v3 = (unsigned __int8 *)(unsigned int)(v34 << 6);
              v30 = ((v32 & 7) << 18) | (unsigned int)v3 | v35 & 0x3F;
              if ( v30 == 1114112 )
              {
                v6 = v29;
                v30 = 1114112;
                goto LABEL_67;
              }
            }
          }
        }
        else
        {
          ++v29;
        }
        if ( v30 - 48 >= 0xA )
          v30 = 1114112;
        if ( v30 != 1114112 )
          break;
        if ( v29 == v10 )
        {
          v30 = 1114112;
          v6 = v10;
          goto LABEL_67;
        }
      }
      v6 = v29;
    }
LABEL_67:
    v41 = v6;
    if ( v7 == v18 )
    {
      v7 = v18;
LABEL_82:
      v36 = 1114112LL;
    }
    else
    {
      while ( 1 )
      {
        v36 = *v7;
        if ( (v36 & 0x80u) != 0LL )
        {
          v37 = v36 & 0x1F;
          v38 = v7[1] & 0x3F;
          if ( (unsigned __int8)v36 <= 0xDFu )
          {
            v7 += 2;
            v36 = v38 | (unsigned int)(v37 << 6);
          }
          else
          {
            v39 = (v38 << 6) | v7[2] & 0x3F;
            if ( (unsigned __int8)v36 < 0xF0u )
            {
              v7 += 3;
              v36 = (v37 << 12) | (unsigned int)v39;
            }
            else
            {
              v40 = v7[3];
              v7 += 4;
              v3 = (unsigned __int8 *)((unsigned __int8)(v37 & 7) << 18);
              v36 = (unsigned int)v3 | (v39 << 6) | v40 & 0x3F;
              if ( (_DWORD)v36 == 1114112 )
                goto LABEL_82;
            }
          }
        }
        else
        {
          ++v7;
        }
        v3 = (unsigned __int8 *)(unsigned int)(v36 - 48);
        if ( (unsigned int)v3 >= 0xA )
          v36 = 1114112LL;
        if ( (_DWORD)v36 != 1114112 )
          break;
        if ( v7 == v18 )
        {
          v36 = 1114112LL;
          v7 = v18;
          break;
        }
      }
    }
    v43[0] = v7;
    if ( v30 == 1114112 )
    {
      if ( (_DWORD)v36 == 48 )
      {
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD *, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, __int64, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *))core::iter::traits::iterator::Iterator::try_fold)(
                                v43,
                                v18,
                                v6,
                                v7,
                                v36,
                                v3,
                                v41,
                                v42) )
          goto LABEL_98;
      }
      else if ( (_DWORD)v36 != 1114112 )
      {
LABEL_98:
        result = -1;
        if ( v4 )
          return result;
        return 1;
      }
      return 0;
    }
    if ( (_DWORD)v36 == 1114112 )
      break;
    if ( v30 != (_DWORD)v36 )
    {
      v28 = -(v30 < (unsigned int)v36);
      goto LABEL_94;
    }
  }
  if ( v30 == 48
    && !(unsigned __int8)((__int64 (__fastcall *)(unsigned __int8 **))core::iter::traits::iterator::Iterator::try_fold)(&v41) )
  {
    return 0;
  }
  result = 1;
  if ( v4 )
    return result;
  return -1;
}
