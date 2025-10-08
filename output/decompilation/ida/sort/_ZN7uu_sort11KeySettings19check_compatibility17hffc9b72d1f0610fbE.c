__int64 __fastcall uu_sort::KeySettings::check_compatibility(_QWORD *a1, unsigned __int8 a2, char a3, char a4)
{
  const char *v4; // rax
  __int64 result; // rax
  int v6; // [rsp+4h] [rbp-54h] BYREF
  _QWORD v7[4]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( a2 <= 3u )
  {
    if ( a4 )
    {
      v6 = *((_DWORD *)&unk_27550 + a2);
      v4 = "d";
LABEL_6:
      v7[0] = v4;
      v7[1] = <char as core::fmt::Display>::fmt;
      v7[2] = &v6;
      v7[3] = <char as core::fmt::Display>::fmt;
      v8[0] = &off_18CDC0;
      v8[1] = 3LL;
      v8[4] = 0LL;
      v8[2] = v7;
      v8[3] = 2LL;
      return core::option::Option<T>::map_or_else(a1, v8);
    }
    if ( a3 )
    {
      v6 = *((_DWORD *)&unk_27550 + a2);
      v4 = (const char *)&unk_26B9C;
      goto LABEL_6;
    }
  }
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}