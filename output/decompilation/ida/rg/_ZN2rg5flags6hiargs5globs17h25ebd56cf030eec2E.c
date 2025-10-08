__int64 __fastcall rg::flags::hiargs::globs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v16; // [rsp+10h] [rbp-188h] BYREF
  __int128 v17; // [rsp+20h] [rbp-178h]
  __int128 v18; // [rsp+30h] [rbp-168h]
  __int64 v19; // [rsp+40h] [rbp-158h]
  _QWORD *v20; // [rsp+48h] [rbp-150h]
  _BYTE v21[56]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v22; // [rsp+88h] [rbp-110h]
  __int128 v23; // [rsp+90h] [rbp-108h]
  __int128 v24; // [rsp+A0h] [rbp-F8h]
  __int64 v25; // [rsp+B0h] [rbp-E8h]
  _OWORD v26[4]; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+100h] [rbp-98h]
  char v28; // [rsp+108h] [rbp-90h]
  char v29; // [rsp+109h] [rbp-8Fh]
  int v30; // [rsp+10Ah] [rbp-8Eh]
  __int16 v31; // [rsp+10Eh] [rbp-8Ah]
  _OWORD v32[4]; // [rsp+118h] [rbp-80h] BYREF
  __int64 v33; // [rsp+158h] [rbp-40h]
  char v34; // [rsp+160h] [rbp-38h]
  char v35; // [rsp+161h] [rbp-37h]
  int v36; // [rsp+162h] [rbp-36h]
  __int16 v37; // [rsp+166h] [rbp-32h]

  v4 = *(_QWORD *)(a3 + 312);
  if ( v4 || *(_QWORD *)(a3 + 368) )
  {
    ignore::gitignore::GitignoreBuilder::new(v32);
    v35 = 0;
    v26[3] = v32[3];
    v26[2] = v32[2];
    v26[1] = v32[1];
    v26[0] = v32[0];
    v27 = v33;
    v28 = v34;
    v29 = 0;
    v30 = v36;
    v31 = v37;
    if ( *(_BYTE *)(a3 + 562) )
    {
      v28 = 1;
      *(_QWORD *)&v21[8] = v26;
      *(_QWORD *)v21 = 9LL;
      core::result::Result<T,E>::unwrap(v21, &off_3EB1C0);
    }
    v20 = (_QWORD *)a3;
    if ( v4 )
    {
      v5 = v20[38];
      v6 = 0LL;
      while ( 1 )
      {
        ignore::overrides::OverrideBuilder::add(&v16, v26, *(_QWORD *)(v5 + v6 + 8), *(_QWORD *)(v5 + v6 + 16));
        if ( (_QWORD)v16 != 9LL )
          break;
        v6 += 24LL;
        if ( 24 * v4 == v6 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v28 = 1;
      *(_QWORD *)&v21[8] = v26;
      *(_QWORD *)v21 = 9LL;
      core::result::Result<T,E>::unwrap(v21, &off_3EB1D8);
      v7 = v20[46];
      if ( v7 )
      {
        v8 = v20[45];
        v9 = 24 * v7;
        v10 = 0LL;
        while ( 1 )
        {
          ignore::overrides::OverrideBuilder::add(&v16, v26, *(_QWORD *)(v8 + v10 + 8), *(_QWORD *)(v8 + v10 + 16));
          if ( (_QWORD)v16 != 9LL )
            break;
          v10 += 24LL;
          if ( v9 == v10 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        ignore::overrides::OverrideBuilder::build(v21, v26);
        v11 = *(_QWORD *)v21;
        v16 = *(_OWORD *)&v21[8];
        v17 = *(_OWORD *)&v21[24];
        v18 = *(_OWORD *)&v21[40];
        v19 = v22;
        if ( !__OFSUB__(-*(_QWORD *)v21, 1LL) )
        {
          *(_QWORD *)(a1 + 96) = v25;
          v12 = v23;
          *(_OWORD *)(a1 + 80) = v24;
          *(_OWORD *)(a1 + 64) = v12;
          *(_QWORD *)(a1 + 56) = v19;
          v13 = v16;
          v14 = v17;
          *(_OWORD *)(a1 + 40) = v18;
          *(_OWORD *)(a1 + 24) = v14;
          *(_OWORD *)(a1 + 8) = v13;
          *(_QWORD *)a1 = v11;
          return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(v26);
        }
      }
    }
    *(_QWORD *)&v21[48] = v19;
    *(_OWORD *)&v21[32] = v18;
    *(_OWORD *)&v21[16] = v17;
    *(_OWORD *)v21 = v16;
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(v26);
  }
  return ignore::overrides::Override::empty();
}