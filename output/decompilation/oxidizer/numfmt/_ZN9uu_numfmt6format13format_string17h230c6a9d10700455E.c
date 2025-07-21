fn uu_numfmt::format::format_string(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: core::fmt::rt::Argument;  // [bp-0x1e8], Other Possible Types: u64
    let v1: u128;  // [bp-0x1e8]
    let v2: core::fmt::rt::Argument;  // [bp-0x1d8], Other Possible Types: u64
    let v3: u128;  // [bp-0x1d8]
    let v4: core::fmt::Arguments;  // [sp-0x1c0], Other Possible Types: u64
    let v5: u64;  // [bp-0x1b8]
    let v6: u64;  // [bp-0x1b0]
    let v7: struct80;  // [sp-0x190], Other Possible Types: u64
    let v8: i8;  // [bp-0x188]
    let v9: struct64;  // [sp-0x180], Other Possible Types: u64
    let v10: struct64;  // [sp-0x178], Other Possible Types: u64
    let v11: void*;  // [sp-0x170]
    let v12: u64;  // [sp-0x168]
    let v13: u8;  // [sp-0x160]
    let v14: u64;  // [bp-0x158]
    let v15: core::fmt::rt::Argument;  // [bp-0x158]
    let v16: u32;  // [bp-0x14c]
    let v17: u128;  // [bp-0x148]
    let v18: u64;  // [bp-0x138]
    let v19: u64;  // [bp-0x120]
    let v20: u128;  // [bp-0x118]
    let v21: u64;  // [bp-0x108]
    let v22: struct24;  // [bp-0xf8]
    let v23: struct24;  // [bp-0xd8], Other Possible Types: u128
    let v24: u64;  // [bp-0xc8]
    let v25: u128;  // [bp-0xc0]
    let v26: u64;  // [bp-0xb0]
    let v27: u128;  // [bp-0xa8]
    let v28: u64;  // [bp-0x98]
    let v29: u128;  // [bp-0x90]
    let v30: u64;  // [bp-0x80]
    let v31: u128;  // [bp-0x78]
    let v32: u64;  // [bp-0x68]
    let v33: u8;  // [bp-0x60]
    let v34: u8;  // [bp-0x48]
    let v36: core::option::Option<&str>;  // rax
    let v37: u8;  // r13b
    let v38: core::fmt::rt::Argument;  // al
    let v39: u32;  // eax
    let v40: u64;  // r13
    let v41: i64;  // r12
    let v42: core::fmt::rt::Argument;  // [bp-0x1e8], Other Possible Types: u128

    v14 = a5;
    v19 = *((a3 + 136) as &i64);
    if *((a3 + 136) as &i64) != 0x8000000000000000 {
        v36 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*((a3 + 144) as &i64), *((a3 + 152) as &i64), a1, a2) as u64;
        if let Some(_) = v36 {
            a1 = v36;
        }
    }
    if !*((a3 + 16) as &i64) {
        v37 = 0;
        if *((a3 + 176) as &i8) == 5 && *((a3 + 177) as &i8) == 5 {
            v37 = uu_numfmt::format::parse_implicit_precision(a1, a2) as i8;
        }
    }
    uu_numfmt::format::transform_from(a1, a2, *((a3 + 160) as &i64), v38 as u32, a5);
    if v4 != 0x8000000000000000 {
        *((a0 + 8) as &u64) = v4;
        *((a0 + 16) as &u64) = v5;
        *((a0 + 24) as &u64) = v6;
    }
    uu_numfmt::format::transform_to(*((a3 + 168) as &i64), *((a3 + 177) as &i8), *((a3 + 201) as &i8), v37, a5);
    v42 = *(&v8 as &i128);
    v2 = v10;
    if v7 {
        return Err(struct24 {
            field_0: v42
            field_16: v2
        });
    }
    v21 = v2;
    v20 = v42;
    if v19 == 0x8000000000000000 {
        v18 = v21;
        v17 = v20;
        v39 = 0;
        if !*(a3 as &i64) {
            goto LABEL_4c43c2;
        }
    } else {
        v0 = a3 + 136;
        v16 = &g_41a301;
        format!("{}{}", &v20, &v0);
        v17 = v25;
        v18 = v26;
        v39 = v18 & -0x100 | 1;
        if !*(a3 as &i64) {
LABEL_4c43c2:
            v40 = v14;
        }
    }
    v16 = v39;
    if !v40 {
        v2 = v18;
        v42 = v17;
    } else if v40 > 0 && *((a3 + 81) as &i8) {
        v0 = core::fmt::rt::Argument {
            ty: &v17
        };
        v2 = core::fmt::rt::Argument {
            ty: v40
        };
        v7 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 48;
        v13 = 1;
        v4 = core::fmt::Arguments {
            pieces: [&g_416000]
            args: [v42, v3]
            fmt: &v7
        };
        core::option::Option<T>::map_or_else(&v23, &v4);
        v22 = v23;
        if v14 {
            if v14 > 0 {
                v0 = core::fmt::rt::Argument {
                    ty: &v22
                };
                v2 = v15;
                v7 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v4 = core::fmt::Arguments {
                    pieces: [&g_416000]
                    args: [v42, v3]
                    fmt: &v7
                };
                v41 = &v33;
                core::option::Option<T>::map_or_else(&v33, &v4);
            } else {
                v0 = core::fmt::rt::Argument {
                    ty: &v22
                };
                v2 = core::fmt::rt::Argument {
                    ty: -(v14)
                };
                v7 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 0;
                v4 = core::fmt::Arguments {
                    pieces: [&g_416000]
                    args: [v42, v3]
                    fmt: &v7
                };
                v41 = &v34;
                core::option::Option<T>::map_or_else(&v34, &v4);
            }
            v2 = *((v41 + 16) as &i64);
            v42 = *(v41 as &i128);
        } else {
            v2 = v24;
            v42 = v23;
        }
    } else if v40 > 0 {
        v42 = core::fmt::rt::Argument {
            ty: &v17
        };
        v2 = core::fmt::rt::Argument {
            ty: v40
        };
        v7 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 32;
        v13 = 1;
        v4 = core::fmt::Arguments {
            pieces: [&g_416000]
            args: [v1, v3]
            fmt: &v7
        };
        core::option::Option<T>::map_or_else(&v27, &v4);
        v42 = v27;
        v2 = v28;
    } else {
        v42 = core::fmt::rt::Argument {
            ty: &v17
        };
        v2 = core::fmt::rt::Argument {
            ty: -(v40)
        };
        v7 = 2;
        v9 = 1;
        v10 = 1;
        v11 = 0;
        v12 = 32;
        v13 = 0;
        v4 = core::fmt::Arguments {
            pieces: [&g_416000]
            args: [v1, v3]
            fmt: &v7
        };
        core::option::Option<T>::map_or_else(&v29, &v4);
        v42 = v29;
        v2 = v30;
    }
    format!("{}{}{}", a3 + 32, &v42 as u8, a3 + 56);
    return Ok(struct24 {
        field_0: v31
        field_16: v32
    });
    return;
}
