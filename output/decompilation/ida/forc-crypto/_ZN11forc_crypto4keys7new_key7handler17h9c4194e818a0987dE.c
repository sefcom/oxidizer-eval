__int64 __fastcall forc_crypto::keys::new_key::handler(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int128 v5; // [rsp+0h] [rbp-588h] BYREF
  __int64 v6; // [rsp+10h] [rbp-578h]
  __int128 v7; // [rsp+20h] [rbp-568h] BYREF
  __int64 v8; // [rsp+30h] [rbp-558h]
  __int128 v9; // [rsp+40h] [rbp-548h] BYREF
  __int128 v10; // [rsp+50h] [rbp-538h]
  __int128 v11; // [rsp+60h] [rbp-528h]
  __int128 v12; // [rsp+70h] [rbp-518h]
  __int128 v13; // [rsp+80h] [rbp-508h]
  __int64 v14; // [rsp+90h] [rbp-4F8h]
  __int128 v15; // [rsp+A0h] [rbp-4E8h] BYREF
  __int128 v16; // [rsp+B0h] [rbp-4D8h]
  __int128 v17; // [rsp+C0h] [rbp-4C8h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-4B8h]
  __int128 v19; // [rsp+D8h] [rbp-4B0h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-4A0h]
  _BYTE v21[23]; // [rsp+F1h] [rbp-497h]
  __int64 v22; // [rsp+108h] [rbp-480h]
  _BYTE v23[24]; // [rsp+110h] [rbp-478h] BYREF
  _OWORD dest[13]; // [rsp+128h] [rbp-460h] BYREF
  _OWORD v25[2]; // [rsp+1F8h] [rbp-390h] BYREF
  __int128 v26; // [rsp+218h] [rbp-370h]
  __int128 v27; // [rsp+228h] [rbp-360h]
  __int128 v28; // [rsp+238h] [rbp-350h]
  __int128 v29; // [rsp+248h] [rbp-340h]
  __int128 v30; // [rsp+258h] [rbp-330h]
  __int64 v31; // [rsp+268h] [rbp-320h]
  _OWORD v32[2]; // [rsp+270h] [rbp-318h] BYREF
  _OWORD src[13]; // [rsp+290h] [rbp-2F8h] BYREF
  _BYTE v34[80]; // [rsp+360h] [rbp-228h] BYREF
  _BYTE v35[64]; // [rsp+3B0h] [rbp-1D8h] BYREF
  _BYTE v36[408]; // [rsp+3F0h] [rbp-198h] BYREF

  rand_core::SeedableRng::from_entropy(v36);
  secp256k1::key::SecretKey::new(dest, v36);
  <fuel_crypto::secp256::secret::SecretKey as core::convert::From<secp256k1::key::SecretKey>>::from(v32, dest);
  fuel_crypto::secp256::secret::SecretKey::public_key(v35, v32);
  <T as alloc::string::SpecToString>::spec_to_string(v23, v32);
  if ( a2 )
  {
    v16 = v32[1];
    v15 = v32[0];
    libp2p_identity::secp256k1::SecretKey::try_from_bytes(dest, &v15);
    core::result::Result<T,E>::expect(v25, dest, &off_62EF90);
    *(_OWORD *)((char *)&src[7] + 8) = v26;
    *(_OWORD *)((char *)&src[8] + 8) = v27;
    *(_OWORD *)((char *)&src[9] + 8) = v28;
    *(_OWORD *)((char *)&src[10] + 8) = v29;
    *(_OWORD *)((char *)&src[11] + 8) = v30;
    *((_QWORD *)&src[12] + 1) = v31;
    src[0] = v25[0];
    src[1] = v25[1];
    src[2] = v26;
    src[3] = v27;
    src[4] = v28;
    src[5] = v29;
    src[6] = v30;
    *(_QWORD *)&src[7] = v31;
    memcpy(dest, src, sizeof(dest));
    v14 = v31;
    v13 = v30;
    v12 = v29;
    v11 = v28;
    v10 = v27;
    v9 = v26;
    libp2p_identity::peer_id::PeerId::from_public_key(v34, &v9);
    *(_QWORD *)&v19 = 0LL;
    v20 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, aSecret, 6LL);
    v6 = v10;
    v5 = v9;
    serde_json::value::to_value(&v9, v23);
    core::result::Result<T,E>::unwrap(&v7, &v9, &off_62EFA8);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9, &v19, &v5, &v7);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v9);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, aPeerId, 7LL);
    v18 = v10;
    v17 = v9;
    ((void (__fastcall *)(__int128 *, _BYTE *))<T as alloc::string::SpecToString>::spec_to_string)(&v5, v34);
    serde_json::value::to_value(&v9, &v5);
    core::result::Result<T,E>::unwrap(&v7, &v9, &off_62EFA8);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9, &v19, &v17, &v7);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v9);
    core::ptr::drop_in_place<alloc::string::String>(&v5);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, aType, 4LL);
    v6 = v10;
    v5 = v9;
    *(_QWORD *)&v17 = aP2p;
    *((_QWORD *)&v17 + 1) = 3LL;
    serde_json::value::to_value(&v9, &v17);
    core::result::Result<T,E>::unwrap(&v7, &v9, &off_62EFA8);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9, &v19, &v5, &v7);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v9);
    *(_OWORD *)&v21[7] = v19;
    v22 = v20;
    core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(dest);
  }
  else
  {
    fuel_tx::transaction::types::input::Input::owner(v34, v35);
    *(_QWORD *)&v15 = 0LL;
    *(_QWORD *)&v16 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aSecret, 6LL);
    v8 = *(_QWORD *)&dest[1];
    v7 = dest[0];
    serde_json::value::to_value(dest, v23);
    core::result::Result<T,E>::unwrap(&v9, dest, &off_62EF78);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(dest, &v15, &v7, &v9);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(dest);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aAddress_1, 7LL);
    v8 = *(_QWORD *)&dest[1];
    v7 = dest[0];
    serde_json::value::to_value(dest, v34);
    core::result::Result<T,E>::unwrap(&v9, dest, &off_62EF78);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(dest, &v15, &v7, &v9);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(dest);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aType, 4LL);
    v8 = *(_QWORD *)&dest[1];
    v7 = dest[0];
    *(_QWORD *)&v5 = aBlockProductio;
    *((_QWORD *)&v5 + 1) = 16LL;
    serde_json::value::to_value(dest, &v5);
    core::result::Result<T,E>::unwrap(&v9, dest, &off_62EF78);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(dest, &v15, &v7, &v9);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(dest);
    *(_OWORD *)&v21[7] = v15;
    v22 = v16;
  }
  *(_BYTE *)a1 = 5;
  v2 = *(_QWORD *)&v21[15];
  v3 = v22;
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v21;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = v3;
  core::ptr::drop_in_place<alloc::string::String>(v23);
  return a1;
}