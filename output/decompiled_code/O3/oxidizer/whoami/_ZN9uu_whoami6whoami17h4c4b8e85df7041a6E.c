fn uu_whoami::whoami(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x28], Other Possible Types: Result<struct24, struct16>

    v0 = uu_whoami::platform::unix::get_username(a1, a2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(a0, &v0);
    return a0;
}
