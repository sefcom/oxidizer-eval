fn uu_uniq::open_input_file(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct16, struct12>;  // [sp-0x60], Other Possible Types: i128
    let v1: i64;  // [sp-0x50], Other Possible Types: Result<struct4, struct8>, struct44
    let v3: i32;  // edx
    let v4: i64;  // rax
    let v5: i64;  // rcx
    let v6: i64;  // rdx

    if !a1 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v1 = std::io::stdio::stdin();
        v4 = alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(&v1), v3 & 1);
        v5 = &g_5311c8;
        goto LABEL_4bef6f;
    } else {
        v1 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        v4 = v0;
        match v0 {
            Ok(_) => {
                v5 = *((&v0 as &char + 8) as &i64);
                v6 = 1;
            },
            Err(_) => {
                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32) as u32 as u64);
                v4 = alloc::boxed::Box<T>::new(&v1);
                v5 = &g_531140;
LABEL_4bef6f:
                v6 = 0;
            },
        }
    }
    return struct24 {
        field_0: v6
        field_8: v4
        field_16: v5
    };
}
