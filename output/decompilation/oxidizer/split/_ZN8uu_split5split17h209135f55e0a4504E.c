fn uu_split::split(a0: i64) -> u64 {
    let v0: Result<struct4, struct8>;  // [bp-0x1e8]
    let v1: struct56;  // [bp-0x150]
    let v2: Result<struct16, struct12>;  // [bp-0x118]
    let v4: u64;  // rbx
    let v5: u64;  // r14
    let v6: struct40;  // rax
    let v7: struct24;  // rcx
    let v8: u64;  // rsi

    v4 = a0[120] as i64;
    v5 = a0[128] as i64;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "-") {
        v6 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v0 = std::fs::File::open(v4, v5);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, v4, v5);
        match v2 {
            Ok(_) => {
                return v2 as i64;
            },
            Err(_) => {
                v6 = alloc::boxed::Box<T>::new(*((&v2 as &char + 8) as &i64) as i32);
            },
        }
    }
    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v8, v6, v7);
}
