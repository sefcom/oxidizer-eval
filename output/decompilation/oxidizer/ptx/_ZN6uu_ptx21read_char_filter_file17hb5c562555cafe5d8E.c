fn uu_ptx::read_char_filter_file(a1: i64) -> Result<struct48, struct16> {
    let a0: i64;  // rdi
    let v0: std::fs::File;  // [bp-0x64]
    let v1: alloc::string::String;  // [bp-0x60]
    let v2: Result<struct4, struct8>;  // [bp-0x48], Other Possible Types: u8
    let v3: struct48;  // [bp-0x48]
    let v4: u32;  // [bp-0x44]
    let v5: u64;  // [bp-0x40]
    let v6: u128;  // [bp-0x38]
    let v8: u64;  // r8
    let v9: u64;  // rax
    let v12: u128;  // xmm0
    let v13: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "break-file", v8);
    v9 = clap_builder::parser::error::MatchesError::unwrap("break-file", &v2);
    if !v9 {
        core::option::expect_failed("parsing options failed!"); /* do not return */
    }
    v2 = std::fs::File::open(v9);
    match v2 {
        Err(_) => {
            return struct16 {
                field_0: 0
                field_8: v5
            };
        },
        Ok(_) => {
            v0 = std::fs::File {
                inner: std::sys::pal::unix::fs::File {
                    __0: std::sys::pal::unix::fd::FileDesc {
                        __0: std::os::fd::owned::OwnedFd {
                            fd: v4
                        }
                    }
                }
            };
            v1 = String::new();
            v13 = <std::fs::File as std::io::Read>::read_to_string(&v0, &v1);
            match v13 {
                Ok(_) => {
                    v3 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(0x1, 1);
                    v12 = v3.field_0;
                    return Ok(struct48 {
                        field_0: v12
                        field_16: v6
                        field_32: v3.field_32
                    });
                },
                Err(_) => {
                    return struct16 {
                        field_0: 0
                        field_8: *((&v13 as &char + 8) as &i64)
                    };
                },
            }
        },
    }
}
