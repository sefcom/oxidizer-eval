fn uu_dir::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i448;  // [sp-0x5a0], Other Possible Types: struct56
    let v1: struct24;  // [sp-0x568], Other Possible Types: i128
    let v2: i64;  // [sp-0x558]
    let v3: struct24;  // [sp-0x550], Other Possible Types: i192
    let v4: i512;  // [sp-0x538], Other Possible Types: struct64
    let v5: i344;  // [sp-0x4f8], Other Possible Types: struct64, struct56, struct24, Result<struct43, struct24>
    let v6: i64;  // [sp-0x3f0]
    let v7: i64;  // [sp-0x3e8]
    let v8: i64;  // [sp-0x3e0]
    let v9: i8;  // [bp-0x3d8]
    let v10: i8;  // [sp-0x2fb]
    let v11: i8;  // [sp-0x2f9]
    let v12: i8;  // [sp-0x2f8]
    let v13: struct712;  // [sp-0x2f0], Other Possible Types: i5696
    let v15: i8;  // bl
    let v17: i64;  // rdx
    let v18: i8;  // bpl
    let v20: i64;  // rcx
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v23: i64;  // r12
    let v24: i64;  // r14
    let v27: i64;  // rdx

    v13 = uu_dir::uu_app(a1, a2);
    v0 = clap_builder::builder::command::Command::get_matches_from(&v13, a0, a1);
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options13QUOTING_STYLE17hb6b989323f3b6c38E, g_60f380) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting1C17h30dd60700071886fE, g_60f2e0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting6ESCAPE17he806ea23b8b78507E, g_60f2c0) as i8 {
        v15 = 0;
    } else {
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h4bc344de550bbb12E, g_60f2d0) as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h4bc344de550bbb12E, g_60f2d0) as i32 ^ 1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options6FORMAT17h873e6cebb46e2ec9E, g_60f390) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6ACROSS17h335400852ca7fdf7E, g_60f9b0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format7COLUMNS17hf9de4f37bf7a6a77E, g_60f9a0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6COMMAS17h26195f8b78a1c86cE, g_60f9c0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format4LONG17h4091a6b7ae146537E, g_60f990) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h0ca58df41c65fc77E, g_60f9e0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17ha3dede1339e309d9E, g_60f9d0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he07a8efb0fd46282E, g_60f9f0) as i8 {
        v18 = 0;
    } else {
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hc9896163082aa4f5E, g_60f980) as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hc9896163082aa4f5E, g_60f980) as i32 ^ 1;
    }
    v5 = uu_ls::Config::from(&v0, v17, v20, v21, v22);
    v23 = v5;
    v24 = *((&v5 as &char + 8) as &i64);
    match v5 {
        Err(_) => {
            return v24;
        },
        Ok(_) => {
            memcpy(&v9, &v5, 232);
            v6 = v23;
            v7 = v24;
            v8 = *((&v5 as &char + 16) as &i64);
            if v15 {
                v10 = 0;
                v11 = 2;
            }
            if v18 {
                v12 = 0;
            }
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN5uu_ls7options5PATHS17h89ad938e8f78055bE, g_60f3a0);
            v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17h89ad938e8f78055bE, g_60f3a0, &v5);
            if !v4 {
                v1 = uu_dir::uumain::uumain::{{closure}}();
            } else {
                v5 = struct64 {
                    field_0: v26
                    field_16: *((&v4 as &char + 16) as &i128)
                    field_32: *((&v4 as &char + 32) as &i128)
                    field_48: *((&v4 as &char + 48) as &i128)
                };
                v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v5, v27);
                v1 = v3;
                v2 = *((&v3 as &char + 16) as &i64);
            }
            *(&v5.field_0 as &struct24) = struct24 {
                field_0: v1
                field_16: v2
            };
            v24 = uu_ls::list(&v5, &v6);
            return v24;
        },
    }
}
