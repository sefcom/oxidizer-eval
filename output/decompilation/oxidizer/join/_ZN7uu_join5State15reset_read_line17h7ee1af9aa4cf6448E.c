fn uu_join::State::reset_read_line(a0: u32, a1: u32) -> u64 {
    let v0: i384;  // [sp-0x68], Other Possible Types: Option<Result<struct48, struct8>>
    let v1: i64;  // [sp-0x38]
    let v2: i64;  // [sp-0x30]
    let v3: i128;  // [sp-0x28]
    let v4: i128;  // [sp-0x18]
    let v7: i64;  // rax

    v0 = uu_join::State::read_line(a0);
    v7 = *((&v0 as &char + 8) as &i64);
    if v1 != 9223372036854775809 {
        v4 = *((&v0 as &char + 32) as &i128);
        v3 = *((&v0 as &char + 16) as &i128);
        v1 = v0;
        v2 = v7;
        uu_join::State::reset();
        return 0;
    }
    return v7;
}
