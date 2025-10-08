fn uu_ln::link(a0: &[u8], a1: &std::path::Path, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0x198], Other Possible Types: u64
    let v1: u128;  // [bp-0x190]
    let v2: u64;  // [bp-0x188]
    let v3: u8;  // [bp-0x180]
    let v4: u64;  // [bp-0x168]
    let v5: u64;  // [bp-0x160]
    let v6: u64;  // [bp-0x158]
    let v7: u8;  // [bp-0x150]
    let v8: struct24;  // [bp-0x148]
    let v9: u64;  // [bp-0x148]
    let v10: u64;  // [bp-0x140]
    let v11: u64;  // [bp-0x138]
    let v12: u64;  // [bp-0x130]
    let v14: core::fmt::Arguments;  // [bp-0x118], Other Possible Types: struct24, core::result::Result<std::path::PathBuf, std::io::error::Error>
    let v15: std::path::PathBuf;  // [bp-0x48], Other Possible Types: u64
    let v16: u64;  // [bp-0x38]
    let v18: u64;  // rdi
    let v19: u64;  // rsi
    let v20: u64;  // rdi
    let v21: u64;  // rsi
    let v24: u64;  // rax
    let v25: u64;  // rax
    let v26: u64;  // rdx
    let v27: u64;  // rcx

    v12 = 0x8000000000000000;
    if *((a2 + 49) as &i8) {
        v8 = uu_ln::relative_path(v18, v19, a1);
    } else {
        v10 = v20;
        v11 = v21;
        v9 = 0x8000000000000000;
    }
    v14 = std::fs::metadata(a1);
    if *((a2 + 48) as &i8) {
        v24 = std::os::unix::fs::symlink(&v8, a1);
        if v24 {
            v25 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
        } else {
LABEL_46661c:
            if !*((a2 + 53) as &i8) {
                return 0;
            }
            v4 = 1;
            v5 = v26;
            v6 = v27;
            v7 = 1;
            v0 = 1;
            v1 = *(&v10 as &i128);
            v3 = 1;
            print!("{} -> {}", &v4, &v0);
            v14 = core::fmt::Arguments {
                pieces: ["\n"]
                args: []
                fmt: 0
            };
            std::io::stdio::_print(&v14);
            return 0;
        }
    } else if *((a2 + 50) as &i8) && std::path::Path::is_symlink(v10, v11) {
        v14 = std::fs::canonicalize(&v8, v26);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v14, v10, v11);
        if v0.field_0 as i64 != 0x8000000000000000 {
            v15 = v0.field_0;
            v25 = v1;
            v16 = v2;
LABEL_4665b4:
            v14 = struct24 {
                field_0: &v8
                field_8: v26
                field_16: v27
            };
            v25 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::hard_link(&v15, v26, v27), &v14);
            if !v25 {
                goto LABEL_46661c;
            }
        }
    } else {
        v15 = std::sys::pal::unix::os::split_paths::bytes_to_path(v10, v11);
        goto LABEL_4665b4;
    }
    return v25;
}
