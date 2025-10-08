__int64 __fastcall fuel_core_keygen::parse_secret(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  char v5; // al
  char v6; // cl
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm1
  __int32 v12; // [rsp+Bh] [rbp-3EDh]
  __m256i v13; // [rsp+10h] [rbp-3E8h] BYREF
  __int128 v14; // [rsp+30h] [rbp-3C8h]
  __int8 v15; // [rsp+40h] [rbp-3B8h]
  _BYTE v16[7]; // [rsp+50h] [rbp-3A8h] BYREF
  __int64 v17; // [rsp+57h] [rbp-3A1h]
  __int128 v18; // [rsp+5Fh] [rbp-399h]
  char v19; // [rsp+6Fh] [rbp-389h]
  __int128 v20; // [rsp+70h] [rbp-388h]
  char v21; // [rsp+80h] [rbp-378h]
  _BYTE v22[88]; // [rsp+90h] [rbp-368h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-310h]
  _OWORD v24[2]; // [rsp+158h] [rbp-2A0h] BYREF
  __int128 v25; // [rsp+178h] [rbp-280h]
  __int128 v26; // [rsp+188h] [rbp-270h]
  __int128 v27; // [rsp+198h] [rbp-260h]
  __int128 v28; // [rsp+1A8h] [rbp-250h]
  __int128 v29; // [rsp+1B8h] [rbp-240h]
  __int64 v30; // [rsp+1C8h] [rbp-230h]
  _OWORD v31[5]; // [rsp+1D0h] [rbp-228h] BYREF
  _OWORD src[13]; // [rsp+220h] [rbp-1D8h] BYREF
  char **v33; // [rsp+2F8h] [rbp-100h] BYREF
  _OWORD dest[13]; // [rsp+300h] [rbp-F8h] BYREF

  <fuel_crypto::secp256::secret::SecretKey as core::str::traits::FromStr>::from_str(v22, a3, a4);
  if ( v22[0] == 1 )
  {
    v33 = &off_144DA0;
    *(_QWORD *)&dest[0] = 1LL;
    *((_QWORD *)&dest[0] + 1) = 8LL;
    dest[1] = 0LL;
    *(_QWORD *)(a1 + 8) = anyhow::__private::format_err(&v33);
    *(_QWORD *)a1 = 2LL;
  }
  else
  {
    v12 = *(_DWORD *)&v22[4];
    LOBYTE(v12) = v22[4];
    v20 = *(_OWORD *)&v22[16];
    v21 = v22[32];
    v14 = *(_OWORD *)&v22[16];
    v15 = v22[32];
    *(_DWORD *)&v16[3] = v12;
    *(_DWORD *)v16 = *(_DWORD *)&v22[1];
    v17 = *(_QWORD *)&v22[8];
    v19 = v22[32];
    v18 = *(_OWORD *)&v22[16];
    if ( a2 )
    {
      *(__int32 *)((char *)v13.m256i_i32 + 3) = v12;
      v13.m256i_i32[0] = *(_DWORD *)&v22[1];
      *(__int64 *)((char *)v13.m256i_i64 + 7) = *(_QWORD *)&v22[8];
      *(_OWORD *)((char *)&v13.m256i_u64[1] + 7) = v14;
      v13.m256i_i8[31] = v15;
      libp2p_identity::secp256k1::SecretKey::try_from_bytes(&v33, &v13);
      core::result::Result<T,E>::expect(v24, &v33, &off_144DB0);
      *(_OWORD *)((char *)&src[7] + 8) = v25;
      *(_OWORD *)((char *)&src[8] + 8) = v26;
      *(_OWORD *)((char *)&src[9] + 8) = v27;
      *(_OWORD *)((char *)&src[10] + 8) = v28;
      *(_OWORD *)((char *)&src[11] + 8) = v29;
      *((_QWORD *)&src[12] + 1) = v30;
      src[0] = v24[0];
      src[1] = v24[1];
      src[2] = v25;
      src[3] = v26;
      src[4] = v27;
      src[5] = v28;
      src[6] = v29;
      *(_QWORD *)&src[7] = v30;
      v33 = (char **)(&dword_0 + 1);
      memcpy(dest, src, sizeof(dest));
      v23 = v30;
      *(_OWORD *)&v22[72] = v29;
      *(_OWORD *)&v22[56] = v28;
      *(_OWORD *)&v22[40] = v27;
      *(_OWORD *)&v22[24] = v26;
      *(_OWORD *)&v22[8] = v25;
      *(_QWORD *)v22 = 1LL;
      libp2p_identity::peer_id::PeerId::from_public_key(v31, v22);
      *(_OWORD *)v22 = v31[0];
      *(_OWORD *)&v22[16] = v31[1];
      *(_OWORD *)&v22[32] = v31[2];
      *(_OWORD *)&v22[48] = v31[3];
      *(_OWORD *)&v22[64] = v31[4];
      core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(&v33);
      v4 = 1LL;
      v5 = 1;
      v6 = 0;
    }
    else
    {
      fuel_crypto::secp256::secret::SecretKey::public_key(&v33, v16);
      fuel_tx::transaction::types::input::Input::owner(&v13, &v33);
      v6 = 1;
      v5 = 0;
      v4 = 0LL;
    }
    *(_QWORD *)a1 = v4;
    v7 = *(_OWORD *)&v22[16];
    v8 = *(_OWORD *)&v22[32];
    v9 = *(_OWORD *)&v22[48];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v22;
    *(_OWORD *)(a1 + 24) = v7;
    *(_OWORD *)(a1 + 40) = v8;
    *(_OWORD *)(a1 + 56) = v9;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v22[64];
    *(_BYTE *)(a1 + 88) = v6;
    v10 = *(_OWORD *)&v13.m256i_u64[2];
    *(_OWORD *)(a1 + 89) = *(_OWORD *)v13.m256i_i8;
    *(_OWORD *)(a1 + 105) = v10;
    *(_BYTE *)(a1 + 121) = v5;
  }
  return a1;
}