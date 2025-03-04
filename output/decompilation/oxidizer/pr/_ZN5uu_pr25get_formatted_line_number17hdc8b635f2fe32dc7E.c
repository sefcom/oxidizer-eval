fn uu_pr::get_formatted_line_number(a0: &struct24, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x160]
    let v1: i64;  // [bp-0x158], Other Possible Types: struct40
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128]
    let v8: i64;  // [sp-0x120]
    let v9: i64;  // [sp-0x118]
    let v10: i64;  // [sp-0x110]
    let v11: i64;  // [sp-0x108]
    let v12: i64;  // [sp-0x100]
    let v13: i64;  // [sp-0xf8]
    let v14: i64;  // [sp-0xf0]
    let v15: i64;  // [sp-0xe0]
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i64;  // [sp-0xc8]
    let v19: i8;  // [sp-0xc0]
    let v20: i64;  // [sp-0xb8]
    let v21: i64;  // [sp-0xa8]
    let v22: i64;  // [sp-0x98]
    let v23: i64;  // [sp-0x90]
    let v24: i8;  // [sp-0x88]
    let v25: struct24;  // [sp-0x80]
    let v26: i64;  // [sp-0x68]
    let v27: i64;  // [sp-0x60]
    let v28: struct24;  // [sp-0x58]
    let v29: struct24;  // [sp-0x40]
    let v32: i64;  // rax
    let v33: i64;  // r13
    let v34: i64;  // r14
    let v36: i64;  // rdx
    let v37: i64;  // rax

    v13 = a2;
    if *((a1 + 216) as &i64) != 0x8000000000000000 {
        if !*((a1 + 16) as &i64) {
            if !(!a2) {
                goto LABEL_5c85ec;
            }
        } else {
            if a2 && !a3 {
LABEL_5c85ec:
                v25 = <T as alloc::string::ToString>::to_string(&v13);
                v33 = *((a1 + 240) as &i64);
                v0 = a1 + 216;
                v34 = v25.field_16;
                if v34 < v33 {
                    v7 = &v25;
                    v8 = <alloc::string::String as core::fmt::Display>::fmt;
                    v9 = &v0;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = v33;
                    v12 = 0;
                    v14 = 2;
                    v15 = 1;
                    v16 = 2;
                    v17 = 0;
                    v18 = 32;
                    v19 = 1;
                    v20 = 2;
                    v21 = 2;
                    v22 = 1;
                    v23 = 32;
                    v24 = 3;
                    v1 = struct40 {
                        field_0: &g_46bf10
                        field_8: 2
                        field_16: &v7
                        field_24: 3
                        field_32: &v14
                    };
                    v6 = 2;
                    v29 = core::option::Option<T>::map_or_else(&v1);
                    v32 = v37;
                    return v32;
                }
                v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v34 - v33, *((&v25.field_0 as &char + 8) as &i64), v34);
                v27 = v36;
                v7 = &v26;
                v8 = <&T as core::fmt::Display>::fmt;
                v9 = &v0;
                v10 = <&T as core::fmt::Display>::fmt;
                v11 = v33;
                v12 = 0;
                v14 = 2;
                v15 = 1;
                v16 = 2;
                v17 = 0;
                v18 = 32;
                v19 = 1;
                v20 = 2;
                v21 = 2;
                v22 = 1;
                v23 = 32;
                v24 = 3;
                v1 = &g_46bf10;
                v2 = 2;
                v5 = &v14;
                v6 = 2;
                v3 = &v7;
                v4 = 3;
                v28 = core::option::Option<T>::map_or_else(&v1);
                return v32;
            }
        }
    }
    *(a0 as &i64) = 0;
    *((a0 + 8) as &i64) = 1;
    *((a0 + 16) as &i64) = 0;
    v32 = 0x8000000000000000;
    return v32;
}
