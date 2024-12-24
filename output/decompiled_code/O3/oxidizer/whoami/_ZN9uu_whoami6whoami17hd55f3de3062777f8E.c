fn uu_whoami::whoami(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct24, struct16>;  // [sp-0x28], Other Possible Types: i192

    v0 = uu_whoami::platform::unix::get_username(a1, a2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(a0, &v0);
    return a0;
}
