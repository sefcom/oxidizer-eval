fn uu_pr::split_lines_if_form_feed(a0: u64, a1: u64) -> int {
    let v0: u128;  // [sp-0x38], Other Possible Types: struct24
    let v1: u64;  // [sp-0x28]
    let v2: u8;  // [bp-0x20]
    let v3: i8;  // [bp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // rbx
    let v7: u128;  // xmm0
    let v8: u256;  // ymm0
    let v9: u128;  // xmm0
    let v10: u64;  // rax

    if a1->field_0 != 0x8000000000000000 {
        v4 = v6;
        v1 = a1[1].field_0;
        v7 = a1->field_0;
        v0 = v7;
        uu_pr::split_lines_if_form_feed::{{closure}}(&v2, &v0);
        v9 = *(&v2 as &i128);
        v10 = v3;
        return struct24 {
            field_0: v9
            field_16: v10
        };
    }
    uu_pr::split_lines_if_form_feed::{{closure}}(a0, a1->field_16);
    return v8;
}
