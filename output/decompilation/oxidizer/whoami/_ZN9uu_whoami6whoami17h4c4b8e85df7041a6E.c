fn uu_whoami::whoami() -> : struct24 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x28]
    let v2: u64;  // rdi

    uu_whoami::platform::unix::get_username(a0);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v2, &v0);
    return;
}
