        _BYTE *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  _BYTE v15[24]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+44h] [rbp-54h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v20[8]; // [rsp+58h] [rbp-40h] BYREF

  v19[0] = a2;
  v19[1] = a2 + a3;
  result = core::str::validations::next_code_point(v19);
  if ( (_DWORD)result )
  {
    v10 = 0;
    while ( 2 )
    {
      switch ( (int)v6 )
      {
        case 'M':
          v13 = (__int64)a4;
          v14 = 3LL;
          goto LABEL_18;
        case 'R':
          v11 = (__int64)a4;
          v12 = 5LL;
          goto LABEL_4;
        case 'V':
          v11 = (__int64)a4;
          v12 = 4LL;
          goto LABEL_4;
        case 'b':
          v10 = 1;
          goto LABEL_5;
        case 'd':
          uu_sort::KeySettings::set_dictionary_order(v15, a4, v6, v7, v8, v9);
          if ( *(_QWORD *)v15 != 0x8000000000000000LL )
            goto LABEL_23;
          goto LABEL_5;
        case 'f':
          a4[1] = 1;
          goto LABEL_5;
        case 'g':
          v13 = (__int64)a4;
          v14 = 2LL;
          goto LABEL_18;
        case 'h':
          v13 = (__int64)a4;
          v14 = 1LL;
LABEL_18:
          uu_sort::KeySettings::set_sort_mode(v15, v13, v14, v7, v8, v9);
          if ( *(_QWORD *)v15 != 0x8000000000000000LL )
            goto LABEL_23;
          goto LABEL_5;
        case 'i':
          uu_sort::KeySettings::set_ignore_non_printing(v15, a4, v6, v7, v8, v9);
          if ( *(_QWORD *)v15 == 0x8000000000000000LL )
            goto LABEL_5;
LABEL_23:
          result = *(_QWORD *)&v15[16];
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v15[16];
          *(_OWORD *)a1 = *(_OWORD *)v15;
          return result;
        case 'n':
          v11 = (__int64)a4;
          v12 = 0LL;
LABEL_4:
          uu_sort::KeySettings::set_sort_mode(v15, v11, v12, v7, v8, v9);
          result = *(_QWORD *)v15;
          if ( *(_QWORD *)v15 == 0x8000000000000000LL )
            goto LABEL_5;
          *(_OWORD *)(a1 + 8) = *(_OWORD *)&v15[8];
          *(_QWORD *)a1 = result;
          return result;
        case 'r':
          a4[4] = 1;
LABEL_5:
          result = core::str::validations::next_code_point(v19);
          if ( (_DWORD)result )
            continue;
          goto LABEL_22;
        default:
          v18 = v6;
          v20[0] = &v18;
          v20[1] = <char as core::fmt::Display>::fmt;
          *(_QWORD *)v15 = &off_1FFAC0;
          *(_QWORD *)&v15[8] = 2LL;
          v17 = 0LL;
          *(_QWORD *)&v15[16] = v20;
          v16 = 1LL;
          return core::option::Option<T>::map_or_else(a1, v15, v6, v7, v8, v9);
      }
    }
  }
  v10 = 0;
LABEL_22:
  *(_BYTE *)(a1 + 8) = v10;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}
