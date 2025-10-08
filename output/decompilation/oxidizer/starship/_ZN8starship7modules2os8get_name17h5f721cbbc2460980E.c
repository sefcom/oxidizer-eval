fn starship::modules::os::get_name(a0: u64, a1: u8) -> long long {
    let v0: u64;  // [bp-0x8]
    let v1: u8;  // [bp-0x1]
    let v3: u64;  // rax

    v0 = v3;
    v1 = a1;
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v1);
    return v0;
}
