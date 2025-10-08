fn uu_fmt::extract_width(a1: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct40, struct16>;  // [bp-0xa8]
    let v1: u32;  // [bp-0xa8]
    let v2: void*;  // [bp-0xa0], Other Possible Types: u64
    let v3: void*;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: u8;  // [bp-0x50]
    let v7: alloc::string::String;  // [bp-0x48]
    let v10: core::option::Option<&str>;  // rax
    let v11: i64;  // r13
    let v12: u64;  // rdx
    let v13: i64;  // rax
    let v15: u64;  // rcx
    let v16: core::option::Option<&str>;  // rax
    let v17: void*;  // rax
    let v18: &mut [u8];  // rax:rdx
    let v19: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v20: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width");
    v10 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
    match v10 {
        Some(_) => {
            v20 = core::num::<impl usize>::from_ascii_radix(&v0, *((v10 + 8) as &i64), *((v10 + 16) as &i64) as i32);
            if !v0 as i8 {
                return Ok(struct16 {
                    field_0: 1
                    field_8: v2
                });
            }
            v3 = 0;
            v4 = *((v10 + 8) as &i64);
            v5 = *((v10 + 16) as &i64);
            v6 = 1;
            v7 = format!("invalid width: {}", &v3);
            return Err(struct16 {
                field_0: alloc::boxed::Box<T>::new(&v7) as u64
                field_8: &g_4f0720
            });
        },
        None => {
            v11 = 8;
            if ((v12 == 1) as u8 as u8 & clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "files") as u8) {
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files");
                v13 = clap_builder::parser::error::MatchesError::unwrap("files", &v0);
                core::option::unwrap(v13);
                v1 = 0;
                v18 = core::char::methods::encode_utf8_raw(45, &v1 as u64, v12);
                v16 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v18.data_ptr, *((v13 + 8) as &i64), *((v13 + 16) as &i64), v15) as u64;
                if let Some(_) = v16 {
                    v19 = core::num::<impl usize>::from_ascii_radix(&v1 as u64, v16, v12);
                    v17 = v2;
                    *((a0 + 8) as &u64) = v1 as i8 as u8 as u64 ^ 1;
                    v11 = 16;
                }
            }
            *((a0 + v11) as &void*) = v17;
        },
    }
}
