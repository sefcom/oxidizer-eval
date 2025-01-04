        __int64 a6)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  __int128 v10; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  _QWORD v14[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a3;
  v7 = *(unsigned __int8 *)(a2 + 5);
  if ( v7 == 6 || (_BYTE)v7 == (_BYTE)a3 )
  {
    result = uu_sort::KeySettings::check_compatibility(
               &v10,
               a3,
               *(unsigned __int8 *)(a2 + 3),
               *(_BYTE *)(a2 + 2),
               a5,
               a6);
    if ( (_QWORD)v10 == 0x8000000000000000LL )
    {
      *(_BYTE *)(a2 + 5) = v6;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      result = (__int64)v11;
      a1[2] = v11;
      *(_OWORD *)a1 = v10;
    }
  }
  else
  {
    LODWORD(v9) = *((_DWORD *)&unk_2FAC0 + v7);
    HIDWORD(v9) = *((_DWORD *)&unk_2FAC0 + (char)a3);
    v14[0] = &v9;
    v14[1] = <char as core::fmt::Display>::fmt;
    v14[2] = (char *)&v9 + 4;
    v14[3] = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &off_1FF878;
    *((_QWORD *)&v10 + 1) = 3LL;
    v13 = 0LL;
    v11 = v14;
    v12 = 2LL;
    return ((__int64 (__fastcall *)(_QWORD *, __int128 *, __int64, char *, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
             a1,
             &v10,
             a3,
             (char *)&v9 + 4,
             a5,
             a6,
             v9);
  }
  return result;
}
