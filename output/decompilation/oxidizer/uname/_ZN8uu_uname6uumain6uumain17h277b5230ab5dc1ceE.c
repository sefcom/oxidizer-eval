fn uu_uname::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x43b]
    let v1: u8;  // [bp-0x43a]
    let v2: u8;  // [bp-0x439]
    let v3: struct9;  // [bp-0x438]
    let v4: u64;  // [bp-0x428]
    let v5: u64;  // [bp-0x420]
    let v6: u128;  // [bp-0x418]
    let v7: u128;  // [bp-0x408]
    let v8: u64;  // [bp-0x3f8]
    let v9: struct24;  // [bp-0x3f0]
    let v10: u64;  // [bp-0x3e8]
    let v11: u64;  // [bp-0x3e0]
    let v12: u64;  // [bp-0x3c8]
    let v13: u64;  // [bp-0x3c0]
    let v14: Result<struct56, struct16>;  // [bp-0x3b8], Other Possible Types: struct24
    let v15: u64;  // [bp-0x3b0]
    let v16: u128;  // [bp-0x398]
    let v17: struct168;  // [bp-0x2f8], Other Possible Types: u8
    let v18: struct24;  // [bp-0x2f8]
    let v19: u64;  // [bp-0x2f0]
    let v21: u16;  // ax
    let v22: u32;  // eax
    let v23: u16;  // ax
    let v24: u16;  // ax
    let v25: u64;  // rdx

    uu_uname::uu_app(&v17);
    v14 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    match v14 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        },
        Ok(_) => {
            v8 = *((&v14 as &char + 48) as &i64);
            v7 = v16;
            v6 = *((&v14 as &char + 16) as &i128);
            v4 = v14 as i64;
            v5 = v15;
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options3ALL17h054e7ec081e21667E.field_0, g_50b070.field_0) as i8;
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options11KERNEL_NAME17h8e29a552d042f066E.field_0, g_50b080.field_0) as i8;
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options8NODENAME17h030955f770e48e1bE.field_0, g_50b090.field_0) as i8;
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options14KERNEL_RELEASE17h6c8cdfacbe3ebb06E.field_0, g_50b0b0.field_0) as i32 as i16;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE.field_0, g_50b0a0.field_0) as i32;
            v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options7MACHINE17h2642e1b53ab636dcE.field_0, g_50b0c0.field_0) as i32 as i16;
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options9PROCESSOR17h85b80fd217463c16E.field_0, g_50b0d0.field_0) as i32 as i16;
            v3 = struct9 {
                field_0: (0 CONCAT (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options17HARDWARE_PLATFORM17h46d1d76756312c03E.field_0, g_50b0e0.field_0) as i32 as i16 * 0x100 | v24) as u64 * 0x1000000000000) as u64 | ((0 CONCAT (v23 * 0x100 | v21) as u64 * 0x100000000) as u64 | (v22 * 0x1000000 | v0 as u32 * 0x10000 | v1 as u32 * 0x100 | v2 as u32) as u64) & 281474976710655
                field_8: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, _ZN8uu_uname7options2OS17h4892fc38c9982147E.field_0, g_50b0f0.field_0) as i8
            };
            v17 = uu_uname::UNameOutput::new(&v3);
            if v17.field_0 == 9223372036854775809 {
                return v19;
            }
            memcpy(&v14 as u8, &v17 as u8, 168);
            v14 = v18;
            v9 = uu_uname::UNameOutput::display(&v14);
            v12 = core::str::<impl str>::trim_end_matches(v10, v11);
            v13 = v25;
            println!("{}", &v12);
            return 0;
        },
    }
}
