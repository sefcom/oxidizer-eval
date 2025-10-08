fn fd::filter::time::now(a0: u64) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v3: u64;  // rdx

    v0 = <jiff::zoned::Zoned as core::convert::TryFrom<std::time::SystemTime>>::try_from(jiff::now::sys::system_time(), v3);
    return core::result::Result<T,E>::expect(a0, &v0);
}
