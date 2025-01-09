fn uu_uniq::open_input_file(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x60], Other Possible Types: Result<struct16, struct4>
    let v1: i352;  // [sp-0x50], Other Possible Types: struct44, Result<struct4, struct8>
    let v3: i32;  // edx

    if !a1 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v1 = std::io::stdio::stdin();
        alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(&v1), v3 & 1);
        goto LABEL_4befef;
    } else {
        v1 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        if !v0 {
            v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
            alloc::boxed::Box<T>::new(&v1);
LABEL_4befef:
        }
    }
    return struct24 {
        field_0: v6
        field_8: v4
        field_16: v5
    };
}
