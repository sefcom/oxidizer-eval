fn uu_pr::split_lines_if_form_feed(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x38]
    let v1: u8;  // [bp-0x20]
    let v2: u64;  // [bp-0x10]
    let v3: u64;  // [bp-0x8]
    let v5: u64;  // rbx

    if *(a1 as &i64) == 0x8000000000000000 {
        return uu_pr::split_lines_if_form_feed::{{closure}}(a0, *((a1 + 8) as &i64)) as u64;
    }
    v3 = v5;
    v0 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    uu_pr::split_lines_if_form_feed::{{closure}}(&v1, &v0);
    return struct24 {
        field_0: v1
        field_16: v2
    };
}
