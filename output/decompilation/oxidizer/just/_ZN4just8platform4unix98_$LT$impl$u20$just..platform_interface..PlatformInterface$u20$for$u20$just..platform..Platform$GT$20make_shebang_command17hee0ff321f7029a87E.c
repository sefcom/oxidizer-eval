fn just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::make_shebang_command(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32, a6: i32) -> : struct224 {
    let a0: u64;  // rdi
    let v1: struct17;  // [bp-0xf0]
    let v2: core::option::Option<&str>;  // r14

    v2 = a5;
    v1 as u1280 = std::process::Command::new(a2, a3);
    if let Some(_) = v2 {
        v1 = std::process::Command::current_dir(v2, vvar_6);
    }
    memcpy(a0, &v1 as u1280, 224);
    return;
}
