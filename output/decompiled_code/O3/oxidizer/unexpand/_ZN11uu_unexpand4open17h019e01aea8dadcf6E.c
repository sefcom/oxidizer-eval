fn uu_unexpand::open(a0: &struct56, a1: u64, a2: u64) -> u64 {
    let v0: u128;  // [sp-0x90], Other Possible Types: i192, Result<struct16, struct12>
    let v1: u32;  // [sp-0x78]
    let v2: u64;  // [sp-0x60]
    let v3: u64;  // [sp-0x58]
    let v4: Result<struct4, struct8>;  // [sp-0x50], Other Possible Types: u64
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rcx
    let v9: u64;  // rcx

    if std::path::Path::is_dir(a1, a2) as i8 {
        v2 = a1;
        v3 = a2;
        v0 = format!("{:?}: Is a directory", &v2);
        v1 = 1;
        *(&a0->field_8 as &double) = alloc::boxed::Box<T>::new(&v0);
        a0->field_16 = &g_51ebd8;
        return struct8 {
            field_0: 0
        };
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        v7 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v8 = &g_51eb28;
    } else {
        v4 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a1, a2);
        v6 = v0;
        match v0 {
            Ok(_) => {
                v9 = *((&v0 as &char + 8) as &i64);
                return struct24 {
                    field_0: 0
                    field_8: v6
                    field_16: v9
                };
            },
            Err(_) => {
                v7 = alloc::boxed::Box<T>::new(*((&v0 as &char + 8) as &i32) as u32 as u64);
                v8 = &g_51ead0;
            },
        }
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, v7, v8);
}
