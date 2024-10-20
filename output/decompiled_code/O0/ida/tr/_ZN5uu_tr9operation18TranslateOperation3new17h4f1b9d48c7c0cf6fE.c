__int64 __fastcall uu_tr::operation::TranslateOperation::new(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 *v15; // rax
  __int128 v16; // xmm0
  char v18; // [rsp+Fh] [rbp-A9h] BYREF
  _QWORD v19[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+30h] [rbp-88h]
  __int64 v21; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  char v26; // [rsp+68h] [rbp-50h]
  char v27; // [rsp+69h] [rbp-4Fh]
  _OWORD v28[4]; // [rsp+70h] [rbp-48h] BYREF

  v3 = a3[1];
  if ( !v3 || (v5 = a3[2], v5 < 0) )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  if ( v5 )
  {
    v8 = *(_BYTE *)(v3 + v5 - 1);
    v9 = *a2;
    v10 = a2[1];
    v11 = v10 + a2[2];
    v12 = *a3;
    v19[0] = v10;
    v19[1] = v10;
    v19[2] = v9;
    v19[3] = v11;
    v22 = v3;
    v23 = v3;
    v24 = v12;
    v25 = v3 + v5;
    v26 = 1;
    v27 = v8;
    v20 = 0LL;
    v21 = 0LL;
    <std::collections::hash::map::HashMap<K,V,S> as core::iter::traits::collect::FromIterator<(K,V)>>::from_iter(
      v28,
      v19);
    v13 = v28[0];
    v14 = v28[1];
    *(_OWORD *)(a1 + 32) = v28[2];
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
  }
  else
  {
    if ( a2[2] )
    {
      *(_QWORD *)(a1 + 8) = 0x8000000000000005LL;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v15 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
      if ( !v15 )
        core::result::unwrap_failed(
          anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
          70LL,
          &v18,
          &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
          &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
      v16 = *v15;
      ++*(_QWORD *)v15;
      *(_OWORD *)(a1 + 16) = xmmword_11DE38;
      *(_OWORD *)a1 = *(_OWORD *)&anon_55d3466f48abaacbb63d7f4ae7ef6f21_3_llvm_17282306131012653654;
      *(_OWORD *)(a1 + 32) = v16;
    }
    if ( *a3 )
      _rust_dealloc(a3[1], *a3, 1LL);
    if ( *a2 )
      _rust_dealloc(a2[1], *a2, 1LL);
  }
  return a1;
}
