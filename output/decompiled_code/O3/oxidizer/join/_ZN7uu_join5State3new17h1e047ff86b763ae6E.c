fn uu_join::State::new(a0: &Result<struct77, struct16>, a1: u8, a2: u32, a3: u32, a4: &struct8, a5: u32) -> u64 {
    let v0: Result<struct16, struct12>;  // [sp-0x70], Other Possible Types: i128
    let v1: i64;  // [sp-0x60], Other Possible Types: Result<struct4, struct8>, struct44
    let v2: i64;  // [bp+0x8]
    let v3: i8;  // [bp+0x10]
    let v4: i32;  // edx
    let v5: i64;  // rax
    let v6: i64;  // rcx
    let v7: i64;  // rax
    let v8: i64;  // rcx
    let v9: i8;  // dl
    let v10: i8;  // sil

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "-") as i8 {
        v5 = alloc::boxed::Box<T>::new(std::io::stdio::Stdin::lock(a4), v4 & 1);
        v6 = &g_5353c8;
    } else {
        v1 = std::fs::File::open(a2, a3);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a2, a3);
        v7 = v0;
        match v0 {
            Ok(_) => {
                v8 = *((&v0 as &char + 8) as &i64);
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v7
                    field_16: v8
                };
            },
            Err(_) => {
                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32) as u32 as u64);
                v5 = alloc::boxed::Box<T>::new(&v1);
                v6 = &g_535340;
            },
        }
    }
    v9 = v3;
    v10 = v2;
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v7
        field_16: v8
    };
}
