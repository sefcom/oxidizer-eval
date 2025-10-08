__int64 __fastcall forc_crypto::keys::parse_secret::handler(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+0h] [rbp-408h] BYREF
  __int64 v10; // [rsp+10h] [rbp-3F8h]
  _OWORD v11[2]; // [rsp+20h] [rbp-3E8h] BYREF
  __int128 v12; // [rsp+40h] [rbp-3C8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-3B8h]
  __int128 v14; // [rsp+60h] [rbp-3A8h] BYREF
  __int64 v15; // [rsp+70h] [rbp-398h]
  __int128 v16; // [rsp+78h] [rbp-390h] BYREF
  __int64 v17; // [rsp+88h] [rbp-380h]
  __int128 v18; // [rsp+90h] [rbp-378h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-368h]
  __int128 v20; // [rsp+B0h] [rbp-358h]
  __int128 v21; // [rsp+C0h] [rbp-348h]
  __int128 v22; // [rsp+D0h] [rbp-338h]
  __int64 v23; // [rsp+E0h] [rbp-328h]
  _BYTE v24[23]; // [rsp+F1h] [rbp-317h]
  __int64 v25; // [rsp+108h] [rbp-300h]
  _BYTE v26[31]; // [rsp+110h] [rbp-2F8h]
  _OWORD v27[2]; // [rsp+138h] [rbp-2D0h] BYREF
  __int128 v28; // [rsp+158h] [rbp-2B0h]
  __int128 v29; // [rsp+168h] [rbp-2A0h]
  __int128 v30; // [rsp+178h] [rbp-290h]
  __int128 v31; // [rsp+188h] [rbp-280h]
  __int128 v32; // [rsp+198h] [rbp-270h]
  __int64 v33; // [rsp+1A8h] [rbp-260h]
  _OWORD dest[13]; // [rsp+1B0h] [rbp-258h] BYREF
  char v35; // [rsp+280h] [rbp-188h] BYREF
  _BYTE v36[31]; // [rsp+281h] [rbp-187h]
  _OWORD src[13]; // [rsp+2A0h] [rbp-168h] BYREF
  _BYTE v38[152]; // [rsp+370h] [rbp-98h] BYREF

  <fuel_crypto::secp256::secret::SecretKey as core::str::traits::FromStr>::from_str(
    dest,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  if ( LOBYTE(dest[0]) == 1 )
  {
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(BYTE1(dest[0]));
    *(_BYTE *)a1 = 6;
  }
  else
  {
    *(_OWORD *)&v26[15] = *(_OWORD *)((char *)&dest[1] + 1);
    *(_OWORD *)v26 = *(_OWORD *)((char *)dest + 2);
    v35 = BYTE1(dest[0]);
    *(_OWORD *)&v36[15] = *(_OWORD *)&v26[15];
    *(_OWORD *)v36 = *(_OWORD *)((char *)dest + 2);
    if ( *(_BYTE *)(a2 + 24) == 1 )
    {
      LOBYTE(v11[0]) = BYTE1(dest[0]);
      *(_OWORD *)((char *)v11 + 1) = *(_OWORD *)v26;
      v11[1] = *(_OWORD *)&v26[15];
      libp2p_identity::secp256k1::SecretKey::try_from_bytes(dest, v11);
      core::result::Result<T,E>::expect(v27, dest, &off_62EFD8);
      *(_OWORD *)((char *)&src[7] + 8) = v28;
      *(_OWORD *)((char *)&src[8] + 8) = v29;
      *(_OWORD *)((char *)&src[9] + 8) = v30;
      *(_OWORD *)((char *)&src[10] + 8) = v31;
      *(_OWORD *)((char *)&src[11] + 8) = v32;
      *((_QWORD *)&src[12] + 1) = v33;
      src[0] = v27[0];
      src[1] = v27[1];
      src[2] = v28;
      src[3] = v29;
      src[4] = v30;
      src[5] = v31;
      src[6] = v32;
      *(_QWORD *)&src[7] = v33;
      memcpy(dest, src, sizeof(dest));
      v23 = v33;
      v22 = v32;
      v21 = v31;
      v20 = v30;
      v19 = v29;
      v18 = v28;
      libp2p_identity::peer_id::PeerId::from_public_key(v38, &v18);
      *(_QWORD *)&v16 = 0LL;
      v17 = 0LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, aPeerId, 7LL);
      v15 = v19;
      v14 = v18;
      ((void (__fastcall *)(__int128 *, _BYTE *, __int64, __int64, __int64, __int64))<T as alloc::string::SpecToString>::spec_to_string)(
        &v9,
        v38,
        v2,
        v3,
        v4,
        v5);
      serde_json::value::to_value(&v18, &v9);
      core::result::Result<T,E>::unwrap(&v12, &v18, &off_62EFF0);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v18, &v16, &v14, &v12);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v18);
      core::ptr::drop_in_place<alloc::string::String>(&v9);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, aType, 4LL);
      v10 = v19;
      v9 = v18;
      *(_QWORD *)&v14 = aP2p;
      *((_QWORD *)&v14 + 1) = 3LL;
      serde_json::value::to_value(&v18, &v14);
      core::result::Result<T,E>::unwrap(&v12, &v18, &off_62EFF0);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v18, &v16, &v9, &v12);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v18);
      *(_OWORD *)&v24[7] = v16;
      v25 = v17;
      core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(dest);
    }
    else
    {
      fuel_crypto::secp256::secret::SecretKey::public_key(dest, &v35);
      fuel_tx::transaction::types::input::Input::owner(v38, dest);
      *(_QWORD *)&v9 = 0LL;
      v10 = 0LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aAddress_1, 7LL);
      *(_QWORD *)&v11[1] = *(_QWORD *)&dest[1];
      v11[0] = dest[0];
      <T as alloc::string::SpecToString>::spec_to_string(&v12, v38);
      serde_json::value::to_value(dest, &v12);
      core::result::Result<T,E>::unwrap(&v18, dest, &off_62EFC0);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(dest, &v9, v11, &v18);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(dest);
      core::ptr::drop_in_place<alloc::string::String>(&v12);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aType, 4LL);
      v13 = *(_QWORD *)&dest[1];
      v12 = dest[0];
      *(_QWORD *)&v11[0] = aBlockProductio;
      *((_QWORD *)&v11[0] + 1) = 16LL;
      serde_json::value::to_value(dest, v11);
      core::result::Result<T,E>::unwrap(&v18, dest, &off_62EFC0);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(dest, &v9, &v12, &v18);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(dest);
      *(_OWORD *)&v24[7] = v9;
      v25 = v10;
    }
    *(_BYTE *)a1 = 5;
    v6 = *(_QWORD *)&v24[15];
    v7 = v25;
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v24;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v7;
  }
  core::ptr::drop_in_place<forc_crypto::keys::parse_secret::Arg>(a2);
  return a1;
}