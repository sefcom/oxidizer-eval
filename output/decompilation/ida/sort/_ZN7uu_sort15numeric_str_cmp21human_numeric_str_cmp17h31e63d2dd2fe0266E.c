char __fastcall uu_sort::numeric_str_cmp::human_numeric_str_cmp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r12
  int v9; // edx
  unsigned __int8 v10; // r13
  char result; // al
  char v12; // al
  int v13; // edx
  unsigned __int8 v14; // cl
  bool v15; // cf
  bool v16; // zf
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a1[2];
  v3 = a2[2];
  v4 = *(unsigned __int8 *)(v2 + 8);
  v5 = *(unsigned __int8 *)(v3 + 8);
  if ( (_BYTE)v4 != (_BYTE)v5 )
    return (v4 > v5) - (v4 < v5);
  v6 = *a1;
  v7 = a1[1];
  v8 = *a2;
  v20 = a2[1];
  v21 = v7;
  v17 = v6;
  v18 = v6 + v7;
  v10 = 0;
  if ( (core::str::validations::next_code_point_reverse(&v17) & 1) != 0 )
  {
    switch ( v9 )
    {
      case 'E':
        v10 = 6;
        break;
      case 'G':
        v10 = 3;
        break;
      case 'K':
      case 'k':
        v10 = 1;
        break;
      case 'M':
        v10 = 2;
        break;
      case 'P':
        v10 = 5;
        break;
      case 'Q':
        v10 = 10;
        break;
      case 'R':
        v10 = 9;
        break;
      case 'T':
        v10 = 4;
        break;
      case 'Y':
        v10 = 8;
        break;
      case 'Z':
        v10 = 7;
        break;
      default:
        break;
    }
  }
  v17 = v8;
  v18 = v8 + v20;
  v12 = core::str::validations::next_code_point_reverse(&v17);
  v14 = 0;
  if ( (v12 & 1) != 0 )
  {
    switch ( v13 )
    {
      case 'E':
        v14 = 6;
        v15 = v10 < 6u;
        v16 = v10 == 6;
        if ( v10 != 6 )
          goto LABEL_37;
        goto LABEL_35;
      case 'G':
        v14 = 3;
        v15 = v10 < 3u;
        v16 = v10 == 3;
        if ( v10 != 3 )
          goto LABEL_37;
        goto LABEL_35;
      case 'K':
      case 'k':
        v14 = 1;
        v15 = v10 == 0;
        v16 = v10 == 1;
        if ( v10 != 1 )
          goto LABEL_37;
        goto LABEL_35;
      case 'M':
        v14 = 2;
        v15 = v10 < 2u;
        v16 = v10 == 2;
        if ( v10 != 2 )
          goto LABEL_37;
        goto LABEL_35;
      case 'P':
        v14 = 5;
        v15 = v10 < 5u;
        v16 = v10 == 5;
        if ( v10 != 5 )
          goto LABEL_37;
        goto LABEL_35;
      case 'Q':
        v14 = 10;
        v15 = v10 < 0xAu;
        v16 = v10 == 10;
        if ( v10 != 10 )
          goto LABEL_37;
        goto LABEL_35;
      case 'R':
        v14 = 9;
        break;
      case 'T':
        v14 = 4;
        v15 = v10 < 4u;
        v16 = v10 == 4;
        if ( v10 != 4 )
          goto LABEL_37;
        goto LABEL_35;
      case 'Y':
        v14 = 8;
        v15 = v10 < 8u;
        v16 = v10 == 8;
        if ( v10 != 8 )
          goto LABEL_37;
        goto LABEL_35;
      case 'Z':
        v14 = 7;
        v15 = v10 < 7u;
        v16 = v10 == 7;
        if ( v10 != 7 )
          goto LABEL_37;
        goto LABEL_35;
      default:
        break;
    }
  }
  v15 = v10 < v14;
  v16 = v10 == v14;
  if ( v10 == v14 )
  {
LABEL_35:
    v22[0] = v6;
    v22[1] = v21;
    v22[2] = v2;
    v17 = v8;
    v18 = v20;
    v19 = v3;
    return uu_sort::numeric_str_cmp::numeric_str_cmp(v22, &v17);
  }
  else
  {
LABEL_37:
    result = (!v15 && !v16) - v15;
    if ( !v4 )
      return v10 < v14 ? 1 : -1;
  }
  return result;
}