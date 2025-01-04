fn uu_shuf::read_input_file(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x80], Other Possible Types: Result<struct16, struct12>, struct16
    let v1: i64;  // [sp-0x70], Other Possible Types: Result<struct4, struct8>
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: i448;  // [sp-0x58], Other Possible Types: struct56
    let v6: i64;  // rax
    let v7: i64;  // rcx
    let v8: i64;  // rax
    let v9: i64;  // rcx
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v12: i64;  // rcx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v6 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v7 = &g_537c80;
    } else {
        v1 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1, a1, a2);
        v8 = v0;
        match v0 {
            Ok(_) => {
                v9 = *((&v0 as &char + 8) as &i64);
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: v8
                    field_16: v9
                };
            },
            Err(_) => {
                v6 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v7 = &g_537c28;
            },
        }
    }
    v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v6, v7);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(&v4, &v1, v10), v10, a1, a2);
    v11 = v0;
    if !v11 {
        *((a0 + 16) as &i64) = v3;
        *(a0 as &i64) = v1;
    } else {
        v12 = *((&v0 as &char + 8) as &i64);
        *((a0 + 8) as &i64) = v11;
        *((a0 + 16) as &i64) = v12;
        *(a0 as &i64) = 0x8000000000000000;
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v8
        field_16: v9
    };
}
