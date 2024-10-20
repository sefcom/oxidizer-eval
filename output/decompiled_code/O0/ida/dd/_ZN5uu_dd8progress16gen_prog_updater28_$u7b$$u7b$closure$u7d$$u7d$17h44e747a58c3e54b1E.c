__int64 __fastcall uu_dd::progress::gen_prog_updater::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 v4; // rsi
  __int64 result; // rax
  __m128i *v6; // rax
  __m128i *v7; // rax
  void *v8; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v10[20]; // [rsp+18h] [rbp-F0h]
  __int128 v11; // [rsp+2Ch] [rbp-DCh]
  __int128 v12; // [rsp+3Ch] [rbp-CCh]
  __int128 v13; // [rsp+4Ch] [rbp-BCh]
  __int128 v14; // [rsp+5Ch] [rbp-ACh]
  unsigned int v15; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  int v17; // [rsp+78h] [rbp-90h]
  __int128 v18; // [rsp+7Ch] [rbp-8Ch]
  __int128 v19; // [rsp+8Ch] [rbp-7Ch]
  __int128 v20; // [rsp+9Ch] [rbp-6Ch]
  __int128 v21; // [rsp+ACh] [rbp-5Ch]
  __int128 v22; // [rsp+BCh] [rbp-4Ch]
  unsigned int v23; // [rsp+CCh] [rbp-3Ch]

  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)a1 == 1LL )
        std::sync::mpmc::list::Channel<T>::recv(&v9, v4, a3, 1000000000LL);
      else
        std::sync::mpmc::zero::Channel<T>::recv(&v9, v4, a3, 1000000000LL);
    }
    else
    {
      std::sync::mpmc::array::Channel<T>::recv(&v9, v4, a3, 1000000000LL);
    }
    result = *(unsigned int *)v10;
    if ( *(_DWORD *)v10 == 1000000000 )
      break;
    a3 = v15;
    v23 = v15;
    v22 = v14;
    v21 = v13;
    v20 = v12;
    v19 = v11;
    v18 = *(_OWORD *)&v10[4];
    v16 = v9;
    v17 = *(_DWORD *)v10;
    if ( BYTE4(v14) )
    {
      if ( BYTE4(v14) != 1 )
        return uu_dd::progress::ProgUpdate::print_final_stats(&v16, *(_DWORD *)(a1 + 16), v3 & 1);
      v8 = &std::io::stdio::stderr::INSTANCE;
      v7 = uu_dd::progress::ProgUpdate::write_transfer_stats(&v16, (__int64)&v8, v3 & 1);
      if ( v7 )
      {
        v9 = (unsigned __int64)v7;
        *(_QWORD *)v10 = a3;
        core::result::unwrap_failed(
          anon_bff3183e4c196cdaa7c150408020b06b_10_llvm_10102786401241998662,
          43LL,
          &v9,
          &anon_bff3183e4c196cdaa7c150408020b06b_11_llvm_10102786401241998662,
          &anon_bff3183e4c196cdaa7c150408020b06b_86_llvm_10102786401241998662);
      }
      v3 = 0;
    }
    else if ( !*(_BYTE *)(a1 + 16) )
    {
      v8 = &std::io::stdio::stderr::INSTANCE;
      v6 = uu_dd::progress::ProgUpdate::write_prog_line(&v16, (__int64)&v8, 1);
      if ( v6 )
      {
        v9 = (unsigned __int64)v6;
        *(_QWORD *)v10 = a3;
        core::result::unwrap_failed(
          anon_bff3183e4c196cdaa7c150408020b06b_10_llvm_10102786401241998662,
          43LL,
          &v9,
          &anon_bff3183e4c196cdaa7c150408020b06b_11_llvm_10102786401241998662,
          &anon_bff3183e4c196cdaa7c150408020b06b_85_llvm_10102786401241998662);
      }
      v3 = 1;
    }
  }
  return result;
}
