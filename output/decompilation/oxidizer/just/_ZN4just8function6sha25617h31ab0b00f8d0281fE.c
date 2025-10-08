fn just::function::sha256(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct112;  // [bp-0x128]
    let v1: struct40;  // [bp-0xb0]
    let v2: u896;  // [bp-0xb0]
    let v3: struct32;  // [bp-0x40]

    v1 = <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default();
    <D as digest::digest::Digest>::update(&v1, a2, a3);
    v0 = v2;
    v3 = digest::FixedOutput::finalize_fixed(&v0);
    format!("{}", &v3);
    return struct8 {
        field_0: 0
    };
}
