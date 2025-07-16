fn uu_dd::Source::skip(a0: i64, a1: i64) -> long long {
    let v0: u32;  // [bp-0x79]
    let v1: struct16;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: u32;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: u64;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v8: u64;  // r15
    let v9: u64;  // rax
    let v10: u64;  // rdx
    let v12: u64;  // rdx
    let v13: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v14: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v15: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v8 = a0 + 4;
    if !*(a0 as &i32) {
        core::result::Result<T,E>::unwrap(a1 >> 63, "src/uu/dd/src/dd.rs");
        v13 = <std::fs::File as std::io::Seek>::seek(v8, 2, a1);
    } else if *(a0 as &i32) == 1 {
        v1 = uu_dd::try_get_len_of_block_device(v8);
        if v1.field_0 as i32 == 1 && v2 < a1 {
            v5 = uucore::util_name();
            v6 = v10;
            eprint!("{}: ", &v5);
            eprintln!("'standard input': cannot skip: Invalid argument");
            uucore::mods::error::set_exit_code(1);
            return 0;
        }
        v0 = std::fs::File {
            inner: std::sys::pal::unix::fs::File {
                __0: std::sys::pal::unix::fd::FileDesc {
                    __0: std::os::fd::owned::OwnedFd {
                        fd: <UNKNOWN>
                    }
                }
            }
        };
        v2 = a1;
        v15 = std::io::copy::generic_copy(&v0, &v0);
        if v15 as i64 {
            return v15 as i64;
        } else if *((&v15 as &char + 8) as &i64) >= a1 {
            return v15 as i64;
        } else {
            v5 = uucore::util_name();
            v6 = v12;
            eprint!("{}: ", &v5);
            eprintln!("'standard input': cannot skip to specified offset");
            return 0;
        }
    } else {
        v3 = std::fs::File {
            inner: std::sys::pal::unix::fs::File {
                __0: std::sys::pal::unix::fd::FileDesc {
                    __0: std::os::fd::owned::OwnedFd {
                        fd: v8
                    }
                }
            }
        };
        v4 = a1;
        v14 = std::io::copy::generic_copy(&v3, &v0);
    }
    return v9;
}
