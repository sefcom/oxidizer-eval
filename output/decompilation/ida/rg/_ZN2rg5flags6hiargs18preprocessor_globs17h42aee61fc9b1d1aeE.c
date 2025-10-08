__int64 __fastcall rg::flags::hiargs::preprocessor_globs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // [rsp+10h] [rbp-188h] BYREF
  __int128 v13; // [rsp+20h] [rbp-178h]
  __int128 v14; // [rsp+30h] [rbp-168h]
  __int64 v15; // [rsp+40h] [rbp-158h]
  _BYTE v16[56]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v17; // [rsp+88h] [rbp-110h]
  __int128 v18; // [rsp+90h] [rbp-108h]
  __int128 v19; // [rsp+A0h] [rbp-F8h]
  __int64 v20; // [rsp+B0h] [rbp-E8h]
  _OWORD v21[4]; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+100h] [rbp-98h]
  char v23; // [rsp+108h] [rbp-90h]
  char v24; // [rsp+109h] [rbp-8Fh]
  int v25; // [rsp+10Ah] [rbp-8Eh]
  __int16 v26; // [rsp+10Eh] [rbp-8Ah]
  _OWORD v27[4]; // [rsp+118h] [rbp-80h] BYREF
  __int64 v28; // [rsp+158h] [rbp-40h]
  char v29; // [rsp+160h] [rbp-38h]
  char v30; // [rsp+161h] [rbp-37h]
  int v31; // [rsp+162h] [rbp-36h]
  __int16 v32; // [rsp+166h] [rbp-32h]

  if ( !a4 )
    return ignore::overrides::Override::empty();
  ignore::gitignore::GitignoreBuilder::new(v27);
  v30 = 0;
  v21[0] = v27[0];
  v21[1] = v27[1];
  v21[2] = v27[2];
  v21[3] = v27[3];
  v22 = v28;
  v23 = v29;
  v24 = 0;
  v25 = v31;
  v26 = v32;
  v6 = 0LL;
  do
  {
    ignore::overrides::OverrideBuilder::add(&v12, v21, *(_QWORD *)(a3 + v6 + 8), *(_QWORD *)(a3 + v6 + 16));
    if ( (_QWORD)v12 != 9LL )
      goto LABEL_6;
    v6 += 24LL;
  }
  while ( 24 * a4 != v6 );
  ignore::overrides::OverrideBuilder::build(v16, v21);
  v7 = *(_QWORD *)v16;
  v12 = *(_OWORD *)&v16[8];
  v13 = *(_OWORD *)&v16[24];
  v14 = *(_OWORD *)&v16[40];
  v15 = v17;
  if ( __OFSUB__(-*(_QWORD *)v16, 1LL) )
  {
LABEL_6:
    *(_QWORD *)&v16[48] = v15;
    *(_OWORD *)&v16[32] = v14;
    *(_OWORD *)&v16[16] = v13;
    *(_OWORD *)v16 = v12;
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v16);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(v21);
  }
  *(_QWORD *)(a1 + 96) = v20;
  v9 = v18;
  *(_OWORD *)(a1 + 80) = v19;
  *(_OWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 56) = v15;
  v10 = v12;
  v11 = v13;
  *(_OWORD *)(a1 + 40) = v14;
  *(_OWORD *)(a1 + 24) = v11;
  *(_OWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = v7;
  return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(v21);
}