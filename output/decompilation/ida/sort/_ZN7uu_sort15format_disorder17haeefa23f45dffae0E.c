__int64 __fastcall uu_sort::format_disorder(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-90h] BYREF
  __int64 v8; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v9[3]; // [rsp+18h] [rbp-80h] BYREF
  char v10; // [rsp+30h] [rbp-68h]
  _QWORD v11[6]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v12[6]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a4;
  v8 = a5;
  if ( (a6 & 1) != 0 )
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
  }
  else
  {
    v9[0] = 1LL;
    v9[1] = a2;
    v9[2] = a3;
    v10 = 0;
    v11[0] = v9;
    v11[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v11[2] = &v7;
    v11[3] = <&T as core::fmt::Display>::fmt;
    v11[4] = &v8;
    v11[5] = <&T as core::fmt::Display>::fmt;
    v12[0] = &unk_18CBD0;
    v12[1] = 3LL;
    v12[4] = 0LL;
    v12[2] = v11;
    v12[3] = 3LL;
    return core::option::Option<T>::map_or_else(a1, v12);
  }
  return result;
}