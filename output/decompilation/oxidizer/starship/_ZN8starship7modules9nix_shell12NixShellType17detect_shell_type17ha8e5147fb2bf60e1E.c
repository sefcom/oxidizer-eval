fn starship::modules::nix_shell::NixShellType::detect_shell_type(a0: u8) -> long long {
    let v0: Option<struct24>;  // [bp-0x38]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v4: <anon>;  // ebp
    let v6: struct24;  // al

    v0 = starship::context_env::Env::get_env("IN_NIX_SHELL");
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v4 = vvar_34{reg 56} & -0x100 | 3;
        if a0 {
            goto LABEL_baaf06;
        }
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, *((&v0 as &char + 16) as &i64), "pure") && a0 == 1 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, *((&v0 as &char + 16) as &i64), "impure") {
LABEL_baaf06:
        v6 = starship::modules::nix_shell::NixShellType::in_new_nix_shell();
    }
    return v4 as u64;
}
