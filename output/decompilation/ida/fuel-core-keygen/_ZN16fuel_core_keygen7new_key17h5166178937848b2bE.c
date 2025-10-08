__int64 __fastcall fuel_core_keygen::new_key(__int64 a1, int a2)
{
  char v2; // al
  __int64 v3; // rdx
  char v4; // cl
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v11; // [rsp+0h] [rbp-568h] BYREF
  __int128 v12; // [rsp+10h] [rbp-558h]
  __int128 v13; // [rsp+20h] [rbp-548h]
  __int128 v14; // [rsp+30h] [rbp-538h]
  _OWORD v15[2]; // [rsp+48h] [rbp-520h] BYREF
  __int128 v16; // [rsp+68h] [rbp-500h]
  __int128 v17; // [rsp+78h] [rbp-4F0h]
  __int128 v18; // [rsp+88h] [rbp-4E0h]
  __int128 v19; // [rsp+98h] [rbp-4D0h]
  __int128 v20; // [rsp+A8h] [rbp-4C0h]
  __int64 v21; // [rsp+B8h] [rbp-4B0h]
  _OWORD v22[2]; // [rsp+C0h] [rbp-4A8h] BYREF
  _BYTE v23[88]; // [rsp+E0h] [rbp-488h] BYREF
  __int64 v24; // [rsp+138h] [rbp-430h]
  _OWORD v25[5]; // [rsp+1B0h] [rbp-3B8h] BYREF
  _OWORD src[13]; // [rsp+200h] [rbp-368h] BYREF
  _OWORD dest[14]; // [rsp+2D8h] [rbp-290h] BYREF
  _BYTE v28[64]; // [rsp+3C0h] [rbp-1A8h] BYREF
  _BYTE v29[360]; // [rsp+400h] [rbp-168h] BYREF

  rand_core::SeedableRng::from_entropy(v29);
  secp256k1::key::SecretKey::new(dest, v29);
  <fuel_crypto::secp256::secret::SecretKey as core::convert::From<secp256k1::key::SecretKey>>::from(&v11, dest);
  fuel_crypto::secp256::secret::SecretKey::public_key(v28, &v11);
  if ( a2 )
  {
    v22[1] = v12;
    v22[0] = v11;
    libp2p_identity::secp256k1::SecretKey::try_from_bytes(dest, v22);
    core::result::Result<T,E>::expect(v15, dest, &off_144D88);
    *(_OWORD *)((char *)&src[7] + 8) = v16;
    *(_OWORD *)((char *)&src[8] + 8) = v17;
    *(_OWORD *)((char *)&src[9] + 8) = v18;
    *(_OWORD *)((char *)&src[10] + 8) = v19;
    *(_OWORD *)((char *)&src[11] + 8) = v20;
    *((_QWORD *)&src[12] + 1) = v21;
    src[0] = v15[0];
    src[1] = v15[1];
    src[2] = v16;
    src[3] = v17;
    src[4] = v18;
    src[5] = v19;
    src[6] = v20;
    *(_QWORD *)&src[7] = v21;
    *(_QWORD *)&dest[0] = 1LL;
    memcpy((char *)dest + 8, src, 0xD0uLL);
    v24 = v21;
    *(_OWORD *)&v23[72] = v20;
    *(_OWORD *)&v23[56] = v19;
    *(_OWORD *)&v23[40] = v18;
    *(_OWORD *)&v23[24] = v17;
    *(_OWORD *)&v23[8] = v16;
    *(_QWORD *)v23 = 1LL;
    libp2p_identity::peer_id::PeerId::from_public_key(v25, v23);
    *(_OWORD *)v23 = v25[0];
    *(_OWORD *)&v23[16] = v25[1];
    *(_OWORD *)&v23[32] = v25[2];
    *(_OWORD *)&v23[48] = v25[3];
    *(_OWORD *)&v23[64] = v25[4];
    v13 = v11;
    v14 = v12;
    core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(dest);
    v2 = 1;
    v3 = 1LL;
    v4 = 0;
  }
  else
  {
    fuel_tx::transaction::types::input::Input::owner(dest, v28);
    v14 = v12;
    v13 = v11;
    v4 = 1;
    v3 = 0LL;
    v2 = 0;
  }
  *(_QWORD *)a1 = v3;
  v5 = *(_OWORD *)&v23[16];
  v6 = *(_OWORD *)&v23[32];
  v7 = *(_OWORD *)&v23[48];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v23;
  *(_OWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 40) = v6;
  *(_OWORD *)(a1 + 56) = v7;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v23[64];
  v8 = v14;
  *(_OWORD *)(a1 + 88) = v13;
  *(_OWORD *)(a1 + 104) = v8;
  *(_BYTE *)(a1 + 120) = v4;
  v9 = dest[1];
  *(_OWORD *)(a1 + 121) = dest[0];
  *(_OWORD *)(a1 + 137) = v9;
  *(_BYTE *)(a1 + 153) = v2;
  return a1;
}