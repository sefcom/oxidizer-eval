__int64 __fastcall uu_sort::KeySettings::check_compatibility(
        _QWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  char *v6; // rax
  __int64 result; // rax
  int v8; // [rsp+4h] [rbp-54h] BYREF
  _QWORD v9[4]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( a2 <= 3u )
  {
    if ( a4 )
    {
      v8 = *((_DWORD *)&unk_24B00 + a2);
      v6 = "d";
LABEL_6:
      v9[0] = v6;
      v9[1] = <char as core::fmt::Display>::fmt;
      v9[2] = &v8;
      v9[3] = <char as core::fmt::Display>::fmt;
      v10[0] = &off_1FF878;
      v10[1] = 3LL;
      v10[4] = 0LL;
      v10[2] = v9;
      v10[3] = 2LL;
      return core::option::Option<T>::map_or_else(a1, v10, a3, &v8, a5, a6);
    }
    if ( (_BYTE)a3 )
    {
      v8 = *((_DWORD *)&unk_24B00 + a2);
      v6 = (char *)&unk_24344;
      goto LABEL_6;
    }
  }
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}
