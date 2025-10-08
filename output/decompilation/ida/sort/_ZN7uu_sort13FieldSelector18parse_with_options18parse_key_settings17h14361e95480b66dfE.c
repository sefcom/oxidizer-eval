__int64 __fastcall uu_sort::FieldSelector::parse_with_options::parse_key_settings(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  int v5; // edx
  char v6; // bp
  __int64 v7; // rsi
  unsigned __int8 v8; // dl
  __int64 result; // rax
  _BYTE v10[24]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+30h] [rbp-68h]
  int v13; // [rsp+44h] [rbp-54h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v15[8]; // [rsp+58h] [rbp-40h] BYREF

  v14[0] = a2;
  v14[1] = a2 + a3;
  v6 = 0;
  if ( (core::str::validations::next_code_point(v14) & 1) != 0 )
  {
    while ( 2 )
    {
      switch ( v5 )
      {
        case 'M':
          uu_sort::KeySettings::set_sort_mode(v10, (__int64)a4, 3u);
          if ( *(_QWORD *)v10 == 0x8000000000000000LL )
            goto LABEL_4;
          goto LABEL_25;
        case 'R':
          v7 = (__int64)a4;
          v8 = 5;
          goto LABEL_17;
        case 'V':
          v7 = (__int64)a4;
          v8 = 4;
          goto LABEL_17;
        case 'b':
          v6 = 1;
          goto LABEL_4;
        case 'd':
          uu_sort::KeySettings::set_dictionary_order(v10, a4);
          if ( *(_QWORD *)v10 != 0x8000000000000000LL )
            goto LABEL_25;
          goto LABEL_4;
        case 'f':
          a4[1] = 1;
          goto LABEL_4;
        case 'g':
          uu_sort::KeySettings::set_sort_mode(v10, (__int64)a4, 2u);
          if ( *(_QWORD *)v10 != 0x8000000000000000LL )
            goto LABEL_25;
          goto LABEL_4;
        case 'h':
          uu_sort::KeySettings::set_sort_mode(v10, (__int64)a4, 1u);
          if ( *(_QWORD *)v10 == 0x8000000000000000LL )
            goto LABEL_4;
LABEL_25:
          result = *(_QWORD *)&v10[16];
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v10[16];
          *(_OWORD *)a1 = *(_OWORD *)v10;
          return result;
        case 'i':
          uu_sort::KeySettings::set_ignore_non_printing(v10, a4);
          result = *(_QWORD *)v10;
          if ( *(_QWORD *)v10 != 0x8000000000000000LL )
            goto LABEL_24;
          goto LABEL_4;
        case 'n':
          v7 = (__int64)a4;
          v8 = 0;
LABEL_17:
          uu_sort::KeySettings::set_sort_mode(v10, v7, v8);
          result = *(_QWORD *)v10;
          if ( *(_QWORD *)v10 == 0x8000000000000000LL )
            goto LABEL_4;
LABEL_24:
          *(_OWORD *)(a1 + 8) = *(_OWORD *)&v10[8];
          *(_QWORD *)a1 = result;
          return result;
        case 'r':
          a4[4] = 1;
LABEL_4:
          if ( (core::str::validations::next_code_point(v14) & 1) != 0 )
            continue;
          goto LABEL_23;
        default:
          v13 = v5;
          v15[0] = &v13;
          v15[1] = <char as core::fmt::Display>::fmt;
          *(_QWORD *)v10 = &off_18D098;
          *(_QWORD *)&v10[8] = 2LL;
          v12 = 0LL;
          *(_QWORD *)&v10[16] = v15;
          v11 = 1LL;
          return core::option::Option<T>::map_or_else(a1, v10);
      }
    }
  }
LABEL_23:
  result = a1;
  *(_BYTE *)(a1 + 8) = v6;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}