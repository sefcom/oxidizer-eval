fn uu_mknod::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x368], Other Possible Types: struct28, Result<struct40, struct16>, u128
    let v1: Result<struct40, struct16>;  // [bp-0x368], Other Possible Types: struct56
    let v3: u64;  // [bp-0x358]
    let v4: u32;  // [bp-0x350]
    let v5: Result<struct24, struct12>;  // [bp-0x328], Other Possible Types: struct24
    let v6: u64;  // [bp-0x318]
    let v7: struct24;  // [bp-0x310]
    let v8: struct56;  // [bp-0x2f8], Other Possible Types: struct712
    let v9: u64;  // [bp-0x2f0]
    let v11: i64;  // rbx
    let v13: i64;  // r14
    let v14: u8;  // al
    let v15: u64;  // r15
    let v16: alloc::string::String;  // r12
    let v17: core::fmt::rt::Argument;  // rax
    let v18: u64;  // rcx
    let v19: u64;  // rax

    v8 = uu_mknod::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v0.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    }
    v8 = v1;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8);
    v11 = clap_builder::parser::error::MatchesError::unwrap(&v0);
    core::option::unwrap(v11);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "mode");
    v5 = uu_mknod::get_mode(clap_builder::parser::error::MatchesError::unwrap("mode", &v0));
    match v5 {
        Err(_) => {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "name");
            v13 = clap_builder::parser::error::MatchesError::unwrap("name", &v0);
            if !v13 {
                core::option::expect_failed("Missing argument 'NAME'"); /* do not return */
            }
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "z") as u32 as u8;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "context");
            v15 = clap_builder::parser::error::MatchesError::unwrap("context", &v0);
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, &g_4183ea);
            v16 = clap_builder::parser::error::MatchesError::unwrap(&g_4183ea, &v0);
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, &g_4183ef);
            v17 = clap_builder::parser::error::MatchesError::unwrap(&g_4183ef, &v1);
            if *(v11 as &i8) == 2 {
                if v16 || v17 {
                    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Fifos do not have major and minor device numbers.");
                    v0 = struct28 {
                        field_0: *(&v5.field_0 as &i128)
                        field_16: v6
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v0);
                } else {
                    v7 = struct24 {
                        field_0: v18
                        field_8: v15
                        field_16: *((&v1 as &char + 72) as &i32) | (&g_418c10.field_0)[*(v11 as &i8)]
                        field_20: v14 | (v15) as u8 as u8
                    };
                    uucore::mods::error::set_exit_code(uu_mknod::mknod(*((v13 + 8) as &i64), *((v13 + 16) as &i64), &v7) as u32 as u64);
                    return 0;
                }
            } else {
                if !v16 || !v17 {
                    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Special files require major and minor device numbers.");
                    v0 = struct28 {
                        field_0: *(&v5.field_0 as &i128)
                        field_16: v6
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v0);
                } else {
                    v7 = struct24 {
                        field_0: v18
                        field_8: v15
                        field_16: *((&v1 as &char + 72) as &i32) | (&g_418c10.field_0)[*(v11 as &i8)]
                        field_20: v14 | (v15) as u8 as u8
                    };
                    uucore::mods::error::set_exit_code(uu_mknod::mknod(*((v13 + 8) as &i64), *((v13 + 16) as &i64), &v7) as u32 as u64);
                    return 0;
                }
            }
        },
        Ok(_) => {
            v3 = v6;
            v0 = v5 as i128 as u128;
            v4 = 1;
            alloc::boxed::Box<T>::new(&v0 as u640);
        },
    }
    return v19;
}
