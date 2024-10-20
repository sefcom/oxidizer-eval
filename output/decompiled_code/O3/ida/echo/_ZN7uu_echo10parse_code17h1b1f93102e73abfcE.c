__int64 __fastcall uu_echo::parse_code(unsigned __int8 **a1, unsigned __int8 a2)
{
  int v2; // r8d
  unsigned __int8 *v3; // rcx
  int v4; // eax
  int v5; // r9d
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // r8d
  bool v10; // cf
  unsigned int v11; // r8d
  unsigned __int8 *v12; // r11
  unsigned __int8 *v13; // r9
  unsigned __int8 *v14; // r8
  int v15; // ecx
  int v16; // r10d
  int v17; // ebp
  int v18; // ebx
  unsigned int v19; // r10d
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // ecx
  int v23; // r9d
  int v24; // r11d
  int v25; // r10d

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 == 1114113 )
  {
    v3 = *a1;
    if ( *a1 == a1[1] )
    {
      v2 = 1114112;
    }
    else
    {
      *a1 = v3 + 1;
      v2 = *v3;
      if ( (v2 & 0x80u) != 0 )
      {
        v4 = v2 & 0x1F;
        *a1 = v3 + 2;
        v5 = v3[1] & 0x3F;
        if ( (unsigned __int8)v2 <= 0xDFu )
        {
          v2 = v5 | (v4 << 6);
        }
        else
        {
          *a1 = v3 + 3;
          v6 = (v5 << 6) | v3[2] & 0x3F;
          if ( (unsigned __int8)v2 < 0xF0u )
          {
            v2 = (v4 << 12) | v6;
          }
          else
          {
            *a1 = v3 + 4;
            v2 = ((v2 & 7) << 18) | (v6 << 6) | v3[3] & 0x3F;
          }
        }
      }
    }
    *((_DWORD *)a1 + 4) = v2;
  }
  v7 = 1114112;
  if ( v2 != 1114112 )
  {
    v8 = v2 - 48;
    if ( a2 >= 0xBu )
    {
      if ( v8 < 0xA )
        goto LABEL_17;
      v9 = (v2 | 0x20) - 97;
      v10 = __CFADD__(v9, 10);
      v11 = v9 + 10;
      v8 = -1;
      if ( !v10 )
        v8 = v11;
    }
    if ( v8 < a2 )
    {
LABEL_17:
      *((_DWORD *)a1 + 4) = 1114113;
      v12 = *a1;
      v13 = a1[1];
      if ( *a1 == v13 )
        goto LABEL_38;
      v14 = v12 + 1;
      *a1 = v12 + 1;
      v15 = *v12;
      if ( (v15 & 0x80u) != 0 )
      {
        v16 = v15 & 0x1F;
        v14 = v12 + 2;
        *a1 = v12 + 2;
        v17 = v12[1] & 0x3F;
        if ( (unsigned __int8)v15 <= 0xDFu )
        {
          v15 = v17 | (v16 << 6);
        }
        else
        {
          v14 = v12 + 3;
          *a1 = v12 + 3;
          v18 = (v17 << 6) | v12[2] & 0x3F;
          if ( (unsigned __int8)v15 > 0xEFu )
          {
            v14 = v12 + 4;
            *a1 = v12 + 4;
            v15 = ((v15 & 7) << 18) | (v18 << 6) | v12[3] & 0x3F;
            *((_DWORD *)a1 + 4) = v15;
            if ( v15 == 1114112 )
              return (unsigned __int8)v8;
LABEL_26:
            v19 = v15 - 48;
            if ( a2 >= 0xBu )
            {
              if ( v19 < 0xA )
                goto LABEL_31;
              v20 = (v15 | 0x20) - 97;
              v10 = __CFADD__(v20, 10);
              v21 = v20 + 10;
              v19 = -1;
              if ( !v10 )
                v19 = v21;
            }
            if ( v19 >= a2 )
              return (unsigned __int8)v8;
LABEL_31:
            LOBYTE(v8) = a2 * v8 + v19;
            *((_DWORD *)a1 + 4) = 1114113;
            if ( a2 != 8 )
              return (unsigned __int8)v8;
            if ( v14 != v13 )
            {
              *a1 = v14 + 1;
              v22 = *v14;
              if ( (v22 & 0x80u) != 0 )
              {
                v23 = v22 & 0x1F;
                *a1 = v14 + 2;
                v24 = v14[1] & 0x3F;
                if ( (unsigned __int8)v22 >= 0xE0u )
                {
                  *a1 = v14 + 3;
                  v25 = (v24 << 6) | v14[2] & 0x3F;
                  if ( (unsigned __int8)v22 < 0xF0u )
                  {
                    v22 = (v23 << 12) | v25;
                    *((_DWORD *)a1 + 4) = v22;
                    goto LABEL_43;
                  }
                  *a1 = v14 + 4;
                  v22 = ((v22 & 7) << 18) | (v25 << 6) | v14[3] & 0x3F;
                  *((_DWORD *)a1 + 4) = v22;
                  if ( v22 != 1114112 )
                  {
LABEL_43:
                    if ( v22 - 48 < (unsigned int)a2 )
                    {
                      *((_DWORD *)a1 + 4) = 1114113;
                      LOBYTE(v8) = 8 * v8 + v22 - 48;
                    }
                  }
                  return (unsigned __int8)v8;
                }
                v22 = v24 | (v23 << 6);
              }
              *((_DWORD *)a1 + 4) = v22;
              goto LABEL_43;
            }
LABEL_38:
            *((_DWORD *)a1 + 4) = 1114112;
            return (unsigned __int8)v8;
          }
          v15 = (v16 << 12) | v18;
        }
      }
      *((_DWORD *)a1 + 4) = v15;
      goto LABEL_26;
    }
  }
  return v7;
}
