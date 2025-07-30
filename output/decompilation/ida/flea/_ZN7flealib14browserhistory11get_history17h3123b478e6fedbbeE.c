__int64 __fastcall flealib::browserhistory::get_history(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm0
  _BYTE v19[24]; // [rsp+8h] [rbp-190h] BYREF
  __int128 v20; // [rsp+20h] [rbp-178h]
  __int128 v21; // [rsp+30h] [rbp-168h]
  __int128 v22; // [rsp+40h] [rbp-158h]
  __int128 v23; // [rsp+50h] [rbp-148h]
  __int128 v24; // [rsp+60h] [rbp-138h]
  __int128 v25; // [rsp+70h] [rbp-128h]
  __int128 v26; // [rsp+80h] [rbp-118h]
  __int128 v27; // [rsp+90h] [rbp-108h]
  __int128 v28; // [rsp+A0h] [rbp-F8h]
  _BYTE v29[80]; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+100h] [rbp-98h]
  _OWORD v31[8]; // [rsp+110h] [rbp-88h] BYREF

  result = rusqlite::Connection::open_with_flags(v19);
  if ( (v19[0] & 1) != 0 )
  {
    v9 = *(_OWORD *)&v19[8];
    v10 = v20;
    v11 = v21;
    *(_OWORD *)&v29[48] = v22;
    *(_OWORD *)&v29[32] = v21;
    *(_OWORD *)&v29[16] = v20;
    *(_OWORD *)v29 = *(_OWORD *)&v19[8];
    *(_OWORD *)(a1 + 48) = v22;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
  }
  else
  {
    v30 = v24;
    *(_OWORD *)&v29[64] = v23;
    *(_OWORD *)&v29[48] = v22;
    v31[0] = *(_OWORD *)&v19[8];
    v31[1] = v20;
    v31[2] = v21;
    v31[3] = v22;
    v31[4] = v23;
    v31[5] = v24;
    rusqlite::Connection::prepare_with_flags(v19, v31, a4, a5);
    v25 = *(_OWORD *)&v19[8];
    v26 = v20;
    v27 = v21;
    v28 = v22;
    if ( *(_QWORD *)v19 )
    {
      *(_OWORD *)&v29[56] = v28;
      *(_OWORD *)&v29[40] = v27;
      *(_OWORD *)&v29[24] = v26;
      *(_OWORD *)&v29[8] = v25;
      *(_QWORD *)v29 = *(_QWORD *)v19;
      rusqlite::statement::Statement::query_map(v19, v29);
      v12 = *(_QWORD *)v19;
      v13 = *(_QWORD *)&v19[8];
      v14 = *(_QWORD *)&v19[16];
      if ( *(_QWORD *)v19 == 0x8000000000000012LL )
      {
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)&v19[8] = 8LL;
        *(_QWORD *)&v19[16] = 0LL;
        core::iter::traits::iterator::Iterator::fold(v13, v14, v19);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v19[16];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v19;
        *(_QWORD *)a1 = 0x8000000000000012LL;
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v22;
        v18 = v20;
        *(_OWORD *)(a1 + 40) = v21;
        *(_OWORD *)(a1 + 24) = v18;
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = v13;
        *(_QWORD *)(a1 + 16) = v14;
      }
      core::ptr::drop_in_place<rusqlite::statement::Statement>(v29);
    }
    else
    {
      v15 = v25;
      v16 = v26;
      v17 = v27;
      *(_OWORD *)(a1 + 48) = v28;
      *(_OWORD *)(a1 + 32) = v17;
      *(_OWORD *)(a1 + 16) = v16;
      *(_OWORD *)a1 = v15;
    }
    return core::ptr::drop_in_place<rusqlite::Connection>(v31);
  }
  return result;
}