fn uu_chmod::Chmoder::walk_dir(a0: i64, a1: &[u8]) -> u64 {
    let v0: u32;  // [bp-0xbc]
    let v1: struct24;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: u64;  // [bp-0xa8]
    let v4: struct16;  // [bp-0x98]
    let v5: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x88], Other Possible Types: struct40
    let v6: u64;  // [bp-0x80]
    let v7: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x60], Other Possible Types: std::path::PathBuf
    let v8: struct9;  // [bp-0x60]
    let v9: struct16;  // [bp-0x60]
    let v10: u64;  // [bp-0x58]
    let v11: struct40;  // [bp-0x58]
    let v13: u32;  // rsi
    let v14: u64;  // rdx
    let v15: u64;  // r14
    let v16: u32;  // eax
    let v17: u8;  // al
    let v18: u64;  // rax
    let v19: u64;  // r13
    let v20: u64;  // r14
    let v21: u64;  // rbx
    let v22: i64;  // r13

    v15 = uu_chmod::Chmoder::chmod_file(a0, v13, v14);
    v16 = *((a0 + 38) as &i8);
    if v16 {
        if v16 == 1 {
            v5 = std::fs::canonicalize(a1);
            v7 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1);
            v1 = core::result::Result<T,E>::unwrap_or(&v5, &v7);
            v0 = <&std::path::Path as core::cmp::PartialEq<std::path::PathBuf>>::eq(a1, v14, v2);
            v17 = std::path::Path::is_symlink(a1);
            if v17 == 1 && !v0 as i8 {
                return v15;
            }
        } else {
            v0 = 1;
            std::path::Path::is_symlink(a1);
        }
    } else {
        if std::path::Path::is_symlink(a1) {
            return v15;
        }
    }
    if !std::path::Path::is_dir(a1) {
        return v15;
    }
    v8 = std::fs::read_dir(a1);
    if v8.field_8 == 2 {
        v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8.field_0);
    } else {
        v4 = v9;
        loop {
            v7 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v4);
            if let None = v7 {
                return v15;
            }
            if !v10 {
                break;
            }
            v5 = v11;
            v1 = std::fs::DirEntry::path(&v5);
            v20 = v2;
            v21 = v3;
            if !std::path::Path::is_symlink(v20, v21) {
                v15 = uu_chmod::Chmoder::walk_dir(a0, v20, v21);
                v22 = v14;
            } else if !v0 as i8 {
                v22 = v19;
            } else {
                v15 = core::result::Result<T,E>::and(uu_chmod::Chmoder::chmod_file(a0, v20, v21), v14, v15, v19);
                v22 = v14;
            }
            v19 = v22;
        }
        v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    return v18;
}
