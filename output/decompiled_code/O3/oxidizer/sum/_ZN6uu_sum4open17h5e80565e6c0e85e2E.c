fn uu_sum::open(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i8;  // [sp-0x100]
    let v6: i192;  // [sp-0xf8], Other Possible Types: Result<struct16, struct12>, struct24
    let v7: i32;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xd0]
    let v10: i64;  // [sp-0xc8], Other Possible Types: Result<struct4, struct8>, struct40
    let v13: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rcx

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        return struct24 {
            field_0: 0
            field_8:             alloc::boxed::Box<T>::new(std::io::stdio::stdin())
            field_16: &g_513808
        };
    }
    v8 = a1;
    v9 = a2;
    if std::path::Path::is_dir(a1, a2) as i8 {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 0;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        goto LABEL_4ad62b;
    } else {
        v10 = std::fs::metadata(a1, a2);
        if v10 != 2 {
            v10 = std::fs::File::open(&v8, v13);
            v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10);
            v15 = v6;
            match v6 {
                Err(_) => {
                    return struct24 {
                        field_0: 0
                        field_8:                         alloc::boxed::Box<T>::new(*((&v6 as &char + 8) as &i32) as u32 as u64)
                        field_16: &g_5136c8
                    };
                },
                Ok(_) => {
                    v16 = *((&v6 as &char + 8) as &i64);
                },
            }
        } else {
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 0;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
LABEL_4ad62b:
            v10 = struct40 {
                field_0: v14
                field_8: 2
                field_16: &v0
                field_24: 1
                field_32: 0
            };
            v6 = core::option::Option<T>::map_or_else(&v10);
            v7 = 2;
            v15 = alloc::boxed::Box<T>::new(&v6);
            v16 = &g_513778;
        }
        return struct24 {
            field_0: 0
            field_8:             alloc::boxed::Box<T>::new(*((&v6 as &char + 8) as &i32) as u32 as u64)
            field_16: &g_5136c8
        };
    }
}
