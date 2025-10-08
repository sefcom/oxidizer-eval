fn just::function::encode_uri_component(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x20]

    v0 = struct24 {
        field_0: a2
        field_8: a3
        field_16: &_ZN4just8function20encode_uri_component14PERCENT_ENCODE17hfc878719f503a33aE
    };
    <T as alloc::string::SpecToString>::spec_to_string(a0 + 8, &v0);
    return struct8 {
        field_0: 0
    };
}
