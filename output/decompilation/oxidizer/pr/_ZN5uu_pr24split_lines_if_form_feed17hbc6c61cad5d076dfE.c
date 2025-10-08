fn uu_pr::split_lines_if_form_feed(a0: u64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x20]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // rbx

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        return uu_pr::split_lines_if_form_feed::{{closure}}(a0, *((a1 + 8) as &i64)) as u64;
    }
    v2 = v4;
    uu_pr::split_lines_if_form_feed::{{closure}}(&v0, a1);
    return struct24 {
        field_0: v0
        field_16: v1
    };
}
