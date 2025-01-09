fn uu_pr::split_lines_if_form_feed(a0: &struct24, a1: u64) -> int {
    let v0: struct24;  // [bp-0x38]
    let v1: i192;  // [sp-0x20], Other Possible Types: struct24
    let v2: i64;  // [sp-0x8]
    let v4: i64;  // rbx
    let v5: i128;  // xmm0
    let v6: i256;  // ymm0
    let v7: i128;  // xmm0
    let v8: i64;  // rax

    if *(a1 as &i64) != 0x8000000000000000 {
        v2 = v4;
        v5 = *(a1 as &i128);
        v0 = struct24 {
            field_0: v5
            field_16: *((a1 + 16) as &i64)
        };
        v1 = uu_pr::split_lines_if_form_feed::{{closure}}(&v0);
        v7 = v1;
        v8 = *((&v1 as &char + 16) as &i64);
        return struct24 {
            field_0: v7
            field_16: v8
        };
    }
    uu_pr::split_lines_if_form_feed::{{closure}}(a0, *((a1 + 8) as &i64));
    return v6;
}
