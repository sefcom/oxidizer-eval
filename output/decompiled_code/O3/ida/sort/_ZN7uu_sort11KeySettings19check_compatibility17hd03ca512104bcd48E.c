        __int64 a6)
{
  char *v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( a2 <= 3u )
  {
    if ( a4 )
    {
      HIDWORD(v8) = *((_DWORD *)&unk_24B00 + a2);
      v6 = "d";
LABEL_6:
      v9[0] = v6;
      v9[1] = <char as core::fmt::Display>::fmt;
      v9[2] = (char *)&v8 + 4;
      v9[3] = <char as core::fmt::Display>::fmt;
      v10[0] = &off_1FF878;
      v10[1] = 3LL;
      v10[4] = 0LL;
      v10[2] = v9;
      v10[3] = 2LL;
      return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64, char *, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
               a1,
               v10,
               a3,
               (char *)&v8 + 4,
               a5,
               a6,
               v8);
    }
    if ( (_BYTE)a3 )
    {
      HIDWORD(v8) = *((_DWORD *)&unk_24B00 + a2);
      v6 = (char *)&unk_24344;
      goto LABEL_6;
    }
  }
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}
