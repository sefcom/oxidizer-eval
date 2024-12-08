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
  _BYTE v13[24]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  int v16; // [rsp+44h] [rbp-54h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v18[8]; // [rsp+58h] [rbp-40h] BYREF

  v17[0] = a2;
  v17[1] = a2 + a3;
  result = core::str::validations::next_code_point(v17);
  if ( (_DWORD)result )
  {
    v10 = 0;
    while ( 2 )
    {
      switch ( (int)v6 )
      {
        case 'M':
          v11 = (__int64)a4;
          v12 = 3LL;
          goto LABEL_4;
        case 'R':
          v11 = (__int64)a4;
          v12 = 5LL;
          goto LABEL_4;
        case 'V':
          uu_sort::KeySettings::set_sort_mode(v13, (__int64)a4, 4LL, v7, v8, v9);
          result = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 == 0x8000000000000000LL )
            goto LABEL_6;
          *(_OWORD *)(a1 + 8) = *(_OWORD *)&v13[8];
          *(_QWORD *)a1 = result;
          return result;
        case 'b':
          v10 = 1;
          goto LABEL_6;
        case 'd':
          uu_sort::KeySettings::set_dictionary_order(v13, a4, v6, v7, v8, v9);
          goto LABEL_5;
        case 'f':
          a4[1] = 1;
          goto LABEL_6;
        case 'g':
          v11 = (__int64)a4;
          v12 = 2LL;
          goto LABEL_4;
        case 'h':
          v11 = (__int64)a4;
          v12 = 1LL;
          goto LABEL_4;
        case 'i':
          uu_sort::KeySettings::set_ignore_non_printing(v13, a4, v6, v7, v8, v9);
          goto LABEL_5;
        case 'n':
          v11 = (__int64)a4;
          v12 = 0LL;
LABEL_4:
          uu_sort::KeySettings::set_sort_mode(v13, v11, v12, v7, v8, v9);
LABEL_5:
          if ( *(_QWORD *)v13 == 0x8000000000000000LL )
            goto LABEL_6;
          result = *(_QWORD *)&v13[16];
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v13[16];
          *(_OWORD *)a1 = *(_OWORD *)v13;
          return result;
        case 'r':
          a4[4] = 1;
LABEL_6:
          result = core::str::validations::next_code_point(v17);
          if ( (_DWORD)result )
            continue;
          goto LABEL_20;
        default:
          v16 = v6;
          v18[0] = &v16;
          v18[1] = <char as core::fmt::Display>::fmt;
          *(_QWORD *)v13 = &off_1FEF98;
          *(_QWORD *)&v13[8] = 2LL;
          v15 = 0LL;
          *(_QWORD *)&v13[16] = v18;
          v14 = 1LL;
          return core::option::Option<T>::map_or_else(a1, v13, v6, v7, v8, v9);
      }
    }
  }
  v10 = 0;
LABEL_20:
  *(_BYTE *)(a1 + 8) = v10;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}
