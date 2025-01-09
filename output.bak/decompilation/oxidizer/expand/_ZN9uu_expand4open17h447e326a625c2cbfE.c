fn uu_expand::open(a0: &Result<struct56, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i136;  // [sp-0x40], Other Possible Types: Result<struct16, struct4>
    let v1: i64;  // [sp-0x30], Other Possible Types: Result<struct4, struct8>
    let v3: i64;  // rax
    let v4: i64;  // rcx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v3 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v4 = &g_51ce18;
    } else {
        v1 = std::fs::File::open(a1, a2) as u64;
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        match v0 {
            Ok(_) => {
                return Err(struct16 {
                    field_0: v5
                    field_8: v6
                });
            },
            Err(_) => {
                v3 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v4 = &g_51cdc0;
            },
        }
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, v3, v4);
}
