fn uu_uname::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x43b]
    let v1: i8;  // [sp-0x43a]
    let v2: i8;  // [sp-0x439]
    let v3: struct9;  // [bp-0x438]
    let v4: i8;  // [sp-0x430]
    let v5: i64;  // [sp-0x428]
    let v6: i64;  // [sp-0x420]
    let v7: i128;  // [sp-0x418]
    let v8: i128;  // [sp-0x408]
    let v9: i64;  // [sp-0x3f8]
    let v10: i192;  // [sp-0x3f0], Other Possible Types: struct24
    let v11: i64;  // [sp-0x3c8]
    let v12: i64;  // [sp-0x3c0]
    let v13: i448;  // [sp-0x3b8], Other Possible Types: Result<struct56, struct16>, struct24
    let v14: i64;  // [sp-0x3b0]
    let v15: i64;  // [sp-0x2f8], Other Possible Types: struct712, Result<struct192, struct24>
    let v18: i64;  // rdx
    let v19: i64;  // rax

    v15 = uu_uname::uu_app(a1, v18);
    v13 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if v5 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v19;
    }
    v9 = *((&v13 as &char + 48) as &i64);
    v8 = *((&v13 as &char + 32) as &i128);
    v7 = *((&v13 as &char + 16) as &i128);
    v5 = v13;
    v6 = v14;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options3ALL17h105f30993bbcd123E, g_50b8b0) as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options11KERNEL_NAME17he70dd8eb4dd9b460E, g_50b8c0) as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options8NODENAME17hfdabec7ec0557e6fE, g_50b8d0) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options14KERNEL_RELEASE17h2c09e35090f0aae4E, g_50b8f0);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options14KERNEL_VERSION17he6e4c0c3967c9b47E, g_50b8e0);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options7MACHINE17hecc4675c33edc6ccE, g_50b900);
    v3 = struct9 {
        field_0: (v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v21 * 0x1000000 | (v0 * 0x10000) as u8 as u32 | (v1 * 0x100) as u8 as u32 | v2 as u8 as u32) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT ((v21 * 0x100 | v21) & 65535) as u32 as u64 * 0x100000000) | (v21 * 0x1000000 | (v0 * 0x10000) as u8 as u32 | (v1 * 0x100) as u8 as u32 | v2 as u8 as u32) as u128 & 340282366920938463463374325961086468095) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT ((clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options17HARDWARE_PLATFORM17ha297e30e58393fafE, g_50b920) as i32 * 0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options9PROCESSOR17heffda0ffece54a15E, g_50b910) as i32) & 65535) as u32 as u64 * 0x1000000000000) | ((0 CONCAT ((v21 * 0x100 | v21) & 65535) as u32 as u64 * 0x100000000) | (v21 * 0x1000000 | (v0 * 0x10000) as u8 as u32 | (v1 * 0x100) as u8 as u32 | v2 as u8 as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
        field_8: v4
    };
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options2OS17h439760684799c7daE, g_50b930) as i8;
    v15 = uu_uname::UNameOutput::new(&v3);
    if v15 == 9223372036854775809 {
        return v19;
    }
    memcpy(&v13, &v15, 168);
    v13 = struct24 {
        field_0: v22
        field_8: v23
        field_16: v16
    };
    v10 = uu_uname::UNameOutput::display(&v13);
    v11 = core::str::<impl str>::trim_end_matches(*((&v10 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64));
    v12 = v18;
    println!("{:?}", &v11);
    return 0;
}
