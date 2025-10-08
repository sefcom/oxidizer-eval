__int64 __fastcall uu_env::split_iterator::split(__int64 a1)
{
  int v1; // eax
  __int128 v2; // xmm0
  __int64 v3; // rcx
  int v5; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v6[28]; // [rsp+Ch] [rbp-8Ch]
  __int64 v7; // [rsp+28h] [rbp-70h]
  _BYTE v8[84]; // [rsp+30h] [rbp-68h] BYREF

  uu_env::split_iterator::SplitIterator::new(v8);
  uu_env::split_iterator::SplitIterator::split((__int64)&v5, (__int64)v8);
  v1 = v5;
  if ( v5 == 12 )
  {
    *(_QWORD *)&v8[20] = *(_QWORD *)&v6[20];
    v2 = *(_OWORD *)&v6[4];
    *(_OWORD *)&v8[4] = *(_OWORD *)&v6[4];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v6[20];
    *(_OWORD *)(a1 + 8) = v2;
  }
  else
  {
    *(_OWORD *)&v8[12] = *(_OWORD *)&v6[12];
    *(_OWORD *)v8 = *(_OWORD *)v6;
    v3 = v7;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[12];
    *(_OWORD *)(a1 + 4) = *(_OWORD *)v8;
    *(_QWORD *)(a1 + 32) = v3;
  }
  *(_DWORD *)a1 = v1;
  return a1;
}