fn uu_expand::open(a0: u64, a1: void*, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: Result<struct4, struct8>;  // [bp-0x30]
    let v4: u64;  // rax
    let v5: u64;  // rdx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") {
        v4 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v2 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a1, a2);
        if v0.field_0 {
            return struct24 {
                field_0: 0
                field_8: v0.field_0
                field_16: v1
            };
        }
        v4 = alloc::boxed::Box<T>::new(v0.field_8);
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, v4, v5);
}
