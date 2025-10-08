fn uu_sum::open(a0: &struct32, a1: &std::path::Path) -> u64 {
    let v0: i64;  // [bp-0x128]
    let v6: struct16;  // [bp-0xf8], Other Possible Types: struct24
    let v7: core::fmt::Arguments;  // [bp-0xe0]
    let v8: struct16;  // [bp-0xd8]
    let v9: struct40;  // [bp-0xc8], Other Possible Types: Result<struct4, struct8>
    let v11: u64;  // rax
    let v12: u64;  // rcx
    let v13: u64;  // rsi
    let v14: u64;  // rdx
    let v15: u64;  // rax
    let v16: u64;  // rdx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1) {
        v11 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v8 = struct16 {
            field_0: v13
            field_8: v14
        };
        if !std::path::Path::is_dir(a1) {
            v9 = std::fs::metadata(a1);
            if let Err(_) = v9 {
                goto LABEL_457362;
            }
            v9 = std::fs::File::open(&v8);
            v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v9);
            if !v6.field_0 {
                v11 = alloc::boxed::Box<T>::new(v6.field_8);
            }
        } else {
LABEL_457362:
            v9 = struct40 {
                field_0: v15
                field_8: 2
                field_16: &v0
                field_24: ""
            };
            v6 = core::option::Option<T>::map_or_else(&v9);
            v7 = 2;
            v11 = alloc::boxed::Box<T>::new(&v6) as u64;
        }
    }
    return struct24 {
        field_0: v16
        field_8: v11
        field_16: v12
    };
}
