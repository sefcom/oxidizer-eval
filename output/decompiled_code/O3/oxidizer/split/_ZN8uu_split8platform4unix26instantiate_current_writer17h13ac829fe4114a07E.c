fn uu_split::platform::unix::instantiate_current_writer(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> u64 {
    let v0: i256;  // [sp-0x2a8], Other Possible Types: Enum, struct8
    let v1: i32;  // [bp-0x2a0]
    let v2: i8;  // [sp-0x29f]
    let v3: i8;  // [sp-0x29e]
    let v4: i8;  // [sp-0x29d]
    let v5: i8;  // [bp-0x29c]
    let v6: i128;  // [bp-0x288]
    let v7: i64;  // [sp-0x278], Other Possible Types: Enum
    let v8: i64;  // [sp-0x274]
    let v9: i8;  // [bp-0x270]
    let v10: i128;  // [sp-0x26c]
    let v11: i128;  // [sp-0x258], Other Possible Types: Argument
    let v12: i128;  // [sp-0x248]
    let v13: i64;  // [sp-0x238]
    let v14: i64;  // [sp-0x230]
    let v15: i64;  // [sp-0x228]
    let v16: i64;  // [sp-0x220]
    let v17: i64;  // [sp-0x218]
    let v18: i64;  // [sp-0x210]
    let v19: i32;  // [sp-0x204]
    let v20: i64;  // [sp-0x200]
    let v21: i128;  // [sp-0x1f8]
    let v22: i64;  // [sp-0x1e8], Other Possible Types: Enum, Arguments, struct149
    let v23: i64;  // [sp-0x1d8]
    let v24: i8;  // [sp-0x118], Other Possible Types: String, Enum, struct8
    let v26: i64;  // r15
    let v27: i64;  // rax
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rdx
    let v36: i64;  // rax
    let v37: i128;  // xmm0

    v17 = a2;
    v18 = a3;
    if *(a1 as &i64) != 0x8000000000000000 {
        v16 = *((a1 + 8) as &i64);
        v26 = *((a1 + 16) as &i64);
        v22 = std::env::_var(&g_413b80, 4);
        std::env::set_var(&g_413b80, 4, a2, a3);
        v27 = __rust_alloc(4, 1);
        *(v27 as &i32) = 1162627398;
        v12 = v23;
        v11 = v22;
        v13 = 4;
        v14 = v27;
        v15 = 4;
        v22 = std::env::_var(&g_41dad4, 5);
        if v22 {
            v32 = __rust_alloc(7, 1);
            *((v32 + 3) as &i32) = 1752379246;
            *(v32 as &i32) = 1852400175;
        }
        v22 = std::sys::pal::unix::process::process_common::Command::new(v32, 7);
        memcpy(&v24, &v22, 208);
        v24 = std::sys::pal::unix::process::process_common::Command::arg(&g_41dad9, 2);
        v24 = std::sys::pal::unix::process::process_common::Command::arg(v16, v26);
        v24 = std::sys::pal::unix::process::process_common::Command::stdin(2, v34);
        v0 = std::process::Command::spawn(&v24);
        if v0 {
            *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
            *(a0 as &i64) = 0x8000000000000000;
            return a0;
        }
        v7 = *((&v0 as &char + 4) as &i32);
        v8 = *((&v0 as &char + 8) as &i64);
        v10 = *((&v0 as &char + 16) as &i128);
        v6 = v10;
        v19 = v7;
        v20 = v8;
        v21 = v6;
        v36 = __rust_alloc(28, 4);
        v37 = v19;
        *((v36 + 12) as &i128) = v21;
        *(v36 as &i128) = v37;
        *(a0 as &i64) = 0x2000;
        *((a0 + 8) as &long long) = __rust_alloc(0x2000, 1);
        *((a0 + 16) as &i64) = 0;
        *((a0 + 24) as &i8) = 0;
        *((a0 + 32) as &i64) = v36;
        v33 = &g_50bf38;
    } else {
        if !a4 {
            *(&v0.field_96 as &struct8) = struct8 {
                field_0: 0x1b600000000
            };
            v1 = 0;
            v5 = 0;
            v3 = 1;
            v7 = std::fs::OpenOptions::_open(&v0, a2, a3);
            if v7 {
                v6 = v9;
                v11 = Argument {
                    value: &v17
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v22 = Arguments {
                    pieces: ["unable to re-open '", "'; aborting"]
                    args: [&v11]
                    fmt: None
                };
                v24 = alloc::fmt::format::format_inner(&v22);
                v30 = std::io::error::Error::new(39, &v24);
                *((a0 + 8) as &i64) = v30;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
        } else {
            v0 = 0x1b600000000;
            v1 = 0;
            v5 = 0;
            v2 = 1;
            v5 = 1;
            v4 = 1;
            v7 = std::fs::OpenOptions::_open(&v0, a2, a3);
            if v7 {
                v6 = v9;
                v11 = &v17;
                v22 = Arguments {
                    pieces: ["unable to open '", "'; aborting"]
                    args: [&v11]
                    fmt: None
                };
                v23 = &v11;
                v24 = alloc::fmt::format::format_inner(&v22);
                v30 = std::io::error::Error::new(39, &v24);
                *((a0 + 8) as &i64) = v30;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
        }
        v29 = __rust_alloc(4, 4);
        *(v29 as &i32) = *((&v7 as &char + 4) as &i32);
        *(a0 as &i64) = 0x2000;
        *((a0 + 8) as &long long) = __rust_alloc(0x2000, 1);
        *((a0 + 16) as &i64) = 0;
        *((a0 + 24) as &i8) = 0;
        *((a0 + 32) as &i64) = v29;
        v33 = &g_50bee8;
    }
    *((a0 + 40) as &i64) = v33;
    return a0;
}
