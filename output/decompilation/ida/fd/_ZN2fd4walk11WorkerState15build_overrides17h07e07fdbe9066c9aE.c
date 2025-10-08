__int64 __fastcall fd::walk::WorkerState::build_overrides(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v10; // [rsp+10h] [rbp-128h] BYREF
  __int128 v11; // [rsp+20h] [rbp-118h]
  __int128 v12; // [rsp+30h] [rbp-108h]
  __int64 v13; // [rsp+40h] [rbp-F8h]
  _BYTE v14[64]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v15; // [rsp+90h] [rbp-A8h]
  __int128 v16; // [rsp+A0h] [rbp-98h]
  __int64 v17; // [rsp+B0h] [rbp-88h]
  _BYTE v18[128]; // [rsp+B8h] [rbp-80h] BYREF

  ignore::gitignore::GitignoreBuilder::new(v18, a4);
  if ( a3 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      ignore::overrides::OverrideBuilder::add(&v10, v18, *(_QWORD *)(a2 + v5 + 8), *(_QWORD *)(a2 + v5 + 16));
      if ( (_DWORD)v10 != 9 )
        break;
      v5 += 24LL;
      if ( 24 * a3 == v5 )
        goto LABEL_5;
    }
    *(_QWORD *)&v14[48] = v13;
    *(_OWORD *)&v14[32] = v12;
    *(_OWORD *)&v14[16] = v11;
    *(_OWORD *)v14 = v10;
    *(_QWORD *)(a1 + 8) = fd::walk::WorkerState::build_overrides::{{closure}}(v14);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
LABEL_5:
    ignore::overrides::OverrideBuilder::build(v14, v18);
    if ( __OFSUB__(0LL, *(_QWORD *)v14) )
    {
      v13 = *(_QWORD *)&v14[56];
      v12 = *(_OWORD *)&v14[40];
      v11 = *(_OWORD *)&v14[24];
      v10 = *(_OWORD *)&v14[8];
      *(_QWORD *)(a1 + 8) = fd::walk::WorkerState::build_overrides::{{closure}}(&v10);
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a1 + 96) = v17;
      *(_OWORD *)(a1 + 80) = v16;
      *(_OWORD *)(a1 + 64) = v15;
      v6 = *(_OWORD *)v14;
      v7 = *(_OWORD *)&v14[16];
      v8 = *(_OWORD *)&v14[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v14[48];
      *(_OWORD *)(a1 + 32) = v8;
      *(_OWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = v6;
    }
  }
  return core::ptr::drop_in_place<ignore::overrides::OverrideBuilder>(v18);
}