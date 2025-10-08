__int64 __fastcall just::loader::Loader::new(__int64 a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  _OWORD v6[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  _OWORD v8[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+68h] [rbp-10h]

  typed_arena::Arena<T>::new(v6);
  typed_arena::Arena<T>::new(v8);
  *(_QWORD *)(a1 + 48) = v9;
  v1 = v8[0];
  v2 = v8[1];
  *(_OWORD *)(a1 + 32) = v8[2];
  *(_OWORD *)(a1 + 16) = v2;
  *(_OWORD *)a1 = v1;
  v3 = v6[1];
  v4 = v6[2];
  *(_OWORD *)(a1 + 56) = v6[0];
  *(_OWORD *)(a1 + 72) = v3;
  *(_OWORD *)(a1 + 88) = v4;
  *(_QWORD *)(a1 + 104) = v7;
  return a1;
}