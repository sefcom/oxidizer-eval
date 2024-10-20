__int64 __fastcall uu_tr::operation::SqueezeOperation::new(__int64 a1, _QWORD *a2)
{
  __int128 v2; // rax
  __int128 *v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v8; // [rsp+0h] [rbp-B8h]
  __int128 v9; // [rsp+10h] [rbp-A8h]
  __int128 v10; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+40h] [rbp-78h]
  _OWORD v13[6]; // [rsp+50h] [rbp-68h] BYREF

  *(_QWORD *)&v2 = *a2;
  *((_QWORD *)&v2 + 1) = a2[1] + a2[2];
  *(_QWORD *)&v8 = a2[1];
  v9 = v2;
  *((_QWORD *)&v8 + 1) = v8;
  v3 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v3 )
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      &v10,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  v4 = *v3;
  ++*(_QWORD *)v3;
  v11 = xmmword_11E078;
  v10 = *(_OWORD *)&anon_de0afba102438efbad5a2750be1fb738_3_llvm_1527013734017536117;
  v12 = v4;
  v13[1] = v9;
  v13[0] = v8;
  <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::Extend<(K,V)>>::extend(&v10, v13);
  v5 = v10;
  v6 = v11;
  v13[2] = v10;
  v13[3] = v11;
  v13[4] = v12;
  *(_OWORD *)(a1 + 32) = v12;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}
