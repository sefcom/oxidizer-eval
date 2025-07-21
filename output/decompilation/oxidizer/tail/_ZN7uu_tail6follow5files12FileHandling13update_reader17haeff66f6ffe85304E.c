fn uu_tail::follow::files::FileHandling::update_reader(a0: i32, a1: i64, a2: i64) -> long long {
    let v0: struct32;  // [bp-0x58]
    let v1: struct11;  // [bp-0x54]
    let v2: u64;  // [bp-0x50]
    let v3: u8;  // [bp-0x48]
    let v5: i64;  // rbx
    let v6: u64;  // rcx

    v5 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    std::fs::File::open(a1, a2, v6);
    if v0 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v1 as u64, v6);
    *((v5 + 200) as &double) = alloc::boxed::Box<T>::new(&v3);
    *((v5 + 208) as &&u8) = &g_5bc4c8;
    return 0;
}
