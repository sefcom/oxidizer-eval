fn uu_numfmt::format::format_string(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [bp-0x1e8]
    let v1: i64;  // [sp-0x1e0]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1d0]
    let v4: i64;  // [sp-0x1c0], Other Possible Types: struct24
    let v5: i64;  // [sp-0x1b8]
    let v6: i64;  // [sp-0x1b0]
    let v7: i64;  // [sp-0x1a8]
    let v8: i64;  // [sp-0x1a0]
    let v9: i64;  // [sp-0x198]
    let v10: i64;  // [sp-0x190], Other Possible Types: struct32
    let v11: i64;  // [sp-0x180]
    let v12: i64;  // [sp-0x178]
    let v13: i64;  // [sp-0x170]
    let v14: i64;  // [sp-0x168]
    let v15: i8;  // [sp-0x160]
    let v16: i64;  // [sp-0x158]
    let v17: i32;  // [sp-0x14c]
    let v18: i128;  // [sp-0x148]
    let v19: i64;  // [sp-0x138]
    let v20: i64;  // [sp-0x120]
    let v21: i128;  // [sp-0x118]
    let v22: i64;  // [sp-0x108]
    let v23: i192;  // [bp-0xf8]
    let v24: i192;  // [sp-0xd8], Other Possible Types: struct24
    let v25: i192;  // [sp-0xc0]
    let v26: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v27: i192;  // [sp-0x90], Other Possible Types: struct24
    let v28: i192;  // [sp-0x78]
    let v29: i8;  // [bp-0x60], Other Possible Types: struct24
    let v30: i8;  // [bp-0x48], Other Possible Types: struct24
    let v32: i64;  // 4096
    let v37: i64;  // r13
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // 4098
    let v41: i32;  // eax
    let v43: i64;  // r13
    let v45: i64;  // r13
    let v46: i64;  // r12

    v16 = a5;
    v20 = *((a3 + 136) as &i64);
    if v20 != 0x8000000000000000 {
    }
    if *((a3 + 16) as &i64) {
        v37 = *((a3 + 24) as &i64);
        v38 = *((a3 + 176) as &i8);
    } else {
        v38 = *((a3 + 176) as &i8);
        v37 = 0;
        if v38 == 5 && *((a3 + 177) as &i8) == 5 {
            v37 = uu_numfmt::format::parse_implicit_precision(a1, v32);
            v38 = v37 | -0x100 | 5;
        }
    }
    v4 = uu_numfmt::format::transform_from(a1, v32, *((a3 + 160) as &i64), v38 & 4294967295);
    v39 = v4;
    if v39 != 0x8000000000000000 {
        *((a0 + 8) as &i64) = v39;
        *((a0 + 16) as &i64) = v5;
        *((a0 + 24) as &i64) = v6;
    } else {
        v10 = uu_numfmt::format::transform_to(*((a3 + 168) as &i64), *((a3 + 177) as &i8), *((a3 + 201) as &i8), v37);
        v40 = v10;
        v0 = *((&v10 as &char + 8) as &i128);
        v2 = v12;
        if v40 {
            v39 = v2;
            *((a0 + 24) as &i64) = v39;
            *((a0 + 8) as &i128) = v0;
        } else {
            v22 = v2;
            v21 = v0;
            if v20 != 0x8000000000000000 {
                v0 = a3 + 136;
                v17 = -143;
                v25 = format!("{:?}{:?}", &v21, &v0);
                v18 = v25;
                v41 = v19 | -0x100 | 1;
                if !*(a3 as &i64) {
                    goto LABEL_4c43c2;
                }
LABEL_4c430e:
                v43 = *((a3 + 8) as &i64);
            } else {
                v19 = v22;
                v18 = v21;
                v41 = 0;
                if !(!*(a3 as &i64)) {
                    goto LABEL_4c430e;
                }
LABEL_4c43c2:
                v43 = v16;
                if !a4 {
                    v43 = *((a3 + 184) as &i64);
                }
            }
            v45 = v43;
            v17 = v41;
            if !v45 {
                v2 = v19;
                v0 = v18;
            } else if !(v45 <= 0 || !*((a3 + 81) as &i8)) {
                v0 = &v18;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = v45;
                v3 = 0;
                v10 = 2;
                v11 = 1;
                v12 = 1;
                v13 = 0;
                v14 = 48;
                v15 = 1;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                v24 = core::option::Option<T>::map_or_else(&v4);
                v23 = v24;
                if !a4 {
                    v16 = *((a3 + 184) as &i64);
                }
                if !v16 {
                    v0 = v24;
                } else {
                    if v16 <= 0 {
                        v0 = &v23;
                        v1 = <alloc::string::String as core::fmt::Display>::fmt;
                        v2 = -(v16);
                        v3 = 0;
                        v10 = 2;
                        v11 = 1;
                        v12 = 1;
                        v13 = 0;
                        v14 = 32;
                        v15 = 0;
                        v4 = &g_416000;
                        v5 = 1;
                        v8 = &v10;
                        v9 = 1;
                        v6 = &v0;
                        v7 = 2;
                        v46 = &v30;
                        v30 = core::option::Option<T>::map_or_else(&v4);
                    } else {
                        v0 = &v23;
                        v1 = <alloc::string::String as core::fmt::Display>::fmt;
                        v2 = v16;
                        v3 = 0;
                        v10 = 2;
                        v11 = 1;
                        v12 = 1;
                        v13 = 0;
                        v14 = 32;
                        v15 = 1;
                        v4 = &g_416000;
                        v5 = 1;
                        v8 = &v10;
                        v9 = 1;
                        v6 = &v0;
                        v7 = 2;
                        v46 = &v29;
                        v29 = core::option::Option<T>::map_or_else(&v4);
                    }
                    v2 = *((v46 + 16) as &i64);
                    v0 = *(v46 as &i128);
                }
            } else if v45 > 0 {
                v0 = &v18;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = v45;
                v3 = 0;
                v10 = 2;
                v11 = 1;
                v12 = 1;
                v13 = 0;
                v14 = 32;
                v15 = 1;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                v26 = core::option::Option<T>::map_or_else(&v4);
                v0 = v26;
            } else {
                v0 = &v18;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = -(v45);
                v3 = 0;
                v10 = 2;
                v11 = 1;
                v12 = 1;
                v13 = 0;
                v14 = 32;
                v15 = 0;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                v27 = core::option::Option<T>::map_or_else(&v4);
                v0 = v27;
            }
            v28 = format!("{:?}{:?}{:?}", a3 + 32, &v0, a3 + 56);
            *((a0 + 24) as &i64) = *((&v28 as &char + 16) as &i64);
            *((a0 + 8) as &i192) = v28;
            *(a0 as &i64) = 0;
            v39 = 0x8000000000000000;
            if v20 != 0x8000000000000000 {
                return v39;
            }
            return v39;
        }
    }
    return struct8 {
        field_0: 1
    };
}
