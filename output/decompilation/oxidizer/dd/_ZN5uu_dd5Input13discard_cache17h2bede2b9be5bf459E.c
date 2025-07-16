fn uu_dd::Input::discard_cache(a0: i32, a1: i32, a2: i32, a3: i32) -> int {
    let v0: u64;  // [bp-0x78]
    let v1: u64;  // [bp-0x68]
    let v2: i64;  // [bp-0x60]
    let v4: u64;  // rax
    let v5: i64;  // rdx

    v4 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Source::discard_cache(a0, a1, a2, a3) as i32);
    if !v4 {
        return;
    }
    v0 = v4;
    uucore::mods::error::set_exit_code(*((v5 + 96) as &i64)(v4) as u32);
    v1 = uucore::util_name();
    v2 = v5;
    eprintln!("{}: {}", &v1, &v0);
    return;
}
