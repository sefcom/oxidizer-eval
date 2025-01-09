fn uu_numfmt::format::format_string(a0: &struct32, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
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
    let v11: i64;  // [sp-0x188]
    let v12: i64;  // [sp-0x180]
    let v13: i64;  // [sp-0x178]
    let v14: i64;  // [sp-0x170]
    let v15: i64;  // [sp-0x168]
    let v16: i8;  // [sp-0x160]
    let v17: i64;  // [sp-0x158]
    let v18: i32;  // [sp-0x14c]
    let v19: i128;  // [sp-0x148]
    let v20: i64;  // [sp-0x138]
    let v21: i64;  // [sp-0x120]
    let v22: i128;  // [sp-0x118]
    let v23: i64;  // [sp-0x108]
    let v24: i128;  // [sp-0xf8]
    let v25: i64;  // [sp-0xe8]
    let v26: i8;  // [bp-0xd8]
    let v27: i8;  // [bp-0xc8]
    let v28: i8;  // [bp-0xc0]
    let v29: i8;  // [bp-0xb0]
    let v30: i8;  // [bp-0xa8]
    let v31: i8;  // [bp-0x98]
    let v32: i8;  // [bp-0x90]
    let v33: i8;  // [bp-0x80]
    let v35: i64;  // 4096
    let v40: i64;  // r13
    let v41: i64;  // rax
    let v43: i64;  // 4098
    let v44: i32;  // eax
    let v46: i64;  // r13
    let v48: i64;  // r13

    v17 = a5;
    v21 = *((a3 + 136) as &i64);
    if v21 != 0x8000000000000000 {
    }
    if *((a3 + 16) as &i64) {
        v40 = *((a3 + 24) as &i64);
        v41 = *((a3 + 176) as &i8);
    } else {
        v41 = *((a3 + 176) as &i8);
        v40 = 0;
        if v41 == 5 && *((a3 + 177) as &i8) == 5 {
            v40 = uu_numfmt::format::parse_implicit_precision(a1, v35);
            v41 = v40 & -0x100 | 5;
        }
    }
    v4 = uu_numfmt::format::transform_from(a1, v35, *((a3 + 160) as &i64), v41 & 4294967295);
    if v4 != 0x8000000000000000 {
        return struct32 {
            field_0: 1
            field_8: v42
            field_16: v5
            field_24: v6
        };
    }
    v10 = uu_numfmt::format::transform_to(*((a3 + 168) as &i64), *((a3 + 177) as &i8), *((a3 + 201) as &i8), v40);
    v43 = v10;
    v0 = *((&v10 as &char + 8) as &i128);
    v2 = v13;
    if v43 {
        *((a0 + 24) as &i64) = v2;
        *((a0 + 8) as &i128) = v0;
    }
    v23 = v2;
    v22 = v0;
    if v21 != 0x8000000000000000 {
        v0 = a3 + 136;
        v4 = &v22;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v0;
        v7 = <&T as core::fmt::Display>::fmt;
        v10 = &g_41a370;
        v11 = 2;
        v14 = 0;
        v12 = &v4;
        v13 = 2;
        v18 = &g_41a301;
        core::option::Option<T>::map_or_else();
        v19 = v28;
        v20 = v29;
        v44 = v20 & -0x100 | 1;
        if !*(a3 as &i64) {
            goto LABEL_4c43c2;
        }
LABEL_4c430e:
        v46 = *((a3 + 8) as &i64);
    } else {
        v20 = v23;
        v19 = v22;
        v44 = 0;
        if !(!*(a3 as &i64)) {
            goto LABEL_4c430e;
        }
LABEL_4c43c2:
        v46 = v17;
        if !a4 {
            v46 = *((a3 + 184) as &i64);
        }
    }
    v48 = v46;
    v18 = v44;
    if !v48 {
        v2 = v20;
        v0 = v19;
    } else if !(v48 <= 0 || !*((a3 + 81) as &i8)) {
        v0 = &v19;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = v48;
        v3 = 0;
        v10 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
        v16 = 1;
        v4 = &g_416000;
        v5 = 1;
        v8 = &v10;
        v9 = 1;
        v6 = &v0;
        v7 = 2;
        core::option::Option<T>::map_or_else();
        v25 = v27;
        v24 = v26;
        if !a4 {
            v17 = *((a3 + 184) as &i64);
        }
        if !v17 {
            v2 = v27;
            v0 = v26;
        } else {
            if v17 <= 0 {
                v0 = &v24;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = -(v17);
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 32;
                v16 = 0;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                core::option::Option<T>::map_or_else();
            } else {
                v0 = &v24;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = v17;
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 32;
                v16 = 1;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                core::option::Option<T>::map_or_else();
            }
        }
    } else if v48 > 0 {
        v0 = &v19;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = v48;
        v3 = 0;
        v10 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        v16 = 1;
        v4 = &g_416000;
        v5 = 1;
        v8 = &v10;
        v9 = 1;
        v6 = &v0;
        v7 = 2;
        core::option::Option<T>::map_or_else();
        v0 = v30;
        v2 = v31;
    } else {
        v0 = &v19;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = -(v48);
        v3 = 0;
        v10 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        v16 = 0;
        v4 = &g_416000;
        v5 = 1;
        v8 = &v10;
        v9 = 1;
        v6 = &v0;
        v7 = 2;
        core::option::Option<T>::map_or_else();
        v0 = v32;
        v2 = v33;
    }
    v10 = a3 + 32;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = &v0;
    v13 = <alloc::string::String as core::fmt::Display>::fmt;
    v14 = a3 + 56;
    v15 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_423118;
    v5 = 3;
    v8 = 0;
    v6 = &v10;
    v7 = 3;
    core::option::Option<T>::map_or_else();
}
