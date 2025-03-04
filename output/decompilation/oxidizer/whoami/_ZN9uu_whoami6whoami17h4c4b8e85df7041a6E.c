fn uu_whoami::whoami(a0: &struct24) -> u64 {
    let v0: struct16;  // [sp-0x28]

    v0 = uu_whoami::platform::unix::get_username();
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(a0, &v0);
    return a0;
}
