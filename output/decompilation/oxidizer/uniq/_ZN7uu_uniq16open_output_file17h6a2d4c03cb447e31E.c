fn uu_uniq::open_output_file(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x50]
    let v1: Result<struct4, struct8>;  // [bp-0x40], Other Possible Types: std::io::stdio::Stdout, struct29
    let v3: u64;  // rdx
    let v4: u64;  // rax
    let v5: u64;  // rcx

    if !a1 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") {
        v1 = std::io::stdio::stdout();
        v4 = alloc::boxed::Box<T>::new(std::io::stdio::Stderr::lock(&v1));
    } else {
        v1 = std::fs::File::create(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        if !v0.field_0 {
            v1 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v0.field_8);
            v4 = alloc::boxed::Box<T>::new(&v1) as u64;
        }
    }
    return struct24 {
        field_0: v3
        field_8: v4
        field_16: v5
    };
}
