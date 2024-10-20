char __fastcall uu_join::Input<Sep>::compare(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v7[2]; // [rsp+78h] [rbp-20h] BYREF
  _QWORD v8[2]; // [rsp+88h] [rbp-10h] BYREF

  if ( a2 != 0 && a4 != 0 )
  {
    if ( (*a1 & 1) != 0 )
    {
      v7[0] = a2;
      v7[1] = a3;
      v8[0] = a4;
      v8[1] = a5;
      return <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(v7, v8);
    }
    else
    {
      return core::slice::cmp::<impl core::cmp::Ord for [T]>::cmp(a2, a3, a4, a5);
    }
  }
  else if ( a2 )
  {
    return 1;
  }
  else if ( a4 )
  {
    return -1;
  }
  else
  {
    return 0;
  }
}
