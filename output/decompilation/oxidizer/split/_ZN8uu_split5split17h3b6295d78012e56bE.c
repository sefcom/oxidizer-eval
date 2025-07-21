fn uu_split::split(a0: i64) -> long long {
    let v0: u8;  // [bp-0x218]
    let v1: struct16;  // [bp-0x180]
    let v2: struct56;  // [bp-0xe8]
    let v4: u64;  // rcx
    let v5: u64;  // rax
    let v6: Result<struct24, struct24>;  // rcx
    let v7: u64;  // rsi

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a0 + 120) as &i64), *((a0 + 128) as &i64), "-") as i8 {
        v5 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        std::fs::File::open(*((a0 + 120) as &i64), *((a0 + 128) as &i64), v4);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a0);
        if v1.field_0 {
            return v1.field_0;
        }
        v5 = alloc::boxed::Box<T>::new(v1.field_8);
    }
    v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v7, v5, v6);
}
