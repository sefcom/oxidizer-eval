__int64 __fastcall forc_tx::<impl core::convert::TryFrom<forc_tx::Transaction> for fuel_tx::transaction::Transaction>::try_from(
        __int64 a1,
        _DWORD *a2)
{
  const void *v3; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int128 v7; // [rsp+0h] [rbp-718h]
  __int128 v8; // [rsp+0h] [rbp-718h]
  __int128 v9; // [rsp+10h] [rbp-708h]
  __int128 v10; // [rsp+30h] [rbp-6E8h]
  __int128 v11; // [rsp+40h] [rbp-6D8h]
  __int64 v12; // [rsp+50h] [rbp-6C8h]
  __int128 v13; // [rsp+60h] [rbp-6B8h]
  __int128 v14; // [rsp+70h] [rbp-6A8h]
  __int128 v15; // [rsp+80h] [rbp-698h]
  __int64 v16; // [rsp+90h] [rbp-688h]
  unsigned __int64 v17; // [rsp+A0h] [rbp-678h] BYREF
  _BYTE v18[40]; // [rsp+A8h] [rbp-670h]
  _BYTE src[384]; // [rsp+D0h] [rbp-648h] BYREF
  __int128 v20; // [rsp+250h] [rbp-4C8h]
  __int128 v21; // [rsp+260h] [rbp-4B8h]
  _QWORD v22[48]; // [rsp+270h] [rbp-4A8h] BYREF
  _BYTE v23[320]; // [rsp+3F8h] [rbp-320h] BYREF
  _BYTE v24[224]; // [rsp+538h] [rbp-1E0h] BYREF
  _BYTE dest[224]; // [rsp+618h] [rbp-100h] BYREF

  v3 = a2 + 2;
  if ( *a2 != 1 )
  {
    memcpy(v24, v3, sizeof(v24));
    forc_tx::<impl core::convert::TryFrom<forc_tx::Create> for fuel_tx::transaction::types::chargeable_transaction::ChargeableTransaction<fuel_tx::transaction::types::create::CreateBody,fuel_tx::transaction::types::create::CreateMetadata>>::try_from(&v17);
    v5 = v17;
    v4 = *(_QWORD *)v18;
    v8 = *(_OWORD *)&v18[8];
    if ( v17 == 0x8000000000000000LL )
    {
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v18[24];
      *(_OWORD *)(a1 + 24) = v8;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v4;
      goto LABEL_6;
    }
    memcpy(v22, src, sizeof(v22));
    v20 = *(_OWORD *)&v18[8];
    v21 = *(_OWORD *)&v18[24];
    v10 = *(_OWORD *)&v18[8];
    v11 = *(_OWORD *)&v18[24];
    v12 = v22[0];
    memcpy(v23, &v22[1], sizeof(v23));
    v13 = *(_OWORD *)&v22[41];
    v14 = *(_OWORD *)&v22[43];
    v15 = *(_OWORD *)&v22[45];
    v16 = v22[47];
LABEL_9:
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v4;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 48) = v12;
    memcpy((void *)(a1 + 56), v23, 0x140uLL);
    *(_OWORD *)(a1 + 376) = v13;
    *(_OWORD *)(a1 + 392) = v14;
    *(_OWORD *)(a1 + 408) = v15;
    *(_QWORD *)(a1 + 424) = v16;
    return a1;
  }
  memcpy(dest, v3, sizeof(dest));
  forc_tx::<impl core::convert::TryFrom<forc_tx::Script> for fuel_tx::transaction::types::chargeable_transaction::ChargeableTransaction<fuel_tx::transaction::types::script::ScriptBody,fuel_tx::transaction::types::script::ScriptMetadata>>::try_from(&v17);
  v4 = v17;
  v7 = *(_OWORD *)v18;
  v9 = *(_OWORD *)&v18[16];
  if ( v17 != 0x8000000000000000LL )
  {
    memcpy(v23, src, sizeof(v23));
    v10 = *(_OWORD *)v18;
    v11 = *(_OWORD *)&v18[16];
    v12 = *(_QWORD *)&v18[32];
    v5 = 0x8000000000000000LL;
    goto LABEL_9;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&v18[32];
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 8) = 1LL;
LABEL_6:
  *(_QWORD *)a1 = 0x8000000000000006LL;
  return a1;
}