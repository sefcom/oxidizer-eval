fn uu_uniq::open_output_file(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i136;  // [sp-0x50], Other Possible Types: Result<struct16, struct4>
    let v1: i64;  // [sp-0x40], Other Possible Types: struct29, Result<struct4, struct8>

    if !a1 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v1 = std::io::stdio::stdout();
        alloc::boxed::Box<T>::new(std::io::stdio::Stderr::lock(&v1));
        goto LABEL_4bf0c9;
    } else {
        v1 = std::fs::File::create(a1, a2) as u64;
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        if !v0 {
            v1 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
            alloc::boxed::Box<T>::new(&v1);
LABEL_4bf0c9:
        }
    }
    return struct24 {
        field_0: v5
        field_8: v3
        field_16: v4
    };
}
