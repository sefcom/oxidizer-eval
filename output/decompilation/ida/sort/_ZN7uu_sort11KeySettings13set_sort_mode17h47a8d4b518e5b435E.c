_QWORD *__fastcall uu_sort::KeySettings::set_sort_mode(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // bl
  __int64 v7; // rax
  _QWORD *result; // rax
  int v9; // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+4h] [rbp-74h] BYREF
  __int128 v11; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v12; // [rsp+18h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  _QWORD v15[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a3;
  v7 = *(unsigned __int8 *)(a2 + 5);
  if ( v7 == 6 || (_BYTE)v7 == (_BYTE)a3 )
  {
    result = (_QWORD *)uu_sort::KeySettings::check_compatibility(
                         &v11,
                         a3,
                         *(unsigned __int8 *)(a2 + 3),
                         *(_BYTE *)(a2 + 2),
                         a5,
                         a6);
    if ( (_QWORD)v11 == 0x8000000000000000LL )
    {
      *(_BYTE *)(a2 + 5) = v6;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      result = v12;
      a1[2] = v12;
      *(_OWORD *)a1 = v11;
    }
  }
  else
  {
    v9 = *((_DWORD *)&unk_2FAC0 + v7);
    v10 = *((_DWORD *)&unk_2FAC0 + (char)a3);
    v15[0] = &v9;
    v15[1] = <char as core::fmt::Display>::fmt;
    v15[2] = &v10;
    v15[3] = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v11 = &off_1FF878;
    *((_QWORD *)&v11 + 1) = 3LL;
    v14 = 0LL;
    v12 = v15;
    v13 = 2LL;
    return (_QWORD *)core::option::Option<T>::map_or_else(a1, &v11, a3, &v10, a5, a6);
  }
  return result;
}
