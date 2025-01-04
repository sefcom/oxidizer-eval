fn uu_expand::open(a0: &u64, a1: u64, a2: u64) -> u64 {
    let v0: Result<struct16, struct12>;  // [sp-0x40], Other Possible Types: u128
    let v1: Result<struct4, struct8>;  // [sp-0x30], Other Possible Types: u64
    let v3: u64;  // rax
    let v4: u64;  // rcx
    let v5: u64;  // rax
    let v6: u64;  // rcx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v3 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v4 = &g_51ce18;
    } else {
        v1 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        v5 = v0;
        match v0 {
            Ok(_) => {
                v6 = *((&v0 as &char + 8) as &i64);
                return struct24 {
                    field_0: 0
                    field_8: v5
                    field_16: v6
                };
            },
            Err(_) => {
                v3 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v4 = &g_51cdc0;
            },
        }
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, v3, v4);
}
