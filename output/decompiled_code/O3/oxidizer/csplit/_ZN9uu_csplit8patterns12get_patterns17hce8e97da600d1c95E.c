fn uu_csplit::patterns::get_patterns(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x68]
    let v1: i64;  // [sp-0x58]
    let v2: i128;  // [sp-0x48]
    let v3: i64;  // [sp-0x38]
    let v4: i320;  // [sp-0x30], Other Possible Types: Result<struct40, struct32>, struct40
    let v6: i64;  // rax
    let v7: i64;  // rcx
    let v8: i128;  // xmm0

    v4 = uu_csplit::patterns::extract_patterns(a1, a2, a3, a4, a5);
    v6 = v4;
    v2 = *((&v4 as &char + 8) as &i128);
    v3 = *((&v4 as &char + 24) as &i64);
    if v6 != 12 {
        v7 = *((&v4 as &char + 32) as &i64);
        return struct40 {
            field_0: v8
            field_16: *((&v4 as &char + 16) as &i128)
            field_32: *((&v4 as &char + 32) as &i64)
        };
    }
    v0 = v2;
    v1 = v3;
    v4 = uu_csplit::patterns::validate_line_numbers(*((&v0 as &char + 8) as &i64), v3);
    if v4 == 12 {
        return struct40 {
            field_0: v8
            field_16: *((&v4 as &char + 16) as &i128)
            field_32: *((&v4 as &char + 32) as &i64)
        };
    }
    v8 = v4;
    return struct40 {
        field_0: v8
        field_16: *((&v4 as &char + 16) as &i128)
        field_32: *((&v4 as &char + 32) as &i64)
    };
}
