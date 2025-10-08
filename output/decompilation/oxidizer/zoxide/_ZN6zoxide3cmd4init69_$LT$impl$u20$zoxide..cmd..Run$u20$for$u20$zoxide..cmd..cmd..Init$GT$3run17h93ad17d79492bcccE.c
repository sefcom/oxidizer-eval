fn zoxide::cmd::init::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Init>::run(a0: i64) -> void {
    let v5: u64;  // [bp-0x20]
    let v6: u64;  // [bp-0x18]
    let v7: u64;  // [bp-0x10]
    let v9: u64;  // r15
    let v10: u64;  // r14
    let v11: u64;  // rbx
    let v12: u8;  // al
    let v13: u8;  // al

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v12 = zoxide::config::echo();
    v13 = zoxide::config::resolve_symlinks();
}
