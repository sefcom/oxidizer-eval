fn uu_pathchk::check_basic(a0: u64, a1: u32) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0xd0], Other Possible Types: core::fmt::rt::Argument
    let v1: u128;  // [bp-0xd0]
    let v2: core::fmt::rt::Argument;  // [bp-0xc0]
    let v3: u128;  // [bp-0xc0]
    let v4: core::fmt::rt::Argument;  // [bp-0xb0], Other Possible Types: u128
    let v5: core::fmt::rt::Argument;  // [bp-0xb0], Other Possible Types: u128
    let v6: Result<struct24, struct24>;  // [bp-0xa0]
    let v7: u64;  // [bp-0x98]
    let v8: u64;  // [bp-0x90]
    let v9: std::io::stdio::Stderr;  // [bp-0x88], Other Possible Types: core::fmt::Arguments
    let v10: u64;  // [bp-0x58]
    let v11: struct24;  // [bp-0x50]
    let v12: std::io::stdio::Stderr;  // [bp-0x48]
    let v13: std::io::stdio::Stderr;  // [bp-0x40], Other Possible Types: struct640
    let v14: struct640;  // [bp-0x38]
    let v15: struct24;  // [bp-0x30]
    let v16: struct640;  // [bp-0x28]
    let v18: core::result::Result<(), std::io::error::Error>;  // rax
    let v19: u64;  // r15
    let v20: u64;  // r14
    let v21: u64;  // r12
    let v22: u64;  // r14
    let v23: u64;  // r12
    let v25: core::result::Result<(), std::io::error::Error>;  // rax
    let v26: core::result::Result<(), std::io::error::Error>;  // rax

    v6 = alloc::str::join_generic_copy(a0, a1);
    v10 = v8;
    if v10 > 0x100 {
        v13 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
        v0 = core::fmt::rt::Argument {
            ty: &g_417718
        };
        v2 = core::fmt::rt::Argument {
            ty: &v10
        };
        v5 = core::fmt::rt::Argument {
            ty: &v6
        };
        v9 = core::fmt::Arguments {
            pieces: ["limit ", " exceeded by length ", " of file name ", "\n"]
            args: [v1, v3, v4]
            fmt: 0
        };
        v18 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v13, &v9);
    } else if v10 {
        v19 = a0 + a1 * 24;
        do {
            v20 = a0;
            v21 = v20 + 24;
            v22 = v20;
            if v22 == v19 {
                return uu_pathchk::check_searchable(v7, v10);
            }
            v23 = v22;
            v11 = *((v20 + 16) as &i64);
            if v11 > 14 {
                v12 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                v13 = 0;
                v14 = *((v20 + 8) as &i64);
                v15 = v11;
                v16 = 1;
                v0 = core::fmt::rt::Argument {
                    ty: &g_4177d0
                };
                v2 = core::fmt::rt::Argument {
                    ty: &v11
                };
                v4 = core::fmt::rt::Argument {
                    ty: &v13
                };
                v9 = core::fmt::Arguments {
                    pieces: ["limit ", " exceeded by length ", " of file name component ", "\n"]
                    args: [v1, v3, v5]
                    fmt: 0
                };
                v25 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v12, &v9);
            }
            a0 = v23;
        } while (uu_pathchk::check_portable_chars(*((v20 + 8) as &i64), v11));
    } else {
        v9 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
        v0 = core::fmt::Arguments {
            pieces: ["empty file name\n"]
            args: []
            fmt: 0
        };
        v26 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v9, &v0);
    }
    return 0;
}
