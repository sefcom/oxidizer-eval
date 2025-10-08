fn forc_crypto::sha256::hash(a0: i64, a1: u64) -> void {
    let v0: struct112;  // [bp-0x138], Other Possible Types: struct24, struct40
    let v1: iNone;  // [bp-0x128]
    let v2: iNone;  // [bp-0x118]
    let v3: iNone;  // [bp-0x108]
    let v4: iNone;  // [bp-0xf8]
    let v5: iNone;  // [bp-0xe8]
    let v6: iNone;  // [bp-0xd8]
    let v7: u128;  // [bp-0xc8]
    let v8: struct112;  // [bp-0xc8]
    let v9: iNone;  // [bp-0xb8]
    let v10: iNone;  // [bp-0xa8]
    let v11: iNone;  // [bp-0x98]
    let v12: iNone;  // [bp-0x88]
    let v13: iNone;  // [bp-0x78]
    let v14: iNone;  // [bp-0x68]
    let v15: u8;  // [bp-0x50]
    let v16: struct32;  // [bp-0x38]
    let v17: struct32;  // [bp-0x38]

    v0 = <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default();
    v14 = v6;
    v13 = v5;
    v12 = v4;
    v11 = v3;
    v10 = v2;
    v9 = v1;
    v7 = v0.field_0;
    v0 = <T as core::convert::Into<U>>::into(a1);
    <D as digest::digest::Digest>::update(&v7, &v0);
    v0 = v8;
    v16 = fuel_crypto::hasher::Hasher::finalize(&v0);
    hex::encode(&v15, &v16);
    serde_json::value::to_value(&v0, &v15);
    v17 = core::result::Result<T,E>::unwrap(&v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/sway/forc-plugins/forc-crypto/src/sha256.rs");
    return struct32 {
        field_0: v17.field_0
        field_16: v17.field_16
    };
}
