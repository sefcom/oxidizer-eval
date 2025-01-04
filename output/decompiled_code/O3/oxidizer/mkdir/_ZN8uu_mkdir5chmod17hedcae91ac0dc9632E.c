fn uu_mkdir::chmod(a0: u64, a1: u64, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::set_permissions(a0, a1, a2), a0);
}
