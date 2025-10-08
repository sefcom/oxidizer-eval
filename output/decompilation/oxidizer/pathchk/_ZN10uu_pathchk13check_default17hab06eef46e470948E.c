fn uu_pathchk::check_default(a0: u64, a1: u32) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x140]
    let v1: struct712;  // [bp-0x138], Other Possible Types: u64
    let v2: u64;  // [bp-0x130]
    let v3: std::io::stdio::Stderr;  // [bp-0x128]
    let v4: core::fmt::Arguments;  // [bp-0x120]
    let v5: std::io::stdio::Stderr;  // [bp-0x118], Other Possible Types: struct712
    let v6: struct712;  // [bp-0x110], Other Possible Types: u64
    let v7: core::fmt::Arguments;  // [bp-0x108], Other Possible Types: struct712
    let v8: Result<struct24, struct24>;  // [bp-0x100], Other Possible Types: u8
    let v9: std::io::stdio::Stderr;  // [bp-0xf8], Other Possible Types: core::fmt::Arguments
    let v10: u64;  // [bp-0xc8]
    let v11: core::fmt::Arguments;  // [bp-0xc0], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, core::fmt::rt::Argument
    let v12: u128;  // [bp-0xc0]
    let v13: core::fmt::rt::Argument;  // [bp-0xb0]
    let v14: u128;  // [bp-0xb0]
    let v15: core::fmt::rt::Argument;  // [bp-0xa0]
    let v16: u128;  // [bp-0xa0]
    let v18: u64;  // rax
    let v19: core::result::Result<(), std::io::error::Error>;  // rax
    let v20: core::fmt::Arguments;  // rax, Other Possible Types: u64
    let v21: u64;  // rdx
    let v22: u64;  // rax
    let v23: core::result::Result<(), std::io::error::Error>;  // rax
    let v24: void*;  // rcx
    let v25: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = alloc::str::join_generic_copy(a0, a1);
    v18 = v2;
    v10 = v18;
    if v18 > 0x1000 {
        v3 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
        v5 = 0;
        v6 = v1;
        v7 = v18;
        v8 = 1;
        v11 = core::fmt::rt::Argument {
            ty: &g_41703c
        };
        v13 = core::fmt::rt::Argument {
            ty: &v10
        };
        v15 = core::fmt::rt::Argument {
            ty: &v5
        };
        v9 = core::fmt::Arguments {
            pieces: ["limit ", " exceeded by length ", " of file name ", "\n"]
            args: [v12, v14, v16]
            fmt: 0
        };
        v19 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v3, &v9);
    } else {
        v20 = v18;
        if !v20 {
            v11 = std::fs::symlink_metadata(&v0, v21);
            v20 = v22;
            if let Ok(_) = v11 {
                goto LABEL_45645a;
            }
            v9 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v11 = core::fmt::Arguments {
                pieces: ["pathchk: '': No such file or directory\n"]
                args: []
                fmt: 0
            };
            v23 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v9, &v11);
        } else {
LABEL_45645a:
            if !a1 {
                return uu_pathchk::check_searchable(v1, v2);
            }
            do {
                v20 = *((16 + a0 + v24 as &u8) as &i64);
                if v20 > 0x1000 {
                    v4 = v20;
                    v3 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                    v5 = 0;
                    v6 = *((8 + a0 + v24 as &u8) as &i64);
                    v7 = v20;
                    v8 = 1;
                    v11 = core::fmt::rt::Argument {
                        ty: &g_41703c
                    };
                    v13 = core::fmt::rt::Argument {
                        ty: &v4
                    };
                    v15 = core::fmt::rt::Argument {
                        ty: &v5
                    };
                    v9 = core::fmt::Arguments {
                        pieces: ["limit ", " exceeded by length ", " of file name component ", "\n"]
                        args: [v12, v14, v16]
                        fmt: 0
                    };
                    v25 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v3, &v9);
                }
                v24 += 24;
            } while (a1 * 24 != v24);
            return uu_pathchk::check_searchable(v1, v2);
        }
    }
    return 0;
}
