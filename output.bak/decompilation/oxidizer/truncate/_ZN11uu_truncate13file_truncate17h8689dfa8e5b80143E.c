fn uu_truncate::file_truncate(a0: u32, a1: u32, a2: u8, a3: u32) -> u64 {
    let v0: struct28;  // [sp-0x148], Other Possible Types: u64, Result<struct4, struct8>
    let v1: u64;  // [sp-0x140]
    let v2: &&struct_0;  // [sp-0x138]
    let v3: u64;  // [bp-0x130]
    let v4: void*;  // [sp-0x128]
    let v5: void*;  // [bp-0x118], Other Possible Types: struct4
    let v6: u64;  // [sp-0x110]
    let v7: u64;  // [sp-0x108]
    let v8: u8;  // [sp-0x100]
    let v9: &u8;  // [sp-0xf8]
    let v10: u64;  // [sp-0xf0]
    let v13: u64;  // [sp-0xd0], Other Possible Types: struct16, struct13
    let v14: u8;  // [sp-0xc7]
    let v15: u16;  // [bp-0xc4]
    let v16: i8;  // [bp-0x98]
    let v18: u64;  // rax
    let v19: void*;  // r15

    v13 = std::fs::metadata(a0, a1);
    if v13 != 2 && (0xf000 & v16) == 0x1000 {
        v5 = 0;
        v6 = a0;
        v7 = a1;
        v8 = 1;
        v9 = &v5;
        v10 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "cannot open ";
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        v0 = struct28 {
            field_0: v11
            field_16: v12
            field_24: 1
        };
        v18 = alloc::boxed::Box<T>::new(&v0);
        return v18;
    }
    v13 = struct13 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: vvar_49{reg 56}
    };
    v15 = 0;
    v14 = 1;
    v0 = std::fs::OpenOptions::open(&v13, a0, a1) as u64;
    match v0 {
        Ok(_) => {
            v5 = struct4 {
                field_0: *((&v0 as &char + 4) as &i32)
            };
            v19 = std::fs::File::set_len(&v5, a3);
        },
        Err(v19) => {
            if !std::io::error::Error::kind(v19) as i8 && !a2 {
                v19 = 0;
            }
        },
    }
    v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v19, a0, a1);
    return v18;
}
