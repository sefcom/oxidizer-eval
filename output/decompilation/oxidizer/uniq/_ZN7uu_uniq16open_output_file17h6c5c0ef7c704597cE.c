fn uu_uniq::open_output_file(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0x50]
    let v1: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x40], Other Possible Types: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>, std::io::stdio::Stdout
    let v3: struct24;  // rax
    let v4: u64;  // rcx
    let v5: &[u8];  // rdx
    let v6: i64;  // rdi

    if !a0 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v1 = std::io::stdio::stdout();
        v3 = alloc::boxed::Box<T>::new(std::io::stdio::Stderr::lock(&v1));
    } else {
        v1 = std::fs::File::create(a0, a1);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a0, a1);
        if !v0.field_0 {
            v1 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
            v3 = alloc::boxed::Box<T>::new(&v1);
        }
    }
    *((v6 + 8) as &struct24) = v3;
    *((v6 + 16) as &u64) = v4;
    *(v6 as &&[u8]) = v5;
    return;
}
