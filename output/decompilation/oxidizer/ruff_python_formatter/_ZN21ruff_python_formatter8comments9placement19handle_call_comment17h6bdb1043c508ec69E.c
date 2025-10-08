fn ruff_python_formatter::comments::placement::handle_call_comment(a0: i64, a1: void*) -> long long {
    let v0: struct16;  // [bp-0x30]
    let v2: i64;  // rax
    let v3: u32;  // ebx
    let v4: u32;  // ebp
    let v5: u128;  // xmm0
    let v6: iNone;  // xmm1
    let v7: iNone;  // xmm2

    if a1[72] as i8 == 1 {
        v2 = a1[16] as i64;
        if v2 != 94 {
            v0 = struct16 {
                field_0: v2
                field_8: a1[24] as i64
            };
            if a1[32] as i64 != 94 {
                v3 = a1[64] as i32;
                v4 = a1[68] as i32;
                v2 = ruff_python_formatter::comments::placement::handle_call_comment::{{closure}}::{{closure}}(&v0, v3, v4, a1[32] as i64, a1[40] as i64);
                if v2 as u8 {
                    return struct40 {
                        field_0: 96
                        field_8: *(a1 as &i128)
                        field_24: v3
                        field_28: v4
                        field_32: 0x100
                    };
                }
            }
        }
    }
    *((a0 + 64) as &i128) = a1[64] as i128;
    v5 = *(a1 as &i128);
    v6 = a1[16] as i128;
    v7 = a1[32] as i128;
    *((a0 + 48) as &i128) = a1[48] as i128;
    *((a0 + 32) as void*) = v7;
    *((a0 + 16) as void*) = v6;
    *(a0 as &u128) = v5;
    return v2;
}
