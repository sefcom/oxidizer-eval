fn starship::modules::rust::get_module_numeric_version(a0: i64, a1: u64, a2: u64) -> void {
    let v0: &str;  // [bp-0x18]
    let v1: &mut [u8];  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r15
    let v5: &mut [u8];  // r14
    let v6: &str;  // rbx
    let v7: i64;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_rustc_version(a2, a1);
}
