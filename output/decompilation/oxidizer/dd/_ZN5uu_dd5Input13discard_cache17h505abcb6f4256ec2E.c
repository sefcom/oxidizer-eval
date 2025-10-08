fn uu_dd::Input::discard_cache(a0: u32, a1: u32, a2: u32, a3: u32) -> void {
    let v0: struct16;  // [bp-0x88]
    let v1: struct16;  // [bp-0x78]
    let v2: struct32;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v6: u64;  // rdx

    v1 = struct16 {
        field_0: <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Source::discard_cache(a0, a1, a2, a3) as i32 as u32 as u64)
        field_8: &g_53cab0
    };
    if !v1.field_0 {
        return;
    }
    v0 = struct16 {
        field_0: v1.field_0
        field_8: &g_53cab0
    };
    uucore::mods::error::set_exit_code(uucore::mods::error::UError::code());
    v2 = uucore::util_name();
    v3 = v6;
    eprintln!("{}: {}", &v2, &v0);
    return;
}
