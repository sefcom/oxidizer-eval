fn starship::modules::rust::get_module_version(a0: i64, a1: u64, a2: i64, a3: i64, a4: u64) -> void {
    let v0: struct24;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v2: &str;  // [bp-0x10]
    let v3: struct56;  // [bp-0x8]
    let v5: struct56;  // r15
    let v6: &str;  // r14
    let v7: u64;  // r12
    let v8: struct24;  // rbx
    let v9: struct16;  // rax

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v0 = v8;
    v9 = starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_rustc_version(a4, a1);
}
