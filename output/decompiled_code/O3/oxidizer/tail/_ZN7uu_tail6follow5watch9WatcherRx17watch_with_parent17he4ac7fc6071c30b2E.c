fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0xc8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xc0]
    let v2: i64;  // [sp-0xb8]
    let v3: i192;  // [bp-0xa8], Other Possible Types: struct24, Enum, Arguments
    let v4: i64;  // [sp-0xa0]
    let v5: i64;  // [sp-0x98]
    let v6: i64;  // [sp-0x90]
    let v7: i128;  // [sp-0x78]
    let v8: i64;  // [sp-0x70]
    let v9: i64;  // [sp-0x68]
    let v10: Argument;  // [bp-0x58]
    let v11: i192;  // [sp-0x48], Other Possible Types: String
    let v13: i64;  // rbx
    let v14: i64;  // r12
    let v15: i64;  // rdx
    let v16: i64;  // rcx
    let v17: i64;  // r13
    let v19: i64;  // r12
    let v20: i64;  // r14
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i64;  // rbx
    let v24: i64;  // r12
    let v25: i64;  // rbp
    let v26: i128;  // xmm0

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    v13 = v1;
    v14 = v2;
    if !std::path::Path::is_file(v13, v14) as i8 {
LABEL_4c09a6:
        v23 = v1;
        v24 = v2;
        if !std::path::Path::is_absolute(v23, v24) as i8 {
            v3 = std::sys::pal::unix::fs::canonicalize(v23, v24);
            v25 = v3;
            if v25 != 0x8000000000000000 {
                v0 = v25;
                v1 = v6;
                v2 = v5;
            } else {
                v3 = 0x8000000000000000;
                v6 = v4;
                v21 = __rust_alloc(32, 8);
                v26 = v3;
                *((v21 + 16) as &i128) = *((&v3 as &char + 16) as &i128);
                *(v21 as &i128) = v26;
LABEL_4c0a7f:
                if v0 {
                    return v21;
                }
                return v21;
            }
        }
        v21 = uu_tail::follow::watch::WatcherRx::watch(a0, a1);
        if !v21 {
            return 0;
        }
    } else {
        v17 = std::path::Path::parent(v13, v14, v15, v16);
        if v17 {
            if std::path::Path::is_dir(v17, v15) as i8 {
                v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v17, v15);
                v2 = v5;
                v22 = v3;
            } else {
                v3 = std::sys::os_str::bytes::Slice::to_owned(&g_424256, 1);
                v9 = v5;
                v7 = v3;
                v2 = v9;
            }
            v0 = v22;
            goto LABEL_4c09a6;
        } else {
            v7 = v13;
            v8 = v14;
            v10 = Argument {
                value: &v7
                formatter: <std::path::Display as core::fmt::Display>::fmt
            };
            v3 = Arguments {
                pieces: ["cannot watch parent directory of "]
                args: [&v10]
                fmt: None
            };
            v11 = alloc::fmt::format::format_inner(&v3);
            v19 = *((&v11 as &char + 8) as &i64);
            v20 = *((&v11 as &char + 16) as &i64);
            v21 = __rust_alloc(32, 8);
            *(v21 as &i192) = v11;
            *((v21 + 8) as &i64) = v19;
            *((v21 + 16) as &i64) = v20;
            *((v21 + 24) as &i32) = 1;
        }
    }
    goto LABEL_4c0a7f;
}
