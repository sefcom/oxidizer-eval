fn starship::module::Module::set_segments(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x18]
    let v2: struct24;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = *((a1 + 16) as &i64);
    *((a0 + 64) as &u64) = v3;
    *((a0 + 48) as &i128) = *(a1 as &i128);
    return v3;
}
