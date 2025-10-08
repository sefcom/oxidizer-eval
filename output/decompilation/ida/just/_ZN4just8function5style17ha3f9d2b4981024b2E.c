_QWORD *__fastcall just::function::style(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v10; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v15[6]; // [rsp+48h] [rbp-30h] BYREF

  v14[0] = a3;
  v14[1] = a4;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, aCommand_1, 7LL) )
  {
    v6 = *(_DWORD *)(**(_QWORD **)a2 + 384LL);
    LOBYTE(v10) = 1;
    *(_DWORD *)((char *)&v10 + 1) = 0;
    DWORD1(v10) = 0;
    DWORD2(v10) = v6;
  }
  else
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, aError_0, 5LL) )
    {
      LOBYTE(v10) = 1;
      v7 = 0x100000000LL;
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, aWarning_0, 7LL) )
      {
        v15[0] = v14;
        v15[1] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v10 = &off_4300B8;
        *((_QWORD *)&v10 + 1) = 2LL;
        v13 = 0LL;
        v11 = v15;
        v12 = 1LL;
        core::option::Option<T>::map_or_else(a1 + 1, 0LL, v8, &v10);
        *a1 = 1LL;
        return a1;
      }
      LOBYTE(v10) = 1;
      v7 = 0x300000000LL;
    }
    *(_QWORD *)((char *)&v10 + 4) = v7;
    *(_DWORD *)((char *)&v10 + 1) = 0;
  }
  BYTE12(v10) = 10;
  <T as alloc::string::SpecToString>::spec_to_string(a1 + 1, &v10);
  *a1 = 0LL;
  return a1;
}