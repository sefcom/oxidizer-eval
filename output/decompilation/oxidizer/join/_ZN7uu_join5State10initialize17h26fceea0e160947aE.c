fn uu_join::State::initialize(a0: u64, a1: u64, a2: u8) -> long long {
    let v0: struct48;  // [bp-0x78]
    let v1: struct48;  // [bp-0x48]
    let v2: struct48;  // [bp-0x48]

    v1 = uu_join::State::read_line(a0, a1);
    if v1.field_0 as i64 == 9223372036854775809 {
        return 1;
    }
    v0 = v2;
    if v1.field_0 as i64 == 0x8000000000000000 {
        return 0;
    }
    alloc::vec::Vec<T,A>::push(a0, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/join/src/join.rs");
    return 0;
}
