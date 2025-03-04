fn uu_unexpand::open(a0: &Result<struct56, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: String;  // [sp-0x90], Other Possible Types: Result<struct16, struct4>
    let v1: i32;  // [sp-0x78]
    let v2: i64;  // [sp-0x60]
    let v3: i64;  // [sp-0x58]
    let v4: Result<struct4, struct8>;  // [sp-0x50]
    let v7: i64;  // rax
    let v8: i64;  // rcx

    if std::path::Path::is_dir(a1, a2) as i8 {
        v2 = a1;
        v3 = a2;
        v0 = format!("{}: Is a directory", &v2);
        v1 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
        *((a0 + 16) as &&i64) = &g_51d078;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v7 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v8 = &g_51cfe8;
    } else {
        v4 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a1, a2);
        match v0 {
            Ok(_) => {
                return Err(struct16 {
                    field_0: v6
                    field_8: v9
                });
            },
            Err(_) => {
                v7 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v8 = &g_51cf90;
            },
        }
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, v7, v8);
}
