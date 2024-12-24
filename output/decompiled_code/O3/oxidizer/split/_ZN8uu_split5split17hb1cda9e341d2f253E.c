fn uu_split::split() -> u32 {
    let v0: Result<struct4, struct8>;  // [sp-0x218], Other Possible Types: i64
    let v1: Result<struct16, struct12>;  // [sp-0x180], Other Possible Types: i128
    let v2: struct56;  // [sp-0xe8]
    let v4: i64;  // rdi
    let v5: i64;  // rbx
    let v6: i64;  // r15
    let v7: i64;  // rax
    let v8: i64;  // rcx
    let v9: i64;  // rsi
    let v10: i64;  // rcx

    v5 = *((v4 + 120) as &i64);
    v6 = *((v4 + 128) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-") as i8 {
        v7 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v8 = &g_548b60;
    } else {
        v0 = std::fs::File::open(v5, v6);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, v4);
        if v1 {
            return;
        }
        v7 = alloc::boxed::Box<T>::new(*((&v1 as &char + 8) as &i32));
        v8 = &g_548b08;
    }
    v9 = 0x2000;
    if *(v4 as &i64) {
        v9 = *((v4 + 8) as &i64);
    }
    v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v9, v7, v8);
    v10 = *((v4 + 16) as &i64) - 6;
    if v10 >= 3 {
        v10 = 3;
    }
    goto *((4329980 + vvar_13{reg 32} * 4) as &i32) + 4329980;
}
