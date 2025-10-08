__int64 __fastcall rg::flags::hiargs::types(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v12; // [rsp+0h] [rbp-138h] BYREF
  __int128 v13; // [rsp+10h] [rbp-128h]
  __int128 v14; // [rsp+20h] [rbp-118h]
  __int64 v15; // [rsp+30h] [rbp-108h]
  _BYTE v16[56]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+78h] [rbp-C0h]
  __int128 v18; // [rsp+80h] [rbp-B8h]
  __int128 v19; // [rsp+90h] [rbp-A8h]
  __int128 v20; // [rsp+A0h] [rbp-98h]
  __int64 v21; // [rsp+B0h] [rbp-88h]
  _BYTE v22[120]; // [rsp+C0h] [rbp-78h] BYREF

  ignore::types::TypesBuilder::new(v22);
  ignore::types::TypesBuilder::add_defaults(v22);
  if ( a3 )
  {
    v4 = 32 * a3;
    v5 = 0LL;
    while ( 2 )
    {
      switch ( *(_QWORD *)(a2 + v5) )
      {
        case 0LL:
          ignore::types::TypesBuilder::clear(v22, *(_QWORD *)(a2 + v5 + 16), *(_QWORD *)(a2 + v5 + 24));
          goto LABEL_4;
        case 1LL:
          ignore::types::TypesBuilder::add_def(&v12, v22, *(_QWORD *)(a2 + v5 + 16), *(_QWORD *)(a2 + v5 + 24));
          if ( (_DWORD)v12 == 9 )
            goto LABEL_4;
          *(_QWORD *)&v16[48] = v15;
          *(_OWORD *)&v16[32] = v14;
          *(_OWORD *)&v16[16] = v13;
          *(_OWORD *)v16 = v12;
          *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v16);
          v6 = 0x8000000000000000LL;
          goto LABEL_13;
        case 2LL:
          ignore::types::TypesBuilder::select(v22, *(_QWORD *)(a2 + v5 + 16), *(_QWORD *)(a2 + v5 + 24));
          goto LABEL_4;
        case 3LL:
          ignore::types::TypesBuilder::negate(v22, *(_QWORD *)(a2 + v5 + 16), *(_QWORD *)(a2 + v5 + 24));
LABEL_4:
          v5 += 32LL;
          if ( v4 != v5 )
            continue;
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  ignore::types::TypesBuilder::build(v16, v22);
  v6 = *(_QWORD *)v16;
  v12 = *(_OWORD *)&v16[8];
  v13 = *(_OWORD *)&v16[24];
  v14 = *(_OWORD *)&v16[40];
  v15 = v17;
  if ( __OFSUB__(-*(_QWORD *)v16, 1LL) )
  {
    *(_QWORD *)&v16[48] = v15;
    *(_OWORD *)&v16[32] = v14;
    *(_OWORD *)&v16[16] = v13;
    *(_OWORD *)v16 = v12;
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v16);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    *(_QWORD *)(a1 + 112) = v21;
    v7 = v18;
    v8 = v19;
    *(_OWORD *)(a1 + 96) = v20;
    *(_OWORD *)(a1 + 80) = v8;
    *(_OWORD *)(a1 + 64) = v7;
    *(_QWORD *)(a1 + 56) = v15;
    v9 = v12;
    v10 = v13;
    *(_OWORD *)(a1 + 40) = v14;
    *(_OWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
LABEL_13:
    *(_QWORD *)a1 = v6;
  }
  return core::ptr::drop_in_place<ignore::types::TypesBuilder>(v22);
}