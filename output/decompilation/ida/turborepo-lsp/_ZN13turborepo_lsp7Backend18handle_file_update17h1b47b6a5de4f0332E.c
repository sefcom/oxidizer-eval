__int64 __fastcall turborepo_lsp::Backend::handle_file_update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        unsigned int a7)
{
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3

  result = a7;
  *(_QWORD *)(a1 + 112) = a2;
  v8 = *(_OWORD *)(a3 + 16);
  v9 = *(_OWORD *)(a3 + 32);
  v10 = *(_OWORD *)(a3 + 48);
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 48) = v10;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a3 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(a1 + 96) = a4;
  *(_BYTE *)(a1 + 104) = a5;
  *(_DWORD *)(a1 + 88) = a6;
  *(_DWORD *)(a1 + 92) = a7;
  *(_BYTE *)(a1 + 328) = 0;
  return result;
}