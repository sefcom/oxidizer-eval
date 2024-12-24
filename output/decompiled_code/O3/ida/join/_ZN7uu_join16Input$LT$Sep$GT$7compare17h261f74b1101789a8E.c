        __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // eax
  _QWORD v9[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  if ( a2 && a4 )
  {
    if ( a1 )
    {
      v9[0] = a2;
      v9[1] = a3;
      v10[0] = a4;
      v10[1] = a5;
      return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, size_t, const void *, size_t, __int64))<uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp)(
               v9,
               v10,
               a3,
               a4,
               a5,
               a6);
    }
    else
    {
      v7 = a3 - a5;
      if ( a3 < a5 )
        a5 = a3;
      v8 = memcmp(a2, a4, a5);
      if ( v8 )
        v7 = v8;
      result = 255LL;
      if ( v7 >= 0 )
        return v7 != 0;
    }
  }
  else
  {
    result = 1LL;
    if ( !a2 )
      return (unsigned int)-(a4 != 0LL);
  }
  return result;
}
