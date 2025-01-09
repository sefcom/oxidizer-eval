fn uu_join::State::reset_read_line(a0: &struct8, a1: u32) -> u64 {
    let v0: i392;  // [sp-0x68], Other Possible Types: Option<Result<struct48, struct8>>
    let v1: struct48;  // [sp-0x38], Other Possible Types: i64

    v0 = uu_join::State::read_line(a0);
    if v1 != 9223372036854775809 {
        v1 = struct48 {
            field_0: v4
            field_8: v3
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: *((&v0 as &char + 32) as &i128)
        };
        uu_join::State::reset(a0, &v1);
        return 0;
    }
    return *((&v0 as &char + 8) as &i64);
}
