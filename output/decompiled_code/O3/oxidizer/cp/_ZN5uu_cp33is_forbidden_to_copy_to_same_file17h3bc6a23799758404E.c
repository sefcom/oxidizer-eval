fn uu_cp::is_forbidden_to_copy_to_same_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> u64 {
    let v0: i8;  // [sp-0xba]
    let v1: i8;  // [sp-0xb9]
    let v2: i160;  // [sp-0xb0], Other Possible Types: struct20
    let v3: i160;  // [sp-0x70], Other Possible Types: struct20
    let v5: i8;  // r15b
    let v6: i8;  // dl
    let v7: i8;  // dl
    let v8: i64;  // rdx
    let v9: i64;  // rcx
    let v10: i64;  // r8
    let v11: i64;  // r9
    let v12: i64;  // rax
    let v13: i64;  // rax

    v1 = std::path::Path::is_symlink(a0, a1) as i8;
    v5 = std::path::Path::is_symlink(a2, a3) & 255 & 4294967295;
    v0 = *((a4 + 65) as &i8);
    if !uucore::features::fs::paths_refer_to_same_file(a0, a1, a2, a3, 1) as i8 {
        return 0;
    }
    v6 = v1;
    if *((a4 + 76) as &i8) {
        if !(!*((a4 + 60) as &i8)) || !(!*((a4 + 61) as &i8)) {
            if !(!(!v0 & v6)) || !(!v5) {
                return 0;
            }
        } else {
            if !(v6 == 1) || !(!!v0) || !(!v5) {
                return 0;
            }
        }
        if !v6 {
            v2 = std::path::Path::components(a2, a3);
            v3 = std::path::Path::components(a0, a1);
            v7 = v1;
            if !<std::path::Components as core::cmp::PartialEq>::eq(&v2, &v3, v8, v9, v10, v11) as i8 {
                return 0;
            }
        }
    }
    v12 = *((a4 + 78) as &i8);
    if !v12 {
        return 0;
    } else if v12 == 1 {
        if v5 {
            return 0;
        }
        v13 = v12 | -0x100 | 1;
        return v13;
    } else {
        if v0 {
            return v13;
        } else if !(v7 & v5) {
            return v13;
        }
    }
}
