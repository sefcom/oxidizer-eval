fn uu_arch::uumain::uumain(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x558], Other Possible Types: struct24
    let v1: i64;  // [sp-0x550]
    let v2: i128;  // [sp-0x548]
    let v3: i128;  // [sp-0x538]
    let v4: i64;  // [sp-0x528]
    let v5: i64;  // [sp-0x510]
    let v6: i64;  // [sp-0x508]
    let v7: i448;  // [sp-0x500], Other Possible Types: Result<struct56, struct16>
    let v8: i64;  // [sp-0x4f8]
    let v9: i64;  // [sp-0x4f0]
    let v10: i8;  // [bp-0x498]
    let v11: i8;  // [bp-0x490]
    let v12: i4288;  // [sp-0x2e8], Other Possible Types: Result<struct536, struct24>, struct712
    let v13: i64;  // [sp-0x2e0]
    let v14: i64;  // [sp-0x2d8]
    let v16: i64;  // rax
    let v17: i64;  // r15
    let v18: i64;  // rbx
    let v19: i64;  // r14
    let v20: i64;  // rdx

    v12 = uu_arch::uu_app(a1, a2);
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1);
    if v0 == 0x8000000000000000 {
        v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        return v16;
    }
    v4 = *((&v7 as &char + 48) as &i64);
    v3 = *((&v7 as &char + 32) as &i128);
    v2 = *((&v7 as &char + 16) as &i128);
    v0 = v7;
    v1 = v8;
    v12 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v17 = v12;
    v18 = v13;
    v19 = v14;
    if v17 == 0x8000000000000000 {
        v16 = uu_arch::uumain::uumain::{{closure}}(v18, v19);
        return v16;
    }
    memcpy(&v7, &v12, 0x200);
    v7 = v17;
    v8 = v18;
    v9 = v19;
    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(v10, v11);
    v5 = core::str::<impl str>::trim_matches(v1, *((&v0 as &char + 16) as &i64));
    v6 = v20;
    println!("{:?}", &v5);
    return 0;
}
