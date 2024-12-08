fn uu_arch::uumain::uumain(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x558], Other Possible Types: struct24
    let v1: i64;  // [sp-0x550]
    let v2: i128;  // [sp-0x548]
    let v3: i128;  // [sp-0x538]
    let v4: i64;  // [sp-0x528]
    let v5: i64;  // [sp-0x510]
    let v6: i64;  // [sp-0x508]
    let v7: i64;  // [bp-0x500]
    let v8: i64;  // [sp-0x4f8]
    let v9: i64;  // [bp-0x4f0]
    let v10: i8;  // [bp-0x4e0]
    let v11: i8;  // [bp-0x4d0]
    let v12: i8;  // [bp-0x498]
    let v13: i8;  // [bp-0x490]
    let v14: i5696;  // [sp-0x2e8], Other Possible Types: struct712, Result<struct536, struct24>
    let v15: i64;  // [sp-0x2e0]
    let v16: i64;  // [sp-0x2d8]
    let v18: i64;  // rax
    let v19: i64;  // r15
    let v20: i64;  // rbx
    let v21: i64;  // r14
    let v22: i64;  // rdx

    v14 = uu_arch::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v14, a0, a1);
    if v0 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        return v18;
    }
    v4 = v11;
    v3 = v10;
    v2 = v9;
    v0 = v7;
    v1 = v8;
    v14 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v19 = v14;
    v20 = v15;
    v21 = v16;
    if v19 == 0x8000000000000000 {
        v18 = uu_arch::uumain::uumain::{{closure}}(v20, v21);
        return v18;
    }
    memcpy(&v9, &v14, 0x200);
    v7 = v19;
    v8 = v20;
    v9 = v21;
    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(v12, v13);
    v5 = core::str::<impl str>::trim_matches(v0.field_8, *((&v0 as &char + 16) as &i64));
    v6 = v22;
    println!("{:?}", &v5);
    return 0;
}
