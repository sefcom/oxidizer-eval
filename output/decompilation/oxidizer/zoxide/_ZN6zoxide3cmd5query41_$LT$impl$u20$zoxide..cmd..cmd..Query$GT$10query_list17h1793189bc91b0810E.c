fn zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_list(a0: i64, a1: &struct120, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x98]
    let v1: i64;  // [bp-0x90], Other Possible Types: struct_6 *, struct_7 *, struct_8 *
    let v2: u64;  // [bp-0x88]
    let v3: void*;  // [bp-0x80], Other Possible Types: u64
    let v4: u64;  // [bp-0x78]
    let v5: struct16;  // [bp-0x70], Other Possible Types: struct_9 *, u64
    let v6: u32;  // [bp-0x68]
    let v7: std::io::stdio::Stdout;  // [bp-0x60], Other Possible Types: u64
    let v8: u64;  // [bp-0x58]
    let v9: i64;  // [bp-0x50], Other Possible Types: struct_2 *, struct_3 *, struct_4 *
    let v10: u64;  // [bp-0x48]
    let v11: void*;  // [bp-0x40]
    let v13: u64;  // rax
    let v14: Result<struct24, struct16>;  // rax
    let v15: struct16;  // rbx
    let v16: u64;  // rax
    let v17: i64;  // r13

    v7 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v7);
    if (*((a0 + 75) as &i8) & 1) {
        if (((0 ^ *((a0 + 24) as &i64)) & (0 ^ -(*((a0 + 24) as &i64)))) >> 63) as char {
            loop {
                v13 = zoxide::db::stream::Stream::next(a1);
                if !v13 {
                    break;
                }
                v3 = 1;
                v4 = a2;
                v5 = v13;
                v6 = 32;
                v1 = &v3;
                v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
                v7 = &g_534950;
                v8 = 2;
                v11 = 0;
                v9 = &v1;
                v10 = 1;
                v14 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(std::io::Write::write_fmt(&v0, &v7), "stdout");
                if let Ok(_) = v14 {
                    break;
                }
            }
        } else {
            loop {
                v15 = zoxide::db::stream::Stream::next(a1);
                if !v15 {
                    break;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v15 + 8) as &i64), *((v15 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64)) {
                    continue;
                }
                v3 = 1;
                v4 = a2;
                v5 = v15;
                v6 = 32;
                v1 = &v3;
                v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
                v7 = &g_534950;
                v8 = 2;
                v11 = 0;
                v9 = &v1;
                v10 = 1;
                v14 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(std::io::Write::write_fmt(&v0, &v7), "stdout");
                if let Ok(_) = v14 {
                    break;
                }
            }
        }
    } else {
        if (((0 ^ *((a0 + 24) as &i64)) & (0 ^ -(*((a0 + 24) as &i64)))) >> 63) as char {
            loop {
                v16 = zoxide::db::stream::Stream::next(a1);
                if !v16 {
                    break;
                }
                v5 = v16;
                v3 = 0;
                v6 = 32;
                v1 = &v3;
                v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
                v7 = &g_534950;
                v8 = 2;
                v11 = 0;
                v9 = &v1;
                v10 = 1;
                v14 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(std::io::Write::write_fmt(&v0, &v7), "stdout");
                if let Ok(_) = v14 {
                    break;
                }
            }
        } else {
            loop {
                v17 = zoxide::db::stream::Stream::next(a1);
                if !v17 {
                    break;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v17 + 8) as &i64), *((v17 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64)) {
                    continue;
                }
                v5 = v17;
                v3 = 0;
                v6 = 32;
                v1 = &v3;
                v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
                v7 = &g_534950;
                v8 = 2;
                v11 = 0;
                v9 = &v1;
                v10 = 1;
                v14 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(std::io::Write::write_fmt(&v0, &v7), "stdout");
                if let Ok(_) = v14 {
                    break;
                }
            }
        }
    }
    return v14;
}
