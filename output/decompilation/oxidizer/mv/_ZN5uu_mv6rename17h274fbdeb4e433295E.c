fn uu_mv::rename(a0: &std::path::Path, a1: &std::path::Path, a2: i64, a3: i64) -> u64 {
    let v1: u64;  // [bp-0x2c8]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x298]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x298]
    let v9: u128;  // [bp-0x298]
    let v10: u64;  // [bp-0x288]
    let v11: struct24;  // [bp-0x1e8], Other Possible Types: struct56, u128
    let v12: struct32;  // [bp-0x1e0]
    let v13: struct56;  // [bp-0x1d8], Other Possible Types: u64
    let v14: u8;  // [bp-0x1d0]
    let v15: alloc::string::String;  // [bp-0x130]
    let v17: u64;  // [bp-0x120]
    let v19: core::fmt::Arguments;  // [bp-0x110]
    let v20: core::fmt::rt::Argument;  // [bp-0x108]
    let v21: struct25;  // [bp-0x100]
    let v22: struct64;  // [bp-0xf8]
    let v25: core::fmt::Arguments;  // r15
    let v26: u64;  // rsi
    let v27: u64;  // rcx
    let v30: i64;  // rax
    let v31: core::fmt::rt::Argument;  // rdi
    let v32: struct32;  // rdx

    v7 = std::fs::metadata(a1);
    v9 = std::fs::metadata(a1);
    if !(v8 as i64 != 2 && std::path::Path::is_dir(a1) && std::path::Path::is_dir(a0)) {
LABEL_48cb64:
        v25 = uu_mv::rename_with_fallback(a0, v26, a1, v27);
        if !v25 {
            if !*((a2 + 49) as &i8) {
                return 0;
            }
            v19 = 1;
            v20 = v31;
            v21 = v26;
            v22 = 1;
            v11 = 1;
            v12 = v32;
            v13 = v27;
            v14 = 1;
            v15 = format!("renamed {} -> {}", &v19, &v11);
            v11 = *(&v15.vec.buf.inner.cap as &i128);
            v13 = v17;
            v30 = a3;
            if v1 {
                indicatif::multi::MultiProgress::suspend(*(v30 as &i64), &v11);
            } else {
                println!("{}", &v11);
            }
            return 0;
        }
    } else if uu_mv::is_empty_dir(a1) {
        v25 = std::fs::remove_dir(a1);
        if !v25 {
            goto LABEL_48cb64;
        }
    } else {
        v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Directory not empty");
        v10 = v13;
        v9 = *(&v11.field_0 as &i128);
        v25 = std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v9), &g_541778);
    }
    return v25;
}
