unsigned __int64 __fastcall ruff_python_formatter::string::docstring::Indentation::trim_start(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  bool v8; // cf
  int v9; // edx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  bool v13; // zf
  unsigned __int64 v14; // rcx

  result = *a2;
  switch ( *a2 )
  {
    case 0u:
      result = *((_QWORD *)a2 + 1);
      v4 = 0LL;
      switch ( *(_DWORD *)a3 )
      {
        case 0:
          goto LABEL_12;
        case 1:
          goto LABEL_15;
        case 2:
          goto LABEL_13;
        case 3:
        case 4:
          goto LABEL_19;
      }
      goto LABEL_19;
    case 1u:
      v4 = *((_QWORD *)a2 + 1);
      result = 0LL;
      switch ( *(_DWORD *)a3 )
      {
        case 0:
          goto LABEL_12;
        case 1:
          goto LABEL_15;
        case 2:
          goto LABEL_13;
        case 3:
        case 4:
          goto LABEL_19;
      }
      goto LABEL_19;
    case 2u:
      v4 = *((_QWORD *)a2 + 1);
      result = *((_QWORD *)a2 + 2);
      switch ( *(_DWORD *)a3 )
      {
        case 0:
LABEL_12:
          v10 = *(_QWORD *)(a3 + 8);
          goto LABEL_16;
        case 1:
LABEL_15:
          v12 = *(_QWORD *)(a3 + 8);
          v10 = 0LL;
          if ( v4 >= v12 )
            goto LABEL_16;
          goto LABEL_19;
        case 2:
LABEL_13:
          v11 = *(_QWORD *)(a3 + 8);
          v10 = *(_QWORD *)(a3 + 16);
          if ( v4 < v11 )
            goto LABEL_19;
LABEL_16:
          v8 = result < v10;
          result -= v10;
          if ( !v8 )
            JUMPOUT(0x326888LL);
          return result;
        case 3:
        case 4:
          goto LABEL_19;
      }
      goto LABEL_19;
    case 3u:
      v5 = *((_QWORD *)a2 + 1);
      result = *((_QWORD *)a2 + 2);
      if ( *(_DWORD *)a3 )
      {
        if ( *(_DWORD *)a3 == 3 )
        {
          v6 = *(_QWORD *)(a3 + 8);
          v7 = v5 - v6;
          if ( v5 >= v6 )
          {
            v8 = result < *(_QWORD *)(a3 + 16);
            result -= *(_QWORD *)(a3 + 16);
            if ( !v8 )
            {
              v9 = 3;
              if ( v5 == v6 )
              {
                v9 = result != 0;
                v7 = result;
              }
              *(_DWORD *)a1 = v9;
              *(_QWORD *)(a1 + 8) = v7;
              *(_QWORD *)(a1 + 16) = result;
              return result;
            }
          }
        }
LABEL_19:
        *(_DWORD *)a1 = 5;
        return result;
      }
      v8 = v5 < *(_QWORD *)(a3 + 8);
      v14 = v5 - *(_QWORD *)(a3 + 8);
      v13 = v14 == 0;
      if ( v8 )
        goto LABEL_19;
      if ( !v14 )
        v14 = *((_QWORD *)a2 + 2);
      *(_DWORD *)a1 = 2 * !v13 + 1;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = result;
      return result;
    case 4u:
      goto LABEL_19;
  }
}