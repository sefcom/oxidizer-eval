__int64 __fastcall uu_stat::Stater::default_format(__int64 a1, int a2, char a3, char a4)
{
  bool v5; // zf
  __int64 v6; // rcx
  const char *v7; // rdx
  _QWORD v8[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( a2 )
  {
    if ( a3 )
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aNILTSSBFACD, 33LL);
    else
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aFileNId8iNamel, 171LL);
  }
  else if ( a3 )
  {
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aNSBFUGDIHTTXYZ, 48LL);
  }
  else
  {
    v5 = a4 == 0;
    v6 = 40LL;
    if ( !v5 )
      v6 = 61LL;
    v7 = aDeviceDhDdInod;
    if ( !v5 )
      v7 = (const char *)&unk_1D873;
    v8[0] = aFileNSize10sBl;
    v8[1] = 57LL;
    v8[2] = v7;
    v8[3] = v6;
    v8[4] = aAccess04a1010a;
    v8[5] = 56LL;
    v8[6] = aAccessXModifyY;
    v8[7] = 44LL;
    return alloc::str::join_generic_copy(a1, v8);
  }
}