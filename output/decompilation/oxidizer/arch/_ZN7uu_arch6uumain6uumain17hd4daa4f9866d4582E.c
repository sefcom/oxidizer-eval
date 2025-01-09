fn uu_arch::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x558], Other Possible Types: struct24
    let v1: i64;  // [sp-0x550]
    let v2: i64;  // [sp-0x510]
    let v3: i64;  // [sp-0x508]
    let v4: i8;  // [bp-0x500]
    let v5: i64;  // [sp-0x4f8]
    let v6: i64;  // [sp-0x4f0]
    let v7: i8;  // [bp-0x4e8]
    let v8: i8;  // [bp-0x498]
    let v9: i8;  // [bp-0x490]
    let v10: i4288;  // [sp-0x2e8], Other Possible Types: Result<struct536, struct16>, struct712
    let v11: i64;  // [sp-0x2e0]
    let v12: i64;  // [sp-0x2d8]
    let v14: i64;  // rax
    let v15: i64;  // r15
    let v16: i64;  // rbx
    let v17: i64;  // r14
    let v18: i64;  // rdx

    v10 = uu_arch::uu_app() as u6296;
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v10, a0, a1);
    if v0 == 0x8000000000000000 {
        v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        return v14;
    }
    v10 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v15 = v10;
    v16 = v11;
    v17 = v12;
    if v15 == 0x8000000000000000 {
        v14 = uu_arch::uumain::uumain::{{closure}}(v16, v17);
        return v14;
    }
    memcpy(&v7, &v10, 0x200);
    v4 = v15;
    v5 = v16;
    v6 = v17;
    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(v8, v9);
    v2 = core::str::<impl str>::trim_matches(v1, *((&v0 as &char + 16) as &i64));
    v3 = v18;
    println!("{}", &v2);
    return 0;
}
