fn uu_tail::follow::files::FileHandling::update_reader(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x58], Other Possible Types: i96
    let v1: struct44;  // [sp-0x48]

    uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    v0 = std::fs::File::open(a1, a2);
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v0);
        },
        Ok(_) => {
            v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32) as u32 as u64);
            return 0;
        },
    }
}
