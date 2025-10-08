fn forc_crypto::keys::parse_secret::handler(a0: i64, a1: i64) -> long long {
    let v0: void*;  // [bp-0x408], Other Possible Types: struct24, u128
    let v1: u128;  // [bp-0x408]
    let v2: void*;  // [bp-0x3f8], Other Possible Types: u64
    let v3: struct16;  // [bp-0x3e8], Other Possible Types: struct32, u128
    let v4: u64;  // [bp-0x3d8]
    let v5: Option<struct32>;  // [bp-0x3c8], Other Possible Types: struct24, struct32
    let v6: Option<struct32>;  // [bp-0x3b8]
    let v7: struct16;  // [bp-0x3a8], Other Possible Types: u128
    let v8: u64;  // [bp-0x398]
    let v9: void*;  // [bp-0x390]
    let v10: void*;  // [bp-0x380]
    let v11: struct88;  // [bp-0x378], Other Possible Types: Option<struct32>, struct32
    let v12: struct24;  // [bp-0x378]
    let v13: struct24;  // [bp-0x378]
    let v14: i8;  // [bp-0x317]
    let v15: u128;  // [bp-0x310]
    let v16: u64;  // [bp-0x308]
    let v17: void*;  // [bp-0x300], Other Possible Types: Result<struct120, struct40>
    let v18: u128;  // [bp-0x2f8]
    let v19: iNone;  // [bp-0x2e9]
    let v20: struct120;  // [bp-0x2d0]
    let v21: iNone;  // [bp-0x2c0]
    let v22: iNone;  // [bp-0x2b0], Other Possible Types: struct88
    let v23: iNone;  // [bp-0x2a0]
    let v24: iNone;  // [bp-0x290]
    let v25: iNone;  // [bp-0x280]
    let v26: iNone;  // [bp-0x270]
    let v27: u64;  // [bp-0x260]
    let v28: Result<struct120, struct40>;  // [bp-0x258], Other Possible Types: struct2, struct64, Option<struct32>
    let v29: struct24;  // [bp-0x258]
    let v30: struct24;  // [bp-0x258]
    let v31: u8;  // [bp-0x257]
    let v32: i8;  // [bp-0x256]
    let v33: i8;  // [bp-0x247]
    let v34: u8;  // [bp-0x188]
    let v35: u128;  // [bp-0x187]
    let v36: iNone;  // [bp-0x178]
    let v37: u128;  // [bp-0x168]
    let v38: iNone;  // [bp-0x158]
    let v39: iNone;  // [bp-0x148]
    let v40: iNone;  // [bp-0x138]
    let v41: iNone;  // [bp-0x128]
    let v42: iNone;  // [bp-0x118]
    let v43: iNone;  // [bp-0x108]
    let v44: u64;  // [bp-0xf8]
    let v45: iNone;  // [bp-0xf0]
    let v46: iNone;  // [bp-0xe0]
    let v47: iNone;  // [bp-0xd0]
    let v48: iNone;  // [bp-0xc0]
    let v49: iNone;  // [bp-0xb0]
    let v50: u64;  // [bp-0xa0]
    let v51: struct32;  // [bp-0x98], Other Possible Types: struct80
    let v53: u8;  // al

    v28 = <fuel_crypto::secp256::secret::SecretKey as core::str::traits::FromStr>::from_str(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v53 = v31;
    if v28.field_0 as i8 == 1 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v53)
        };
    }
    v19 = *(&v33 as &i128);
    v18 = *(&v32 as &i128);
    v34 = v53;
    v36 = v19;
    v35 = v18;
    if *((a1 + 24) as &i8) == 1 {
        v3 = struct32 {
            field_0: v53
            field_16: v19
        };
        v28 = libp2p_identity::secp256k1::SecretKey::try_from_bytes(&v3);
        v20 = core::result::Result<T,E>::expect(&v28, "forc-plugins/forc-crypto/src/keys/parse_secret.rs");
        v45 = v22;
        v46 = v23;
        v47 = v24;
        v48 = v25;
        v49 = v26;
        v50 = v27;
        v37 = v20.field_0;
        v38 = v21;
        v39 = v45;
        v40 = v46;
        v41 = v47;
        v42 = v48;
        v43 = v49;
        v44 = v50;
        memcpy(&v28, &v37, 208);
        v11 = v22;
        v51 = libp2p_identity::peer_id::PeerId::from_public_key(&v11);
        v9 = 0;
        v10 = 0;
        v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("peer_id");
        v8 = v12.field_16;
        v7 = *(&v12.field_0 as &i128);
        v0 = <T as alloc::string::SpecToString>::spec_to_string(&v51);
        serde_json::value::to_value(&v12, &v0);
        v5 = core::result::Result<T,E>::unwrap(&v12, "forc-plugins/forc-crypto/src/keys/parse_secret.rs");
        v11 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9, &v7, &v5);
        v13 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("type");
        v2 = v13.field_16;
        v0 = *(&v13.field_0 as &i128);
        v7 = struct16 {
            field_0: "p2p"
        };
        serde_json::value::to_value(&v13, &v7);
        v5 = core::result::Result<T,E>::unwrap(&v13, "forc-plugins/forc-crypto/src/keys/parse_secret.rs");
        v11 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9, &v0, &v5);
        v15 = *(&v9 as &i128);
        v17 = 0;
    } else {
        v28 = fuel_crypto::secp256::secret::SecretKey::public_key(&v34);
        v51 = fuel_tx::transaction::types::input::Input::owner(&v28);
        v0 = 0;
        v2 = 0;
        v29 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("address");
        v4 = v29.field_16;
        v3 = *(&v29.field_0 as &i128);
        v5 = <T as alloc::string::SpecToString>::spec_to_string(&v51);
        serde_json::value::to_value(&v29, &v5);
        v11 = core::result::Result<T,E>::unwrap(&v29, "forc-plugins/forc-crypto/src/keys/parse_secret.rs");
        v28 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v0 as u128, &v3, &v11);
        v30 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("type");
        v6 = v30.field_16;
        v5 = *(&v30.field_0 as &i128);
        v3 = struct16 {
            field_0: "block-production"
        };
        serde_json::value::to_value(&v30, &v3);
        v11 = core::result::Result<T,E>::unwrap(&v30, "forc-plugins/forc-crypto/src/keys/parse_secret.rs");
        v28 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v0 as u128, &v5, &v11);
        v15 = v1;
        v17 = 0;
    }
    return struct40 {
        field_0: 5
        field_1: <UNKNOWN>
        field_16: 0
        field_24: <UNKNOWN>
    };
}
