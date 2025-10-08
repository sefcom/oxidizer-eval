fn uu_base32::base_common::Config::from(a1: &struct56) -> Result<struct42, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1c8]
    let v1: void*;  // [bp-0x1b0], Other Possible Types: u64
    let v2: u64;  // [bp-0x1a8]
    let v3: u64;  // [bp-0x1a0]
    let v4: u8;  // [bp-0x198]
    let v5: u64;  // [bp-0x190]
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x188], Other Possible Types: std::path::PathBuf, struct16, struct56
    let v7: struct40;  // [bp-0x188]
    let v8: u64;  // [bp-0x180]
    let v9: u64;  // [bp-0x178]
    let v10: alloc::string::String;  // [bp-0xd8]
    let v11: u32;  // [bp-0xc0]
    let v12: struct64;  // [bp-0xb8]
    let v13: struct64;  // [bp-0x70]
    let v14: struct64;  // [bp-0x70]
    let v18: struct56;  // rax
    let v19: i64;  // r12
    let v20: struct16;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rcx
    let v23: u64;  // r13
    let v24: u64;  // r12
    let v25: core::fmt::rt::Argument;  // rax
    let v26: u64;  // r12
    let v27: u8;  // al

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
    v13 = clap_builder::parser::error::MatchesError::unwrap(&v6);
    if v13.field_0 as i64 {
        v12 = v14;
        v18 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v12);
        core::option::unwrap(v18);
        v19 = v18;
        v20 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v12);
        if v20 {
            v1 = 0;
            v2 = *((v20 + 8) as &i64);
            v3 = *((v20 + 16) as &i64);
            v4 = 1;
            v10 = format!("extra operand {}", &v1);
            v11 = 1;
            alloc::boxed::Box<T>::new(&v10);
            return struct24 {
                field_0: 2
                field_8: v21
                field_16: v22
            };
        }
        v23 = *((v19 + 8) as &i64);
        v24 = *((v19 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, "-") {
            v6 = std::fs::metadata(v23, v24);
            match v6 {
                Err(_) => {
                    v1 = 1;
                    v2 = v23;
                    v3 = v24;
                    v4 = 0;
                    v10 = format!("{}: No such file or directory", &v1);
                    v11 = 1;
                    alloc::boxed::Box<T>::new(&v10);
                    return struct24 {
                        field_0: 2
                        field_8: v21
                        field_16: v22
                    };
                },
                Ok(_) => {
                    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(v23, v24);
                    v0 = v8;
                    v5 = v9;
                },
            }
        }
    }
    vvar_378{stack -392} = struct40 OrderedDict([(0, 𝜙@64b [((4624894, None), None), ((4625223, None), None), ((4625640, None), vvar_331{stack -392})]), (8, 𝜙@64b [((4624894, None), None), ((4625223, None), None), ((4625640, None), vvar_332{stack -384})])])
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v7, a1);
    v25 = clap_builder::parser::error::MatchesError::unwrap(&v7);
    if v25 {
        v6 = uu_base32::base_common::Config::from::{{closure}}(*((v25 + 8) as &i64), *((v25 + 16) as &i64));
        if v6.field_0 {
            return struct24 {
                field_0: 2
                field_8: v6.field_0
                field_16: v8
            };
        }
    }
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "decode");
    return Ok(struct48 {
        field_0: v26
        field_8: v23
        field_16: 0x8000000000000000
        field_24: v0
        field_32: v5
        field_40: v27
        field_41: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ignore-garbage") as u8
    });
}
