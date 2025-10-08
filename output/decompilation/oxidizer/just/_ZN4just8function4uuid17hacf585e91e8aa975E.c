fn just::function::uuid(a0: u64) -> long long {
    let v0: struct16;  // [bp-0x20]

    v0 = uuid::v4::<impl uuid::Uuid>::new_v4();
    <T as alloc::string::SpecToString>::spec_to_string(a0 + 8, &v0);
    return struct8 {
        field_0: 0
    };
}
