__int64 __fastcall bat::syntax_mapping::make_glob_matcher(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _BYTE v9[80]; // [rsp+0h] [rbp-108h] BYREF
  __int128 v10; // [rsp+50h] [rbp-B8h]
  __int128 v11; // [rsp+60h] [rbp-A8h]
  __int128 v12; // [rsp+70h] [rbp-98h]
  __int128 v13; // [rsp+80h] [rbp-88h]
  _QWORD v14[2]; // [rsp+98h] [rbp-70h] BYREF
  int v15; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+B8h] [rbp-50h]
  __int128 v18; // [rsp+C8h] [rbp-40h]
  __int128 v19; // [rsp+D8h] [rbp-30h]
  __int128 v20; // [rsp+E8h] [rbp-20h]
  __int64 v21; // [rsp+F8h] [rbp-10h]

  v14[0] = a2;
  v14[1] = a3;
  v15 = 65793;
  globset::glob::GlobBuilder::build(v9, v14);
  v11 = *(_OWORD *)&v9[8];
  v12 = *(_OWORD *)&v9[24];
  v13 = *(_OWORD *)&v9[40];
  if ( __OFSUB__(-*(_QWORD *)v9, 1LL) )
  {
    result = 0x8000000000000000LL;
    *(_OWORD *)&v9[39] = v13;
    *(_OWORD *)&v9[23] = v12;
    *(_OWORD *)&v9[7] = v11;
    *(_BYTE *)(a1 + 8) = 5;
    v4 = *(_OWORD *)&v9[16];
    v5 = *(_OWORD *)&v9[32];
    *(_OWORD *)(a1 + 9) = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 25) = v4;
    *(_OWORD *)(a1 + 41) = v5;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v9[47];
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v21 = *(_QWORD *)&v9[72];
    v20 = *(_OWORD *)&v9[56];
    v17 = v11;
    v18 = v12;
    v19 = v13;
    v16 = *(_QWORD *)v9;
    globset::glob::Glob::compile_matcher(v9, &v16);
    result = core::ptr::drop_in_place<globset::glob::Glob>(&v16);
    *(_OWORD *)(a1 + 80) = v10;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v9[64];
    v6 = *(_OWORD *)v9;
    v7 = *(_OWORD *)&v9[16];
    v8 = *(_OWORD *)&v9[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v9[48];
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
  return result;
}