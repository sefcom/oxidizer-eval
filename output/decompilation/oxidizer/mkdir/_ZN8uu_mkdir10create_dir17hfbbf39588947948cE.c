fn uu_mkdir::create_dir(a0: &std::path::Path, a1: i32, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x168]
    let v1: u32;  // [bp-0x15c]
    let v2: u64;  // [bp-0x158]
    let v3: struct712;  // [bp-0x150]
    let v4: struct640;  // [bp-0x148]
    let v5: u64;  // [bp-0x140]
    let v6: u64;  // [bp-0x138]
    let v7: alloc::string::String;  // [bp-0x120], Other Possible Types: struct20, struct712
    let v8: struct640;  // [bp-0x118]
    let v9: struct712;  // [bp-0x110]
    let v10: struct712;  // [bp-0x108]
    let v11: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v12: struct20;  // [bp-0xe0], Other Possible Types: struct24, u192
    let v13: u32;  // [bp-0xc8]
    let v15: u64;  // rdi
    let v16: u64;  // rsi
    let v17: u64;  // rdi
    let v18: u64;  // rsi
    let v19: u64;  // rbx
    let v20: u64;  // rbx
    let v21: u64;  // rax
    let v22: u64;  // rdx
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v26: u64;  // r14
    let v27: u64;  // rax
    let v29: u32;  // edx
    let v30: i64;  // rdx

    v11 = std::fs::metadata(a0);
    if let Ok(_) = v11 {
        if !*((a2 + 12) as &i8) {
            v5 = v15;
            v6 = v16;
            v7 = format!("{}: File exists", &v5);
            return alloc::boxed::Box<T>::new(&v7) as u64;
        }
    }
    v1 = a1;
    v0 = v17;
    v2 = v18;
    v7 = std::path::Path::components(a0);
    v12 = std::path::Path::components(0x1, 0);
    if <std::path::Components as core::cmp::PartialEq>::eq(&v7, &v12) {
        return 0;
    }
    v19 = v2;
    v20 = v19;
    if *((a2 + 12) as &i8) {
        v21 = std::path::Path::parent(v0, v19);
        if v21 {
            v23 = uu_mkdir::create_dir(v21, v22, 1, a2);
            v20 = v19;
            if v23 {
                return v23;
            }
        } else {
            v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("failed to create whole tree");
            v13 = 1;
            v24 = alloc::boxed::Box<T>::new(&v12) as u64;
            v20 = v2;
        }
    }
    v26 = v0;
    v27 = std::fs::create_dir(v26, v20);
    if v27 {
        return 0;
    }
    if *((a2 + 13) as &i8) {
        v3 = uucore::util_name();
        v4 = v22;
        v7 = 1;
        v8 = v26;
        v9 = v20;
        v10 = 1;
        println!("{}: created directory {}", &v3, &v7);
    }
    if v12 as i32 == 2 {
        v29 = uucore::features::fsxattr::get_acl_perm_bits_from_xattr(v26, v20);
        if v1 as i8 {
            v30 = v29 | uucore::features::mode::get_umask() & 319 ^ 511;
        } else {
            v30 = v29 | *((a2 + 8) as &i32);
            v0 = v26;
        }
    } else {
        v30 = *((a2 + 8) as &i32);
        v0 = v26;
    }
    return uu_mkdir::chmod(v0, v20, v30);
}
