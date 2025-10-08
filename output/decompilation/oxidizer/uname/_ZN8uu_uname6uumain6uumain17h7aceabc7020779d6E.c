fn uu_uname::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x43a]
    let v1: u8;  // [bp-0x439]
    let v2: struct9;  // [bp-0x438]
    let v3: u64;  // [bp-0x428]
    let v4: u64;  // [bp-0x420]
    let v5: iNone;  // [bp-0x418]
    let v6: iNone;  // [bp-0x408]
    let v7: u64;  // [bp-0x3f8]
    let v8: struct24;  // [bp-0x3f0]
    let v9: u64;  // [bp-0x3e8]
    let v10: u64;  // [bp-0x3e0]
    let v11: u64;  // [bp-0x3c8]
    let v12: u64;  // [bp-0x3c0]
    let v13: struct16;  // [bp-0x3b8], Other Possible Types: struct24
    let v14: u64;  // [bp-0x3b8]
    let v15: u64;  // [bp-0x3b0]
    let v16: i8;  // [bp-0x3a8]
    let v17: iNone;  // [bp-0x398]
    let v18: i8;  // [bp-0x388]
    let v19: struct712;  // [bp-0x2f8]
    let v20: Result<struct192, struct24>;  // [bp-0x2f8]
    let v21: struct24;  // [bp-0x2f8]
    let v22: u64;  // [bp-0x2f0]
    let v24: u32;  // eax
    let v25: u16;  // ax
    let v26: u32;  // eax
    let v27: u16;  // ax
    let v28: u16;  // ax
    let v29: u64;  // rdx

    v19 = uu_uname::uu_app();
    v13 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if (((0 ^ v13.field_0) & (0 ^ -(v14))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    }
    v7 = *(&v18 as &i64);
    v6 = v17;
    v5 = *(&v16 as &i128);
    v3 = v13.field_0;
    v4 = v15;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options3ALL17haabcdd4476d20968E.field_0, g_4da090.field_0);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options11KERNEL_NAME17h78d334e645184c09E.field_0, g_4da0a0.field_0);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options8NODENAME17h453bacc09e501817E.field_0, g_4da0b0.field_0);
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options14KERNEL_RELEASE17h01c2bfcabb04e2f4E.field_0, g_4da0d0.field_0);
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options14KERNEL_VERSION17h3c7ca358447cda74E.field_0, g_4da0c0.field_0);
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options7MACHINE17h9ff0cb9ef2dc676cE.field_0, g_4da0e0.field_0);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options9PROCESSOR17he2cbef3058cabd62E.field_0, g_4da0f0.field_0);
    v2 = struct9 {
        field_0: (0 CONCAT (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options17HARDWARE_PLATFORM17h0a1e55ff84c4c273E.field_0, g_4da100.field_0) as u32 as u16 * 0x100 | v28) as u64 * 0x1000000000000) as u64 | ((0 CONCAT (v27 * 0x100 | v25) as u64 * 0x100000000) as u64 | (v26 * 0x1000000 | v24 * 0x10000 | v0 as u32 * 0x100 | v1 as u32) as u64) & 281474976710655
        field_8: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN8uu_uname7options2OS17h85e9c59c89e25749E.field_0, g_4da110.field_0) as u8
    };
    v20 = uu_uname::UNameOutput::new(&v2);
    match v20 {
        Err(_) => {
            return v22;
        },
        Ok(_) => {
            memcpy(&v16, &v20 as u8, 168);
            v13 = v21;
            v8 = uu_uname::UNameOutput::display(&v13);
            v11 = core::str::<impl str>::trim_end_matches(v9, v10);
            v12 = v29;
            println!("{}", &v11);
            return 0;
        },
    }
}
