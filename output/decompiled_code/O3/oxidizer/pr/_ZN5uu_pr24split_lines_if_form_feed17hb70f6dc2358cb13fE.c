fn uu_pr::split_lines_if_form_feed(a0: u64, a1: u64) -> int {
    let v0: i128;  // [sp-0x38]
    let v1: i64;  // [sp-0x28]
    let v2: struct24;  // [sp-0x20], Other Possible Types: i192
    let v3: i64;  // [sp-0x8]
    let v5: i64;  // rbx
    let v6: i128;  // xmm0
    let v7: i256;  // ymm0
    let v8: i128;  // xmm0
    let v9: i64;  // rax

    if *(a1 as &i64) != 0x8000000000000000 {
        v3 = v5;
        v1 = *((a1 + 16) as &i64);
        v6 = *(a1 as &i128);
        v0 = v6;
        v2 = uu_pr::split_lines_if_form_feed::{{closure}}(&v0);
        v8 = v2;
        v9 = *((&v2 as &char + 16) as &i64);
        return struct24 {
            field_0: v8
            field_16: v9
        };
    }
    uu_pr::split_lines_if_form_feed::{{closure}}(a0, *((a1 + 8) as &i64));
    return v7;
}
