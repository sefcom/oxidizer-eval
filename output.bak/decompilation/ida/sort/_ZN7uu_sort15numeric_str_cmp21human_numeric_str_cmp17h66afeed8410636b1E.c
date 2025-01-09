__int64 __fastcall uu_sort::numeric_str_cmp::human_numeric_str_cmp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // cl
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // edx
  unsigned __int8 v10; // r12
  __int64 result; // rax
  int v12; // edx
  unsigned __int8 v13; // al
  bool v14; // cf
  bool v15; // cl
  unsigned __int8 v16; // al
  unsigned int v17; // ecx
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  _QWORD v23[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a1[2];
  v3 = a2[2];
  v4 = *(_BYTE *)(v2 + 8);
  v5 = *(_BYTE *)(v3 + 8);
  if ( v4 == v5 )
  {
    v6 = *a1;
    v7 = a1[1];
    v8 = *a2;
    v21 = a2[1];
    v22 = v7;
    v18 = v6;
    v19 = v6 + v7;
    v10 = 0;
    if ( (unsigned int)core::str::validations::next_code_point_reverse(&v18) )
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
    v18 = v8;
    v19 = v8 + v21;
    if ( (unsigned int)core::str::validations::next_code_point_reverse(&v18) )
    {
      v13 = 0;
      switch ( v12 )
      {
        case 'E':
          v13 = 6;
          break;
        case 'G':
          v13 = 3;
          break;
        case 'K':
        case 'k':
          v13 = 1;
          break;
        case 'M':
          v13 = 2;
          break;
        case 'P':
          v13 = 5;
          break;
        case 'T':
          v13 = 4;
          break;
        case 'Y':
          v13 = 8;
          break;
        case 'Z':
          v13 = 7;
          break;
        default:
          break;
      }
    }
    else
    {
      v13 = 0;
    }
    v14 = v10 < v13;
    v15 = v10 != v13;
    v16 = -1;
    if ( !v14 )
      v16 = v15;
    if ( v16 )
    {
      v17 = v16;
      result = (unsigned __int8)-v16;
      if ( v4 )
        return v17;
    }
    else
    {
      v23[0] = v6;
      v23[1] = v22;
      v23[2] = v2;
      v18 = v8;
      v19 = v21;
      v20 = v3;
      return uu_sort::numeric_str_cmp::numeric_str_cmp(v23, &v18);
    }
  }
  else
  {
    result = (unsigned int)-(v4 < v5);
    LOBYTE(result) = v4 < v5 ? -1 : 1;
  }
  return result;
}
