fn forc_crypto::keys::get_public_key::handler(a0: i64, a1: i64) -> long long {
    let v0: Option<struct32>;  // [bp-0x168], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x168]
    let v2: struct24;  // [bp-0x168]
    let v3: Option<struct32>;  // [bp-0x168]
    let v4: struct2;  // [bp-0x168]
    let v5: u8;  // [bp-0x167]
    let v6: u128;  // [bp-0x161]
    let v7: void*;  // [bp-0x151]
    let v8: i8;  // [bp-0x146]
    let v9: struct32;  // [bp-0x118], Other Possible Types: u128
    let v10: Option<struct32>;  // [bp-0x108], Other Possible Types: u64
    let v11: struct24;  // [bp-0xf8]
    let v12: void*;  // [bp-0xe0]
    let v13: void*;  // [bp-0xd0]
    let v14: struct32;  // [bp-0xc8], Other Possible Types: u64
    let v15: struct24;  // [bp-0xa0], Other Possible Types: struct49
    let v16: struct32;  // [bp-0x60]
    let v17: struct32;  // [bp-0x40]
    let v19: iNone;  // xmm0
    let v20: core::result::Result<usize, std::io::error::Error>;  // xmm1
    let v21: u64;  // rax

    v0 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    v15 = forc_crypto::args::read_content_filepath_or_stdin(&v0);
    v17 = fuel_crypto::hasher::Hasher::hash(&v15);
    v4 = fuel_crypto::secp256::signature::Signature::recover(a1 + 24, &v17);
    if v4.field_0 as i8 == 1 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v5)
        };
    }
    v19 = *((&v0.field_0 as &char + 2) as &i128);
    v20 = v0.field_0;
    v15 = struct49 {
        field_0: v5
        field_1: v19
        field_17: v20
        field_33: *(&v8 as &i128)
    };
    v16 = fuel_crypto::secp256::public::PublicKey::hash(&v15);
    v12 = 0;
    v13 = 0;
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("PublicKey");
    v10 = v1.field_16;
    v9 = v1.field_0;
    v11 = <T as alloc::string::SpecToString>::spec_to_string(&v15);
    serde_json::value::to_value(&v1, &v11);
    v14 = core::result::Result<T,E>::unwrap(&v1, "forc-plugins/forc-crypto/src/keys/get_public_key.rs");
    v0 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v12, &v9, &v14);
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Address");
    v10 = v2.field_16;
    v9 = v2.field_0;
    v11 = <T as alloc::string::SpecToString>::spec_to_string(&v16);
    serde_json::value::to_value(&v2, &v11);
    v14 = core::result::Result<T,E>::unwrap(&v2, "forc-plugins/forc-crypto/src/keys/get_public_key.rs");
    v3 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v12, &v9, &v14);
    v14 = *(&v12 as &i128);
    v6 = *(&v12 as &i128);
    v7 = 0;
    v21 = *((&v6 as &char + 8) as &i64);
    return struct40 {
        field_0: 5
        field_1: <UNKNOWN>
        field_16: 0
        field_24: <UNKNOWN>
    };
}
