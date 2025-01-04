fn uu_uniq::open_output_file(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct16, struct12>;  // [sp-0x50], Other Possible Types: i128
    let v1: i64;  // [sp-0x40], Other Possible Types: Result<struct4, struct8>, struct29
    let v3: i64;  // rsi
    let v4: i64;  // rdx
    let v5: i64;  // rax
    let v6: i64;  // rcx
    let v7: i64;  // rdx

    if !a1 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v1 = std::io::stdio::stdout();
        v5 = alloc::boxed::Box<T>::new(std::io::stdio::Stderr::lock(&v1, v3, v4));
        v6 = &g_5306d0;
        goto LABEL_4bf0c9;
    } else {
        v1 = std::fs::File::create(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        v5 = v0;
        match v0 {
            Ok(_) => {
                v6 = *((&v0 as &char + 8) as &i64);
                v7 = 1;
            },
            Err(_) => {
                v1 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32) as u32 as u64);
                v5 = alloc::boxed::Box<T>::new(&v1);
                v6 = &g_530680;
LABEL_4bf0c9:
                v7 = 0;
            },
        }
    }
    return struct24 {
        field_0: v7
        field_8: v5
        field_16: v6
    };
}
