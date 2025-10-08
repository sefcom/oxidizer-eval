fn uu_cp::is_forbidden_to_copy_to_same_file(a0: u64, a1: u64, a2: u64, a3: u64, a4: i64, a5: u32) -> long long {
    let v0: u8;  // [bp-0xc9]
    let v1: u32;  // [bp-0xb4]
    let v2: struct20;  // [bp-0xb0]
    let v3: struct20;  // [bp-0x70]
    let v5: core::fmt::rt::Argument;  // al
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // bl
    let v7: u8;  // cl
    let v8: core::fmt::rt::Argument;  // bpl
    let v9: core::fmt::rt::Argument;  // cl
    let v10: core::fmt::rt::Argument;  // cl
    let v11: struct24;  // rax
    let v12: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // bpl
    let v13: Result<struct1, struct8>;  // r15
    let v14: struct24;  // rax
    let v15: u32;  // rdx
    let v16: struct16;  // rax
    let v17: u64;  // rax

    v1 = a5;
    v0 = std::path::Path::is_symlink(a0, a1);
    v5 = std::path::Path::is_symlink(a2, a3);
    v6 = *((a4 + 89) as &i8);
    v7 = 1;
    v8 = v5;
    if !uucore::features::fs::paths_refer_to_same_file(a0, a1, a2, a3, v7) {
        return 0;
    }
    v9 = v8;
    v10 = v9;
    if !*((a4 + 101) as &i8) {
LABEL_4a2778:
        v11 = *((a4 + 103) as &i8);
        if v11 as u32 && v11 as u32 != 1 {
            if (v10 & v0) {
                v12 = v6;
                v13 = std::path::Path::file_name(a0, a1);
                v14 = std::path::Path::file_name(a2, a3);
                match v13 {
                    Err(_) => {
                        if v14 {
                            v16 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v15, v14, v15);
                        } else {
                            v11 = v14;
                        }
                    },
                    Ok(_) => {
                        v17 = v14 & -0x100 | ((!v14) as u8 as u8 | v12) as u64;
                        v11 = v17;
                    },
                }
            } else {
                return v11 & -0x100 | 1;
            }
        }
    } else if !*((a4 + 85) as &i8) && !*((a4 + 84) as &i8) {
        v10 = v9;
        if !(v0 & v6 ^ 1) && !v10 {
            goto LABEL_4a2778;
        }
    } else if v0 {
        v10 = v9;
        if !(v6 ^ 1) && !v10 {
            goto LABEL_4a2778;
        }
    } else if !v9 {
        v2 = std::path::Path::components(a2, a3);
        v3 = std::path::Path::components(a0, a1);
        v10 = v8;
        if <std::path::Components as core::cmp::PartialEq>::eq(&v2, &v3) {
            goto LABEL_4a2778;
        }
    }
    return 0;
}
