__int64 __fastcall forc_crypto::keys::vanity::generate_wallet(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int8 v3; // al
  unsigned __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  __int64 v11; // [rsp+8h] [rbp-150h] BYREF
  _BYTE v12[24]; // [rsp+10h] [rbp-148h]
  _BYTE v13[24]; // [rsp+30h] [rbp-128h] BYREF
  __m256i v14; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v15[64]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+B0h] [rbp-A8h]
  __int64 v17; // [rsp+C0h] [rbp-98h]
  __m256i v18; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v19; // [rsp+F0h] [rbp-68h]
  __int128 v20; // [rsp+100h] [rbp-58h]
  __m256i v21; // [rsp+110h] [rbp-48h] BYREF
  __int128 v22; // [rsp+130h] [rbp-28h]

  v2 = rand::rngs::thread::thread_rng();
  v11 = v2;
  if ( !a2 )
  {
    secp256k1::key::SecretKey::new(v15, &v11);
    <fuel_crypto::secp256::secret::SecretKey as core::convert::From<secp256k1::key::SecretKey>>::from(&v18, v15);
    v3 = v18.m256i_i8[0];
    *(_OWORD *)v14.m256i_i8 = *(_OWORD *)&v18.m256i_i8[1];
    *(_OWORD *)((char *)&v14.m256i_u64[1] + 7) = *(_OWORD *)&v18.m256i_u64[2];
    v4 = 0x8000000000000000LL;
LABEL_6:
    v21.m256i_i8[0] = v3;
    *(_OWORD *)&v21.m256i_i8[1] = *(_OWORD *)v14.m256i_i8;
    *(_OWORD *)&v21.m256i_u64[2] = *(_OWORD *)((char *)&v14.m256i_u64[1] + 7);
    *(_QWORD *)v12 = v4;
    *(_OWORD *)&v12[8] = v22;
    <fuel_crypto::secp256::public::PublicKey as core::convert::From<&fuel_crypto::secp256::secret::SecretKey>>::from(
      &v18,
      &v21);
    fuel_crypto::secp256::public::PublicKey::hash(&v14, &v18);
    v5 = *(_OWORD *)v14.m256i_i8;
    v6 = *(_OWORD *)&v14.m256i_u64[2];
    *(__m256i *)v15 = v14;
    v7 = *(_OWORD *)v12;
    v16 = *(_OWORD *)v12;
    v17 = *(_QWORD *)&v12[16];
    v8 = *(_OWORD *)v21.m256i_i8;
    v9 = *(_OWORD *)&v21.m256i_u64[2];
    *(__m256i *)&v15[32] = v21;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v12[16];
    *(_OWORD *)(a1 + 64) = v7;
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    goto LABEL_8;
  }
  fuels_accounts::signers::private_key::generate_mnemonic_phrase(&v18, v2);
  *(_OWORD *)v12 = *(_OWORD *)&v18.m256i_u64[1];
  *(_QWORD *)&v12[16] = v18.m256i_i64[3];
  if ( v18.m256i_i64[0] != 12 )
  {
    *(_OWORD *)&v15[48] = v20;
    *(_OWORD *)&v15[32] = v19;
    *(_OWORD *)&v15[8] = *(_OWORD *)v12;
    *(_QWORD *)&v15[24] = *(_QWORD *)&v12[16];
    *(_QWORD *)v15 = v18.m256i_i64[0];
    *(_QWORD *)a1 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v15);
    *(_QWORD *)(a1 + 64) = 0x8000000000000001LL;
    goto LABEL_8;
  }
  *(_OWORD *)v13 = *(_OWORD *)v12;
  *(_QWORD *)&v13[16] = *(_QWORD *)&v12[16];
  fuel_crypto::secp256::secret::SecretKey::new_from_mnemonic_phrase_with_path(
    v15,
    *(_QWORD *)&v12[8],
    *(_QWORD *)&v12[16],
    aM4411799934200,
    24LL);
  v3 = v15[1];
  if ( v15[0] != 1 )
  {
    *(_OWORD *)((char *)&v14.m256i_u64[1] + 7) = *(_OWORD *)&v15[17];
    *(_OWORD *)v14.m256i_i8 = *(_OWORD *)&v15[2];
    v4 = *(_QWORD *)v13;
    v22 = *(_OWORD *)&v13[8];
    goto LABEL_6;
  }
  *(_QWORD *)a1 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v15[1]);
  *(_QWORD *)(a1 + 64) = 0x8000000000000001LL;
  core::ptr::drop_in_place<alloc::string::String>(v13);
LABEL_8:
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v11);
  return a1;
}