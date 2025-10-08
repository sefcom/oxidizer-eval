fn starship::modules::nix_shell::module(a0: i64, a1: u64) -> void {
    let v0: Option<struct24>;  // [bp-0x140]
    let v1: Result<struct104, struct98>;  // [bp-0xf0]
    let v2: struct92;  // [bp-0x88]
    let v3: i64;  // [bp-0x30]
    let v4: core::option::Option<(&str, &str)>;  // [bp-0x28]
    let v5: core::option::Option<&str>;  // [bp-0x20]
    let v6: &mut [u8];  // [bp-0x18]
    let v7: &str;  // [bp-0x10]
    let v8: u64;  // [bp-0x8]
    let v10: u64;  // r15
    let v11: &str;  // r14
    let v12: &mut [u8];  // r13
    let v13: i64;  // r12
    let v14: i64;  // rbx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v2 = starship::context::Context::new_module(a1, "nix_shell");
    v1 = starship::config::ModuleConfig::try_load(v3);
    v0 = starship::context_env::Env::get_env("name");
    goto ((&g_52b034.field_0)[starship::modules::nix_shell::NixShellType::detect_shell_type(*((&v1 as &char + 97) as &i8))] + &g_52b034.field_0) as i64;
}
