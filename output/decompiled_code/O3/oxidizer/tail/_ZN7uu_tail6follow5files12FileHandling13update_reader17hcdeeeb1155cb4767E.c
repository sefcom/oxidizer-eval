fn uu_tail::follow::files::FileHandling::update_reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x58], Other Possible Types: i64
    let v1: i8;  // [bp-0x50]
    let v2: struct44;  // [sp-0x48], Other Possible Types: i352
    let v4: i64;  // rbx

    v4 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, a3, a4, a5);
    v0 = std::fs::File::open(a1, a2);
    if v0 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32));
    *((v4 + 200) as &double) = alloc::boxed::Box<T>::new(&v2);
    *((v4 + 208) as &&i64) = &g_5bd988;
    return 0;
}
