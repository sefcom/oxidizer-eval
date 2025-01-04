__int64 __fastcall uu_join::Input<Sep>::compare(char a1, const void *a2, size_t a3, const void *a4, size_t a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // eax
  _QWORD v8[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-18h] BYREF

  if ( a2 && a4 )
  {
    if ( a1 )
    {
      v8[0] = a2;
      v8[1] = a3;
      v9[0] = a4;
      v9[1] = a5;
      return ((__int64 (__fastcall *)(_QWORD *, _QWORD *))<uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp)(
               v8,
               v9);
    }
    else
    {
      v6 = a3 - a5;
      if ( a3 < a5 )
        a5 = a3;
      v7 = memcmp(a2, a4, a5);
      if ( v7 )
        v6 = v7;
      result = 255LL;
      if ( v6 >= 0 )
        return v6 != 0;
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
