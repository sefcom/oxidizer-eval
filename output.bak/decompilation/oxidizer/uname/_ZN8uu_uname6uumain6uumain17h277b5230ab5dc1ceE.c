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
    let v13: i456;  // [sp-0x3b8], Other Possible Types: struct24, Result<struct56, struct8>
    let v14: i64;  // [sp-0x3b0]
    let v15: i64;  // [sp-0x2f8], Other Possible Types: struct712, Result<struct192, struct16>
    let v18: i64;  // rax
    let v23: i64;  // rdx

    v15 = uu_uname::uu_app();
    v13 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if v5 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v18;
    }
    v9 = *((&v13 as &char + 48) as &i64);
    v8 = *((&v13 as &char + 32) as &i128);
    v7 = *((&v13 as &char + 16) as &i128);
    v5 = v13;
    v6 = v14;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options3ALL17h054e7ec081e21667E, g_50b070) as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options11KERNEL_NAME17h8e29a552d042f066E, g_50b080) as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options8NODENAME17h030955f770e48e1bE, g_50b090) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options14KERNEL_RELEASE17h6c8cdfacbe3ebb06E, g_50b0b0);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE, g_50b0a0);
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options7MACHINE17h2642e1b53ab636dcE, g_50b0c0);
    v3 = struct9 {
        field_0: (v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v20 as u32 as u64 * 0x1000000) as u32 | (v0 as u8 as u64 * 0x10000) as u32 | (v1 as u8 as u64 * 0x100) as u32 | v2 as u8 as u32) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v20 as u32 as u64 * 0x100) as u32 | v20) & 65535) as u64 * 0x100000000) | ((v20 as u32 as u64 * 0x1000000) as u32 | (v0 as u8 as u64 * 0x10000) as u32 | (v1 as u8 as u64 * 0x100) as u32 | v2 as u8 as u32) as u128 & 340282366920938463463374325961086468095) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options17HARDWARE_PLATFORM17h46d1d76756312c03E, g_50b0e0) as i32 as u32 as u64 * 0x100) as u32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options9PROCESSOR17h85b80fd217463c16E, g_50b0d0) as i32) & 65535) as u64 * 0x1000000000000) | ((0 CONCAT (((v20 as u32 as u64 * 0x100) as u32 | v20) & 65535) as u64 * 0x100000000) | ((v20 as u32 as u64 * 0x1000000) as u32 | (v0 as u8 as u64 * 0x10000) as u32 | (v1 as u8 as u64 * 0x100) as u32 | v2 as u8 as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
        field_8: v4
    };
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN8uu_uname7options2OS17h4892fc38c9982147E, g_50b0f0) as i8;
    v15 = uu_uname::UNameOutput::new(&v3);
    if v15 == 9223372036854775809 {
        return v18;
    }
    memcpy(&v13, &v15, 168);
    v13 = struct24 {
        field_0: v21
        field_8: v22
        field_16: v16
    };
    v10 = uu_uname::UNameOutput::display(&v13);
    v11 = core::str::<impl str>::trim_end_matches(*((&v10 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64));
    v12 = v23;
    println!("{:?}", &v11);
    return 0;
}
