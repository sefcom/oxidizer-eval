fn uu_ln::link(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x18d]
    let v1: u32;  // [bp-0x18c]
    let v2: struct24;  // [bp-0x188], Other Possible Types: u64
    let v3: Result<struct56, struct16>;  // [bp-0x180], Other Possible Types: u128
    let v5: u8;  // [bp-0x170]
    let v6: std::path::PathBuf;  // [bp-0x168], Other Possible Types: u64
    let v7: u64;  // [bp-0x160]
    let v8: u64;  // [bp-0x158]
    let v9: u8;  // [bp-0x150]
    let v10: u64;  // [bp-0x140]
    let v12: u64;  // [bp-0x128]
    let v13: u64;  // [bp-0x120]
    let v14: u64;  // [bp-0x118]
    let v15: u64;  // [bp-0x110]
    let v16: core::fmt::Arguments;  // [bp-0x108], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct24
    let v20: struct24;  // eax
    let v21: u32;  // r9
    let v22: core::fmt::Arguments;  // rax
    let v23: u64;  // rax

    v20 = 0;
    v10 = 0x8000000000000000;
    v15 = a0;
    if *((a4 + 49) as &i8) {
        v20 = uu_ln::relative_path(a0, a1, a2, a3, v21) as u32;
    } else {
        v13 = a0;
        v14 = a1;
        v12 = 0x8000000000000000;
    }
    v16 = std::fs::metadata(a2, a3);
    v0 = *((a4 + 48) as &i8);
    if v0 {
        v22 = std::os::unix::fs::symlink(&v12, a2, a3);
        if v22 {
            v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
        } else {
LABEL_4baa44:
            if !*((a4 + 53) as &i8) {
                return 0;
            }
            v6 = 1;
            v7 = a2;
            v8 = a3;
            v9 = 1;
            v2 = 1;
            v3 = *(&v13 as &i128);
            v5 = 1;
            v1 = &g_52d001;
            print!("{} -> {}", &v6, &v2);
            v16 = core::fmt::Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            std::io::stdio::_print(&v16);
            return 0;
        }
    } else if *((a4 + 50) as &i8) && std::path::Path::is_symlink() {
        v16 = std::fs::canonicalize(&v12, a2);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v16, &v12);
        v23 = v3;
        if !(v2.field_0 as i64 == 0x8000000000000000) {
            goto LABEL_4baa07;
        }
    } else {
        v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(v13, v14);
LABEL_4baa07:
        v16 = struct24 {
            field_0: &v12
            field_8: a2
            field_16: a3
        };
        v16 = struct24 {
            field_0: &v12
            field_8: a2
            field_16: a3
        };
        v23 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(&v16, a2, a3), &v16);
        if !v23 {
            goto LABEL_4baa44;
        }
    }
    return v23;
}
