fn forc_crypto::keys::new_key::handler(a0: i64, a1: u32) -> long long {
    let v0: struct16;  // [bp-0x588], Other Possible Types: struct24, u128
    let v1: u128;  // [bp-0x588]
    let v2: u64;  // [bp-0x578]
    let v3: struct24;  // [bp-0x568], Other Possible Types: struct32, u64
    let v4: u64;  // [bp-0x558]
    let v5: struct88;  // [bp-0x548], Other Possible Types: Option<struct32>, struct32
    let v6: struct24;  // [bp-0x548]
    let v7: struct24;  // [bp-0x548]
    let v8: struct24;  // [bp-0x548]
    let v9: void*;  // [bp-0x4e8], Other Possible Types: struct32
    let v10: u128;  // [bp-0x4e8]
    let v11: void*;  // [bp-0x4d8]
    let v12: void*;  // [bp-0x4d8]
    let v13: struct16;  // [bp-0x4c8], Other Possible Types: u128
    let v14: u64;  // [bp-0x4b8]
    let v15: void*;  // [bp-0x4b0]
    let v16: void*;  // [bp-0x4a0]
    let v17: i8;  // [bp-0x497]
    let v18: u128;  // [bp-0x490]
    let v19: u64;  // [bp-0x488]
    let v20: void*;  // [bp-0x480]
    let v21: struct24;  // [bp-0x478]
    let v22: Result<struct120, struct40>;  // [bp-0x460], Other Possible Types: struct32, struct24, Option<struct32>
    let v23: struct24;  // [bp-0x460]
    let v24: struct120;  // [bp-0x390]
    let v25: iNone;  // [bp-0x380]
    let v26: iNone;  // [bp-0x370], Other Possible Types: struct88
    let v27: iNone;  // [bp-0x360]
    let v28: iNone;  // [bp-0x350]
    let v29: iNone;  // [bp-0x340]
    let v30: iNone;  // [bp-0x330]
    let v31: u64;  // [bp-0x320]
    let v32: struct32;  // [bp-0x318]
    let v33: struct32;  // [bp-0x318]
    let v34: u128;  // [bp-0x2f8]
    let v35: iNone;  // [bp-0x2e8]
    let v36: iNone;  // [bp-0x2d8]
    let v37: iNone;  // [bp-0x2c8]
    let v38: iNone;  // [bp-0x2b8]
    let v39: iNone;  // [bp-0x2a8]
    let v40: iNone;  // [bp-0x298]
    let v41: u64;  // [bp-0x288]
    let v42: iNone;  // [bp-0x280]
    let v43: iNone;  // [bp-0x270]
    let v44: iNone;  // [bp-0x260]
    let v45: iNone;  // [bp-0x250]
    let v46: iNone;  // [bp-0x240]
    let v47: u64;  // [bp-0x230]
    let v48: struct32;  // [bp-0x228], Other Possible Types: struct80
    let v49: struct64;  // [bp-0x1d8]
    let v50: u8;  // [bp-0x198]
    let v52: u64;  // rdx

    rand_core::SeedableRng::from_entropy(&v50);
    v22 = secp256k1::key::SecretKey::new(&v50);
    v32 = <fuel_crypto::secp256::secret::SecretKey as core::convert::From<secp256k1::key::SecretKey>>::from(&v22);
    v49 = fuel_crypto::secp256::secret::SecretKey::public_key(&v32);
    v21 = <T as alloc::string::SpecToString>::spec_to_string(&v32);
    if a1 {
        v9 = v33;
        v22 = libp2p_identity::secp256k1::SecretKey::try_from_bytes(&v9);
        v24 = core::result::Result<T,E>::expect(&v22, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v42 = v26;
        v43 = v27;
        v44 = v28;
        v45 = v29;
        v46 = v30;
        v47 = v31;
        v34 = v24.field_0;
        v35 = v25;
        v36 = v42;
        v37 = v43;
        v38 = v44;
        v39 = v45;
        v40 = v46;
        v41 = v47;
        memcpy(&v22, &v34, 208);
        v5 = v26;
        v48 = libp2p_identity::peer_id::PeerId::from_public_key(&v5);
        v15 = 0;
        v16 = 0;
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("secret");
        v2 = v6.field_16;
        v0 = v6.field_0;
        serde_json::value::to_value(&v6, &v21);
        v3 = core::result::Result<T,E>::unwrap(&v6, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v5 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v15, &v0, &v3);
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("peer_id");
        v14 = v7.field_16;
        v13 = v7.field_0;
        v0 = <T as alloc::string::SpecToString>::spec_to_string(&v48);
        serde_json::value::to_value(&v7, &v0);
        v3 = core::result::Result<T,E>::unwrap(&v7, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v5 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v15, &v13, &v3);
        v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("type");
        v2 = v8.field_16;
        v1 = v8.field_0;
        v13 = struct16 {
            field_0: "p2p"
        };
        serde_json::value::to_value(&v8, &v13);
        v3 = core::result::Result<T,E>::unwrap(&v8, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v5 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v15, &v0, &v3);
        v18 = *(&v15 as &i128);
        v20 = 0;
    } else {
        v48 = fuel_tx::transaction::types::input::Input::owner(&v49);
        v9 = 0;
        v11 = 0;
        v22 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("secret");
        v3 = v23;
        serde_json::value::to_value(&v22, &v21);
        v5 = core::result::Result<T,E>::unwrap(&v22, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v22 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9 as u128, &v3, &v5);
        v22 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("address");
        v3 = v23;
        serde_json::value::to_value(&v22, &v48, v52);
        v5 = core::result::Result<T,E>::unwrap(&v22, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v22 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9 as u128, &v3, &v5);
        v23 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("type");
        v4 = v23.field_16;
        v3 = v23.field_0;
        v0 = struct16 {
            field_0: "block-production"
        };
        serde_json::value::to_value(&v23, &v0);
        v5 = core::result::Result<T,E>::unwrap(&v23, "forc-plugins/forc-crypto/src/keys/new_key.rs");
        v22 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9 as u128, &v3, &v5);
        v18 = v10;
        v20 = v12;
    }
    return struct40 {
        field_0: 5
        field_1: <UNKNOWN>
        field_16: v20
        field_24: <UNKNOWN>
    };
}
