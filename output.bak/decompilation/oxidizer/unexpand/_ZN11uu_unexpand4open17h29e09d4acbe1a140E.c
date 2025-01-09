fn uu_unexpand::open(a0: &Result<struct56, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x90], Other Possible Types: Result<struct16, struct4>
    let v1: i32;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50], Other Possible Types: Result<struct4, struct8>
    let v7: i64;  // [sp-0x48]
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v10: i64;  // [sp-0x30]
    let v13: i64;  // rax
    let v14: i64;  // rcx

    if std::path::Path::is_dir(a1, a2) as i8 {
        v4 = a1;
        v5 = a2;
        v2 = &v4;
        v3 = <std::path::Display as core::fmt::Display>::fmt;
        v6 = &g_51cf70;
        v7 = 2;
        v10 = 0;
        v8 = &v2;
        v9 = 1;
        core::option::Option<T>::map_or_else();
        v1 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
        *((a0 + 16) as &&i64) = &g_51d078;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v13 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v14 = &g_51cfe8;
    } else {
        v6 = std::fs::File::open(a1, a2) as u64;
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, a1, a2);
        match v0 {
            Ok(_) => {
                return Err(struct16 {
                    field_0: v12
                    field_8: v15
                });
            },
            Err(_) => {
                v13 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v14 = &g_51cf90;
            },
        }
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, v13, v14);
}
