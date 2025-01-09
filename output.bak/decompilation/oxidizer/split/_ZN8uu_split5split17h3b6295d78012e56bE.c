fn uu_split::split(a0: &u64) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x218], Other Possible Types: i64
    let v1: i136;  // [sp-0x180], Other Possible Types: Result<struct16, struct4>
    let v2: struct56;  // [sp-0xe8]
    let v4: i64;  // rbx
    let v5: i64;  // r15
    let v6: i64;  // rax
    let v7: i64;  // rcx
    let v8: i64;  // rbx
    let v9: i64;  // rsi
    let v10: i64;  // rcx

    v4 = *((a0 + 120) as &i64);
    v5 = *((a0 + 128) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-") as i8 {
        v6 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v7 = &g_548650;
    } else {
        v0 = std::fs::File::open(v4, v5) as u64;
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a0);
        v8 = v1;
        if v8 {
            return v8;
        }
        v6 = alloc::boxed::Box<T>::new(*((&v1 as &char + 8) as &i32));
        v7 = &g_5485f8;
    }
    v9 = 0x2000;
    if *(a0 as &i64) {
        v9 = *((a0 + 8) as &i64);
    }
    v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v9, v6, v7);
    v10 = *((a0 + 16) as &i64) - 6;
    if v10 >= 3 {
        v10 = 3;
    }
    goto *((4329468 + vvar_14{reg 32} * 4) as &i32) + 4329468;
}
