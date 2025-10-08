char __fastcall uu_join::Input<Sep>::compare(char a1, const void *a2, size_t a3, const void *a4, size_t a5)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  _QWORD v9[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  if ( a4 != 0LL && a2 != 0LL )
  {
    if ( (a1 & 1) != 0 )
    {
      v9[0] = a2;
      v9[1] = a3;
      v10[0] = a4;
      v10[1] = a5;
      LOBYTE(v5) = ((__int64 (__fastcall *)(_QWORD *, _QWORD *))<uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp)(
                     v9,
                     v10);
    }
    else
    {
      v6 = a3 - a5;
      if ( a3 < a5 )
        a5 = a3;
      v7 = memcmp(a2, a4, a5);
      if ( v7 )
        v6 = v7;
      LOBYTE(v5) = (v6 > 0) - (v6 < 0);
    }
  }
  else
  {
    LOBYTE(v5) = 1;
    if ( !a2 )
      return -(a4 != 0LL);
  }
  return v5;
}