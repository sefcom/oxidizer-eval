fn uu_numfmt::format::format_string(a0: &struct32, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x1e8], Other Possible Types: struct24, int
    let v1: i64;  // [sp-0x1e0]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1d0]
    let v4: struct40;  // [sp-0x1c0], Other Possible Types: struct24, unsigned long
    let v7: i64;  // [sp-0x198]
    let v8: i64;  // [sp-0x190], Other Possible Types: struct32
    let v9: i64;  // [sp-0x180]
    let v10: i64;  // [sp-0x178]
    let v11: i64;  // [sp-0x170]
    let v12: i64;  // [sp-0x168]
    let v13: i8;  // [sp-0x160]
    let v14: i64;  // [sp-0x158]
    let v15: i32;  // [sp-0x14c]
    let v16: String;  // [sp-0x148], Other Possible Types: int
    let v17: i64;  // [sp-0x138]
    let v18: i64;  // [sp-0x120]
    let v19: iNone;  // [sp-0x118]
    let v20: i64;  // [sp-0x108]
    let v21: struct24;  // [sp-0xf8]
    let v22: struct24;  // [sp-0xd8]
    let v23: String;  // [sp-0xc0]
    let v24: struct24;  // [sp-0xa8]
    let v25: struct24;  // [sp-0x90]
    let v26: String;  // [sp-0x78]
    let v27: struct24;  // [sp-0x60]
    let v28: struct24;  // [sp-0x48]
    let v30: i64;  // rbp
    let v31: i64;  // 4096
    let v32: i64;  // rax
    let v33: i64;  // rdx
    let v35: i64;  // r13
    let v36: i64;  // rax
    let v38: i64;  // 4098
    let v39: i32;  // eax
    let v40: i64;  // r13

    v14 = a5;
    v30 = a1;
    v18 = *((a3 + 136) as &i64);
    v31 = a2;
    if v18 != 0x8000000000000000 {
        v32 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*((a3 + 144) as &i64), *((a3 + 152) as &i64), a1, a2);
        if v32 {
            v30 = v32;
        }
        if v32 {
            v31 = v33;
        }
    }
    if *((a3 + 16) as &i64) {
        v35 = *((a3 + 24) as &i64);
        v36 = *((a3 + 176) as &i8);
    } else {
        v36 = *((a3 + 176) as &i8);
        v35 = 0;
        if v36 as u8 == 5 && *((a3 + 177) as &i8) == 5 {
            v35 = uu_numfmt::format::parse_implicit_precision(v30, v31);
            v36 = v35 & -0x100 | 5;
        }
    }
    v4 = uu_numfmt::format::transform_from(v30, v31, *((a3 + 160) as &i64), v36 & 4294967295);
    if v4 != 0x8000000000000000 {
        return struct32 {
            field_0: 1
            field_8: v37
            field_16: v5
            field_24: v6
        };
    }
    v8 = uu_numfmt::format::transform_to(*((a3 + 168) as &i64), *((a3 + 177) as &i8), *((a3 + 201) as &i8), v35);
    v38 = v8;
    *(&v0 as &i128) = *(&v8.field_8 as &i128);
    v2 = v10;
    if v38 {
        *((a0 + 24) as &unsigned long) = v2;
        *((a0 + 8) as &i128) = v0 as i128;
    }
    v20 = v2;
    v19 = v0 as i128;
    if v18 != 0x8000000000000000 {
        v0 = a3 + 136;
        v15 = &g_41a301;
        v23 = format!("{}{}", &v19, &v0);
        v16 = v23;
        v39 = (v17 & -0x100 | 1) as u32;
        if !*(a3 as &i64) {
            goto LABEL_4c43c2;
        }
LABEL_4c430e:
        v40 = *((a3 + 8) as &i64);
    } else {
        v17 = v20;
        v16 = v19;
        v39 = 0;
        if !(!*(a3 as &i64)) {
            goto LABEL_4c430e;
        }
LABEL_4c43c2:
        v40 = v14;
        if !a4 {
            v40 = *((a3 + 184) as &i64);
        }
    }
    v15 = v39;
    if !v40 {
        v2 = v17;
        v0 = v16;
    } else if !(v40 <= 0 || !*((a3 + 81) as &i8)) {
        v0 = &v16;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = v40;
        v3 = 0;
        v8 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 48;
        v13 = 1;
        v4 = struct40 {
            field_0: &g_416000
            field_8: 1
            field_16: &v0
            field_24: 2
            field_32: &v8
        };
        v7 = 1;
        v22 = core::option::Option<T>::map_or_else(&v4);
        v21 = v22;
        if !a4 {
            v14 = *((a3 + 184) as &i64);
        }
        if !v14 {
            v0 = v22;
        } else {
            if v14 <= 0 {
                v0 = &v21;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = -(v14);
                v3 = 0;
                v8 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 0;
                v4 = struct40 {
                    field_0: &g_416000
                    field_8: 1
                    field_16: &v0
                    field_24: 2
                    field_32: &v8
                };
                v7 = 1;
                v28 = core::option::Option<T>::map_or_else(&v4);
            } else {
                v0 = &v21;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = v14;
                v3 = 0;
                v8 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v4 = struct40 {
                    field_0: &g_416000
                    field_8: 1
                    field_16: &v0
                    field_24: 2
                    field_32: &v8
                };
                v7 = 1;
                v27 = core::option::Option<T>::map_or_else(&v4);
            }
        }
    } else if v40 > 0 {
        v0 = &v16;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = v40;
        v3 = 0;
        v8 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 32;
        v13 = 1;
        v4 = struct40 {
            field_0: &g_416000
            field_8: 1
            field_16: &v0
            field_24: 2
            field_32: &v8
        };
        v7 = 1;
        v24 = core::option::Option<T>::map_or_else(&v4);
        v0 = v24;
    } else {
        v0 = &v16;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = -(v40);
        v3 = 0;
        v8 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 32;
        v13 = 0;
        v4 = struct40 {
            field_0: &g_416000
            field_8: 1
            field_16: &v0
            field_24: 2
            field_32: &v8
        };
        v7 = 1;
        v25 = core::option::Option<T>::map_or_else(&v4);
        v0 = v25;
    }
    v26 = format!("{}{}{}", a3 + 32, &v0, a3 + 56);
}
