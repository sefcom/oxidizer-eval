fn uu_ln::link(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x18d]
    let v1: u32;  // [bp-0x18c]
    let v2: Result<struct24, struct24>;  // [bp-0x188]
    let v3: u64;  // [bp-0x188]
    let v4: u64;  // [bp-0x180]
    let v6: u8;  // [bp-0x170]
    let v7: u64;  // [bp-0x168], Other Possible Types: std::path::PathBuf
    let v8: u64;  // [bp-0x160]
    let v9: u64;  // [bp-0x158]
    let v10: u8;  // [bp-0x150]
    let v11: u64;  // [bp-0x140]
    let v13: u64;  // [bp-0x128]
    let v14: u64;  // [bp-0x120]
    let v15: u64;  // [bp-0x118]
    let v16: u64;  // [bp-0x110]
    let v17: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x108], Other Possible Types: u384
    let v21: u32;  // eax
    let v22: u32;  // r9
    let v23: u64;  // rax
    let v24: u64;  // rax

    v21 = 0;
    v11 = 0x8000000000000000;
    v16 = a0;
    if *((a4 + 49) as &i8) {
        v21 = uu_ln::relative_path(a0, a1, a2, a3, v22) as u32;
    } else {
        v14 = a0;
        v15 = a1;
        v13 = 0x8000000000000000;
    }
    v17 = std::fs::metadata(a2, a3);
    v0 = *((a4 + 48) as &i8);
    if v0 {
        v23 = std::os::unix::fs::symlink(&v13, a2, a3);
        if v23 {
            v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        } else {
LABEL_4baa44:
            if !*((a4 + 53) as &i8) {
                return 0;
            }
            v7 = 1;
            v8 = a2;
            v9 = a3;
            v10 = 1;
            v3 = 1;
            v4 = *(&v14 as &i128);
            v6 = 1;
            v1 = &g_52d001;
            print!("{} -> {}", &v7, &v3);
            v17 = core::fmt::Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            std::io::stdio::_print(&v17);
            return 0;
        }
    } else if *((a4 + 50) as &i8) && std::path::Path::is_symlink() {
        v17 = std::fs::canonicalize(&v13, a2);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v17, &v13);
        v24 = v4;
        if !(v2 as i64 == 0x8000000000000000) {
            goto LABEL_4baa07;
        }
    } else {
        v7 = std::sys::pal::unix::os::split_paths::bytes_to_path(v14, v15);
LABEL_4baa07:
        v17 = struct24 {
            field_0: &v13
            field_8: a2
            field_16: a3
        };
        v24 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(&v17, a2, a3), &v17);
        if !v24 {
            goto LABEL_4baa44;
        }
    }
    return v24;
}
