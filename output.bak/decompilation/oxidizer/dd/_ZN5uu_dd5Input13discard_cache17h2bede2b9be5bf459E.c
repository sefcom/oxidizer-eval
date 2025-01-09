fn uu_dd::Input::discard_cache(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x68]
    let v2: &struct_1;  // [sp-0x60]
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: &struct_1;  // rdx
    let v7: u64;  // rax

    v4 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Source::discard_cache(a0, a1, a2, a3) as i32);
    v5 = v4;
    if v4 {
        v0 = v4;
        uucore::mods::error::set_exit_code(v6->field_60());
        v1 = uucore::util_name();
        v2 = v6;
        eprintln!("{:?}: {:?}", &v1, &v0);
        v5 = v7;
        return v5;
    }
    return v5;
}
