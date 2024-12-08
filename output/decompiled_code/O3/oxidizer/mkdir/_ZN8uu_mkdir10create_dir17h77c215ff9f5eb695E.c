fn uu_mkdir::create_dir(a0: u32, a1: u32, a2: u8, a3: u32, a4: u8, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x168]
    let v1: i32;  // [sp-0x164]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: i64;  // [sp-0x150]
    let v5: i64;  // [sp-0x148]
    let v6: i64;  // [sp-0x140]
    let v7: i64;  // [sp-0x138]
    let v8: i192;  // [sp-0x120], Other Possible Types: struct20
    let v9: i32;  // [bp-0x108]
    let v10: i160;  // [sp-0xe0], Other Possible Types: struct20, Result<struct176, struct16>, struct24
    let v11: i32;  // [bp-0xc8]
    let v13: i64;  // r13
    let v14: i64;  // r13
    let v15: i64;  // rdx
    let v16: i64;  // rcx
    let v17: i64;  // r8
    let v18: i64;  // r9
    let v19: i64;  // rbx
    let v20: i64;  // r14
    let v21: i64;  // rax
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i32;  // r15d

    v0 = a3;
    v10 = std::fs::metadata(a0, a1);
    v13 = v10;
    if v13 != 2 && !a2 {
        v6 = a0;
        v7 = a1;
        v8 = format!("{:?}: File exists", &v6);
        v9 = 1;
        v14 = alloc::boxed::Box<T>::new(&v8);
        return v14;
    }
    v4 = v13;
    v1 = a4;
    v5 = a0;
    v8 = std::path::Path::components(a0, a1);
    v10 = std::path::Path::components(1, 0);
    if <std::path::Components as core::cmp::PartialEq>::eq(&v8, &v10, v15, v16, v17, v18) as i8 {
        return 0;
    }
    v19 = a1;
    v20 = v5;
    if a2 {
        v21 = std::path::Path::parent(v20, v19, v15, v16);
        if !v21 {
            v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("failed to create whole tree");
            v11 = 1;
        } else {
            v14 = uu_mkdir::create_dir(v21, v15, 1, v0, 1, a5);
            if v14 {
                return v14;
            }
        }
    }
    v23 = std::fs::create_dir(v20, v19, v22);
    if !v23 {
        if v0 {
            v2 = uucore::util_name();
            v3 = v15;
            v8 = 1;
            v8.field_8 = vvar_166{reg 128};
            v8.field_16 = vvar_165{reg 40};
            v9 = 1;
            println!("{:?}: created directory {:?}", &v2, &v8);
        }
        v24 = a5;
        if v4 == 2 {
            if v1 {
                v24 = uucore::features::mode::get_umask() as i32 & 319 ^ 511;
            }
            v24 |= uucore::features::fsxattr::get_acl_perm_bits_from_xattr(v20, v19) as i32;
        }
        v14 = uu_mkdir::chmod(v20, v19, v24);
    } else if !std::path::Path::is_dir(v20, v19) as i8 {
        v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
    } else {
        return 0;
    }
    return v14;
}
