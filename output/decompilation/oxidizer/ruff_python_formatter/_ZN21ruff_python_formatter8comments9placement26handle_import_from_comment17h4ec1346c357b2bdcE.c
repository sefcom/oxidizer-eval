fn ruff_python_formatter::comments::placement::handle_import_from_comment(a0: i64, a1: i64, a2: i64) -> double {
    let v1: u32;  // ebx
    let v2: core::fmt::Arguments;  // xmm0
    let v3: u128;  // xmm1
    let v4: iNone;  // xmm2
    let v5: core::fmt::Arguments;  // xmm0
    let v6: u32;  // eax

    if !a1[72] as i8 && *((a2 + 16) as &i64) {
        v1 = a1[64] as i32;
        if ruff_python_formatter::comments::placement::handle_import_from_comment::{{closure}}(*((a2 + 64) as &i32), v1, *((a2 + 8) as &i64)) {
            v5 = *(a1 as &i128);
            v6 = a1[68] as i32;
            return struct40 {
                field_0: 96
                field_8: v5
                field_24: v1
                field_28: v6
                field_32: 0
            };
        }
    }
    *((a0 + 64) as &i128) = a1[64] as i128;
    v2 = *(a1 as &i128);
    v3 = a1[16] as i128;
    v4 = a1[32] as i128;
    *((a0 + 48) as &i128) = a1[48] as i128;
    *((a0 + 32) as void*) = v4;
    *((a0 + 16) as &u128) = v3;
    *(a0 as &core::fmt::Arguments) = v2;
    return v2 as u64;
}
