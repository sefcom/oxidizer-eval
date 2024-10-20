__int64 __fastcall uu_sort::numeric_str_cmp::NumInfo::parse(__int64 a1, unsigned __int8 *a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  unsigned __int8 *v5; // rbx
  int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int8 *v9; // rcx
  char v10; // r14
  __int64 v11; // r10
  char v12; // r15
  unsigned __int8 *v13; // r9
  char v14; // dl
  unsigned __int8 *v15; // rsi
  unsigned int v16; // edi
  unsigned __int8 *v17; // r12
  int v18; // r13d
  int v19; // r11d
  int v20; // edx
  unsigned __int8 *v21; // r13
  bool v22; // zf
  unsigned int v23; // r15d
  bool v24; // dl
  bool v25; // zf
  unsigned __int8 *v26; // r14
  int v27; // r9d
  int v28; // r11d
  int v29; // edx
  __int64 v30; // r10
  unsigned __int8 *v31; // rdi
  unsigned __int64 v32; // rdi
  char v33; // dl
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-54h]
  __int64 v37; // [rsp+Ch] [rbp-48h]
  unsigned __int8 *v38; // [rsp+14h] [rbp-40h]

  result = a1;
  if ( !a3 )
  {
    v14 = 1;
    v8 = 0LL;
    v9 = 0LL;
    v15 = 0LL;
    goto LABEL_91;
  }
  v38 = (unsigned __int8 *)a3;
  v5 = &a2[a3];
  v6 = *a4;
  v7 = a4[1];
  v35 = 1;
  v8 = -1LL;
  v9 = 0LL;
  v37 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 1;
  v13 = 0LL;
  do
  {
    v16 = *a2;
    if ( (v16 & 0x80u) != 0 )
    {
      v18 = v16 & 0x1F;
      v19 = a2[1] & 0x3F;
      if ( (unsigned __int8)v16 < 0xE0u )
      {
        v17 = a2 + 2;
        v16 = v19 | (v18 << 6);
      }
      else
      {
        v20 = (v19 << 6) | a2[2] & 0x3F;
        if ( (unsigned __int8)v16 < 0xF0u )
        {
          v17 = a2 + 3;
          a3 = (v18 << 12) | (unsigned int)v20;
          v16 = a3;
        }
        else
        {
          v17 = a2 + 4;
          a3 = (unsigned int)(v20 << 6);
          v16 = ((v16 & 7) << 18) | a3 | a2[3] & 0x3F;
        }
      }
    }
    else
    {
      v17 = a2 + 1;
    }
    v21 = &v17[v13 - a2];
    if ( (v12 & 1) == 0 )
      goto LABEL_15;
    a3 = v16 - 9;
    if ( (unsigned int)a3 < 5 || v16 == 32 )
      goto LABEL_6;
    if ( v16 <= 0x7F )
    {
      if ( v16 == 45 )
      {
        v12 = 0;
        v35 = 0;
        goto LABEL_6;
      }
      goto LABEL_15;
    }
    a3 = v16 >> 8;
    if ( v16 >> 8 <= 0x1F )
    {
      if ( (_DWORD)a3 )
      {
        if ( (_DWORD)a3 == 22 )
        {
          v22 = v16 == 5760;
          goto LABEL_63;
        }
        goto LABEL_15;
      }
      a3 = (unsigned __int8)core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v16];
LABEL_68:
      if ( (a3 & 1) != 0 )
        goto LABEL_6;
      goto LABEL_15;
    }
    if ( (_DWORD)a3 == 32 )
    {
      a3 = (unsigned __int8)core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v16];
      LOBYTE(a3) = (unsigned __int8)a3 >> 1;
      goto LABEL_68;
    }
    if ( (_DWORD)a3 == 48 )
    {
      v22 = v16 == 12288;
LABEL_63:
      if ( v22 )
        goto LABEL_6;
    }
LABEL_15:
    if ( v6 != v16 )
    {
      if ( v16 == v7 )
      {
        if ( (v37 & 1) != 0 )
        {
          v16 = v7;
LABEL_78:
          v15 = 0LL;
          if ( (v10 & 1) != 0 )
            v15 = v13;
          if ( v11 == 1 )
            goto LABEL_84;
          goto LABEL_81;
        }
        LOBYTE(a3) = 1;
        v37 = a3;
      }
      else
      {
        if ( v16 - 58 < 0xFFFFFFF6 )
          goto LABEL_78;
        a3 = v37;
        v23 = v37;
        LOBYTE(v23) = v37 & 1;
        if ( v11 == 1 || v16 != 48 )
        {
          a3 = v23;
          goto LABEL_32;
        }
        if ( (_BYTE)v23 )
        {
          --v8;
          LOBYTE(a3) = 1;
LABEL_32:
          v8 += (unsigned __int8)a3 ^ 1u;
          if ( v16 == 48 )
            v13 = v9;
          v24 = v16 != 48;
          v25 = v11 == 1;
          while ( 1 )
          {
            if ( v25 )
              v13 = v9;
            v11 = v24 | (unsigned __int8)v25;
            if ( v17 == v5 )
            {
              v9 = v13;
              v31 = v38;
              v15 = v38;
              goto LABEL_74;
            }
            v15 = v21;
            v26 = v17;
            v9 = v13;
            v16 = *v17;
            if ( (v16 & 0x80u) != 0 )
            {
              v27 = v16 & 0x1F;
              v28 = v17[1] & 0x3F;
              if ( (unsigned __int8)v16 <= 0xDFu )
              {
                v17 += 2;
                v16 = v28 | (v27 << 6);
              }
              else
              {
                v29 = (v28 << 6) | v17[2] & 0x3F;
                if ( (unsigned __int8)v16 < 0xF0u )
                {
                  v17 += 3;
                  a3 = (v27 << 12) | (unsigned int)v29;
                  v16 = a3;
                }
                else
                {
                  v17 += 4;
                  a3 = (unsigned int)(v29 << 6);
                  v16 = ((v16 & 7) << 18) | a3 | v26[3] & 0x3F;
                }
              }
            }
            else
            {
              ++v17;
            }
            v21 = &v17[v21 - v26];
            v10 = 1;
            if ( v6 == v16 )
              goto LABEL_5;
            if ( v16 == v7 )
              break;
            a3 = v16 - 58;
            if ( (unsigned int)a3 < 0xFFFFFFF6 )
              goto LABEL_83;
            v30 = v11 - 1;
            if ( v30 && v16 == 48 )
            {
              if ( !(_BYTE)v23 )
              {
                v11 = 0LL;
                goto LABEL_5;
              }
              --v8;
              LOBYTE(a3) = 1;
            }
            else
            {
              a3 = v23;
            }
            v8 += (unsigned __int8)a3 ^ 1u;
            v24 = v16 != 48;
            if ( v16 == 48 )
              v15 = v9;
            v25 = v30 == 0;
            v13 = v15;
          }
          if ( !(_BYTE)v23 )
          {
            v10 = 1;
            v12 = 0;
            LOBYTE(a3) = 1;
            v37 = a3;
            goto LABEL_6;
          }
          v16 = v7;
LABEL_83:
          v13 = v15;
          if ( v11 == 1 )
          {
LABEL_84:
            if ( *((_BYTE *)a4 + 8) )
            {
              v32 = v16 - 69;
              v33 = v35;
              if ( (unsigned int)v32 <= 0x26 )
              {
                v34 = 0x4000308945LL;
                if ( _bittest64(&v34, v32) )
                  ++v13;
              }
              result = a1;
            }
            else
            {
              result = a1;
              v33 = v35;
            }
            v14 = v33 & 1;
            v15 = v13;
            goto LABEL_91;
          }
LABEL_81:
          v14 = 1;
          v8 = 0LL;
          v9 = v15;
          result = a1;
          goto LABEL_91;
        }
        v10 = 1;
      }
    }
LABEL_5:
    v12 = 0;
LABEL_6:
    a2 = v17;
    v13 = v21;
  }
  while ( v17 != v5 );
  v15 = 0LL;
  v31 = v38;
  if ( (v10 & 1) != 0 )
    v15 = v38;
LABEL_74:
  result = a1;
  if ( v11 )
  {
    v14 = v35 & 1;
    v15 = v31;
  }
  else
  {
    v14 = 1;
    v8 = 0LL;
    v9 = v15;
  }
LABEL_91:
  *(_QWORD *)result = v8;
  *(_BYTE *)(result + 8) = v14;
  *(_QWORD *)(result + 16) = v9;
  *(_QWORD *)(result + 24) = v15;
  return result;
}
