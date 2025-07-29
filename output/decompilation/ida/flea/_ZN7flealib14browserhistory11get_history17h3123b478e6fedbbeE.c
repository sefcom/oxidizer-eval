__int64 __fastcall flealib::browserhistory::get_history(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // kr00_16
  __int64 v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm0
  _BYTE v17[24]; // [rsp+8h] [rbp-190h] BYREF
  __int128 v18; // [rsp+20h] [rbp-178h]
  __int128 v19; // [rsp+30h] [rbp-168h]
  __int128 v20; // [rsp+40h] [rbp-158h]
  __int128 v21; // [rsp+50h] [rbp-148h]
  __int128 v22; // [rsp+60h] [rbp-138h]
  __int128 v23; // [rsp+70h] [rbp-128h]
  __int128 v24; // [rsp+80h] [rbp-118h]
  __int128 v25; // [rsp+90h] [rbp-108h]
  __int128 v26; // [rsp+A0h] [rbp-F8h]
  _BYTE v27[80]; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+100h] [rbp-98h]
  _OWORD v29[8]; // [rsp+110h] [rbp-88h] BYREF

  result = rusqlite::Connection::open_with_flags(v17);
  if ( (v17[0] & 1) != 0 )
  {
    v8 = *(_OWORD *)&v17[8];
    v9 = v18;
    v10 = v19;
    *(_OWORD *)&v27[48] = v20;
    *(_OWORD *)&v27[32] = v19;
    *(_OWORD *)&v27[16] = v18;
    *(_OWORD *)v27 = *(_OWORD *)&v17[8];
    *(_OWORD *)(a1 + 48) = v20;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  else
  {
    v28 = v22;
    *(_OWORD *)&v27[64] = v21;
    *(_OWORD *)&v27[48] = v20;
    v29[0] = *(_OWORD *)&v17[8];
    v29[1] = v18;
    v29[2] = v19;
    v29[3] = v20;
    v29[4] = v21;
    v29[5] = v22;
    rusqlite::Connection::prepare_with_flags(v17, v29, a4, a5);
    v23 = *(_OWORD *)&v17[8];
    v24 = v18;
    v25 = v19;
    v26 = v20;
    if ( *(_QWORD *)v17 )
    {
      *(_OWORD *)&v27[56] = v26;
      *(_OWORD *)&v27[40] = v25;
      *(_OWORD *)&v27[24] = v24;
      *(_OWORD *)&v27[8] = v23;
      *(_QWORD *)v27 = *(_QWORD *)v17;
      rusqlite::statement::Statement::query_map(v17, v27);
      v11 = *(_OWORD *)v17;
      v12 = *(_QWORD *)&v17[16];
      if ( *(_QWORD *)v17 == 0x8000000000000012LL )
      {
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)&v17[8] = 8LL;
        *(_QWORD *)&v17[16] = 0LL;
        core::iter::traits::iterator::Iterator::fold(*((_QWORD *)&v11 + 1), v12, v17);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v17[16];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v17;
        *(_QWORD *)a1 = 0x8000000000000012LL;
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v20;
        v16 = v18;
        *(_OWORD *)(a1 + 40) = v19;
        *(_OWORD *)(a1 + 24) = v16;
        *(_OWORD *)a1 = v11;
        *(_QWORD *)(a1 + 16) = v12;
      }
      core::ptr::drop_in_place<rusqlite::statement::Statement>(v27);
    }
    else
    {
      v13 = v23;
      v14 = v24;
      v15 = v25;
      *(_OWORD *)(a1 + 48) = v26;
      *(_OWORD *)(a1 + 32) = v15;
      *(_OWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
    }
    return core::ptr::drop_in_place<rusqlite::Connection>(v29);
  }
  return result;
}