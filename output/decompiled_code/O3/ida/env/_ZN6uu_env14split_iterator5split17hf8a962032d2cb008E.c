__int64 __fastcall uu_env::split_iterator::split(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int128 v4; // xmm0
  __int64 v5; // rcx
  _BYTE v7[28]; // [rsp+0h] [rbp-B8h]
  int v8; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v9[28]; // [rsp+2Ch] [rbp-8Ch]
  __int64 v10; // [rsp+48h] [rbp-70h]
  _QWORD v11[13]; // [rsp+50h] [rbp-68h] BYREF

  uu_env::split_iterator::SplitIterator::new(v11, a2, a3);
  uu_env::split_iterator::SplitIterator::split((__int64)&v8, (__int64)v11);
  v3 = v8;
  if ( v8 == 8 )
  {
    v4 = *(_OWORD *)&v9[4];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v9[20];
    *(_OWORD *)(a1 + 8) = v4;
  }
  else
  {
    *(_OWORD *)&v7[12] = *(_OWORD *)&v9[12];
    *(_OWORD *)v7 = *(_OWORD *)v9;
    v5 = v10;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v7[12];
    *(_OWORD *)(a1 + 4) = *(_OWORD *)v7;
    *(_QWORD *)(a1 + 32) = v5;
  }
  *(_DWORD *)a1 = v3;
  return a1;
}
