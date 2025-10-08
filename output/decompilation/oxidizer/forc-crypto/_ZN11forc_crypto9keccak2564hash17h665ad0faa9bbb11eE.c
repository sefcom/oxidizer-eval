fn forc_crypto::keccak256::hash(a0: i64, a1: u64) -> void {
    let v0: u8;  // [bp-0x318]
    let v1: struct32;  // [bp-0x300]
    let v2: u128;  // [bp-0x2f0]
    let v3: struct24;  // [bp-0x2e0]
    let v4: struct208;  // [bp-0x180]

    v4 = <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default();
    v3 = <T as core::convert::Into<U>>::into(a1);
    <D as digest::digest::Digest>::update(&v4, &v3);
    memcpy(&v3, &v4, 352);
    v1 = digest::FixedOutput::finalize_fixed(&v3);
    hex::encode(&v0, &v1);
    serde_json::value::to_value(&v3, &v0);
    v1 = core::result::Result<T,E>::unwrap(&v3, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/sway/forc-plugins/forc-crypto/src/keccak256.rs");
    return struct32 {
        field_0: v1.field_0
        field_16: v2
    };
}
