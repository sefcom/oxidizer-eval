fn uu_tail::follow::files::FileHandling::update_reader(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x58]
    let v1: u32;  // [bp-0x54]
    let v2: u64;  // [bp-0x50]
    let v3: struct44;  // [bp-0x48]
    let v5: i64;  // rbx

    v5 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    v0 = std::fs::File::open(a1, a2);
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        },
        Ok(_) => {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v1 as u64);
            *((v5 + 200) as &u64) = alloc::boxed::Box<T>::new(&v3) as u64;
            *((v5 + 208) as &&u8) = &g_573408;
            return 0;
        },
    }
}
