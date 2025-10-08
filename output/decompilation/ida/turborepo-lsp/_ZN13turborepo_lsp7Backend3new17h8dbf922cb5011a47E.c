__int64 __fastcall turborepo_lsp::Backend::new(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // rdx
  __int64 v10; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-1C0h]
  __int64 v12; // [rsp+20h] [rbp-1B8h]
  __int64 v13; // [rsp+28h] [rbp-1B0h]
  __int64 v14; // [rsp+30h] [rbp-1A8h]
  __int64 v15; // [rsp+38h] [rbp-1A0h]
  _BYTE v16[385]; // [rsp+40h] [rbp-198h] BYREF

  *(_QWORD *)v16 = 2LL;
  tokio::sync::watch::channel(&v10, v16);
  v2 = v10;
  v3 = v11;
  v4 = v12;
  v14 = v11;
  v15 = v12;
  v13 = a2;
  *(_QWORD *)v16 = 1LL;
  *(_QWORD *)&v16[8] = 1LL;
  *(_DWORD *)&v16[16] = 0;
  v16[20] = 0;
  *(_QWORD *)&v16[24] = 0x8000000000000000LL;
  v5 = alloc::boxed::Box<T>::new(v16);
  v10 = v5;
  v6 = std::thread::local::LocalKey<T>::with();
  *(_OWORD *)&v16[19] = xmmword_9269A8;
  *(_OWORD *)&v16[3] = *(_OWORD *)&off_926998;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  v7 = *(_OWORD *)&v16[16];
  *(_OWORD *)(a1 + 45) = *(_OWORD *)v16;
  *(_OWORD *)(a1 + 61) = v7;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)&v16[31];
  *(_QWORD *)(a1 + 80) = v6;
  *(_QWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 32) = v4;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 104) = 0x8000000000000000LL;
  return a1;
}