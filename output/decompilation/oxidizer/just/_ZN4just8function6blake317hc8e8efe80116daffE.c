fn just::function::blake3(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct32;  // [bp-0x30]

    v0 = blake3::hash(a2, a3);
    <T as alloc::string::SpecToString>::spec_to_string(a0 + 8, &v0);
    return struct8 {
        field_0: 0
    };
}
