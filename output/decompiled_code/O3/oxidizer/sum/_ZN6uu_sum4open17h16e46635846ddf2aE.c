fn uu_sum::open(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x120], Other Possible Types: String, Enum
    let v1: i8;  // [bp-0x118]
    let v2: i32;  // [sp-0x108]
    let v3: i64;  // [bp-0x100], Other Possible Types: Argument
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i8;  // [sp-0xd8]
    let v8: i64;  // [bp-0xd0], Other Possible Types: Arguments, Enum, struct8
    let v9: i8;  // [bp-0xc8]
    let v10: i16;  // [sp-0xc4]
    let v11: i64;  // [sp-0xc0]
    let v12: i64;  // [sp-0xb8]
    let v14: i64;  // rax
    let v15: i64;  // rdx
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v19: i128;  // xmm0
    let v20: i128;  // xmm0

    if !(a2 != 1 || *(a1 as &i8) != 45) {
        v14 = __rust_alloc(8, 8);
        *(v14 as &long long) = std::io::stdio::stdin();
        v15 = &g_4dfa70;
        v16 = 0;
    } else if std::path::Path::is_dir(a1, a2) as i8 {
        v4 = 0;
        v5 = a1;
        v6 = a2;
        v7 = 0;
        v3 = Argument {
            value: &v4
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v8 = Arguments {
            pieces: &[&str] {
                ptr: &g_4dfa50
                len: <UNKNOWN>
            }
            args: [&v3]
            fmt: None
        };
        v9 = 2;
        v0 = alloc::fmt::format::format_inner(&v8);
        v2 = 2;
        v14 = __rust_alloc(32, 8);
        goto LABEL_481c9d;
    } else {
        v8 = std::sys::pal::unix::fs::stat(a1, a2);
        if v8 != 2 {
            v8 = struct8 {
                field_0: 0x1b600000000
            };
            v9 = 0;
            v10 = 0;
            v9 = 1;
            v0 = std::fs::OpenOptions::_open(&v8, a1, a2);
            if !v0 {
                v14 = __rust_alloc(4, 4);
                *(v14 as &i32) = *((&v0 as &char + 4) as &i32);
                v15 = &g_4df930;
                v16 = 0;
            } else {
                v17 = v1;
                v8 = 0;
                v9 = 1;
                v11 = 0;
                v12 = v17;
                v14 = __rust_alloc(32, 8);
                v20 = v8;
                *((v14 + 16) as &i64) = v11;
                *(v14 as &i128) = v20;
                v16 = 1;
                v15 = &g_4df7e0;
            }
        } else {
            v4 = 0;
            v5 = a1;
            v6 = a2;
            v7 = 0;
            v3 = &v4;
            v8 = Arguments {
                pieces: &[&str] {
                    ptr: &g_4df988
                    len: <UNKNOWN>
                }
                args: [&v3]
                fmt: None
            };
            v9 = 2;
            v11 = &v3;
            v0 = alloc::fmt::format::format_inner(&v8);
            v2 = 2;
            v14 = __rust_alloc(32, 8);
LABEL_481c9d:
            v19 = v0;
            *((v14 + 16) as &i192) = v0;
            *(v14 as &i128) = v19;
            v16 = 1;
            v15 = &g_4df9e0;
        }
    }
    *((a0 + 8) as &i64) = v14;
    *((a0 + 16) as &i64) = v15;
    *(a0 as &i64) = v16;
    return a0;
}
