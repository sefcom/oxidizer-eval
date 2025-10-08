fn uu_kill::kill(a0: i32, a1: i64, a2: i64) {
    let v0: u64;  // [bp-0xa0]
    let v1: u32;  // [bp-0x94]
    let v2: u64;  // [bp-0x90]
    let v3: core::result::Result<(), core::fmt::Error>;  // [bp-0x88]
    let v5: i64;  // r13
    let v6: u64;  // rax
    let v7: i64;  // rdx

    if !a2 {
        return;
    }
    do {
        v1 = *((a1 + v5) as &i32);
        v6 = nix::sys::signal::kill(*((a1 + v5) as &i32), a0);
        if v6 != 134 {
            v0 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v6 * 0x100000000 | 2, &v1);
            uucore::mods::error::set_exit_code(1);
            v2 = uucore::util_name();
            v3 = v7;
            eprintln!("{}: {}", &v2, &v0);
        }
        v5 += 4;
    } while (a2 * 4 != v5);
    return;
}
