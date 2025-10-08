fn uu_unexpand::open(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: alloc::string::String;  // [bp-0x90], Other Possible Types: struct16
    let v2: u64;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: Result<struct4, struct8>;  // [bp-0x50]
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: u64;  // rax
    let v10: u64;  // rcx

    if std::path::Path::is_dir(a1, a2) {
        v2 = a1;
        v3 = a2;
        v0 = format!("{}: Is a directory", &v2);
        *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(&v0) as u64;
        v6 = &g_4e8290;
        *((a0 + 16) as &&u64) = &g_4e8290;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") {
        v7 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v4 = std::fs::File::open(a1, a2);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a1, a2);
        v9 = v0.field_0;
        if v0.field_0 {
            v10 = v0.field_8;
            return struct24 {
                field_0: 0
                field_8: v0.field_0
                field_16: v10
            };
        }
        v7 = alloc::boxed::Box<T>::new(v0.field_8);
    }
    return std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, v7, v8);
}
