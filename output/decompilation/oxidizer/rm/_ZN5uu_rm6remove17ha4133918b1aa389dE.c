fn uu_rm::remove(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u32;  // [sp-0x16c]
    let v2: u32;  // [bp-0x15c]
    let v3: struct16;  // [bp-0x140]
    let v4: u64;  // [bp-0x130]
    let v5: u64;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u8;  // [bp-0x118]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v11: i64;  // rax
    let v12: u32;  // edx
    let v13: u32;  // ecx
    let v14: void*;  // rbp, Other Possible Types: u64
    let v15: u8;  // bpl
    let v16: u8;  // al
    let v17: u64;  // r12
    let v18: u64;  // rbx
    let v19: u64;  // rdi
    let v20: u64;  // rsi
    let v21: u64;  // rdx
    let v22: u8;  // al

    v3 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
    if !v11 {
        return v14 & -0x100 | v15 & 1;
    }
    v12 = *((a2 + 5) as &i8);
    v13 = *((a2 + 6) as &i8);
    if *(a2 as &i8) {
        v14 = 0;
        v0 = v12;
        do {
            v9 = std::fs::symlink_metadata(*(v11 as &i64), *((v11 + 8) as &i64));
            if let Ok(_) = v9 {
                v16 = ((*((&v9 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(*(v11 as &i64), *((v11 + 8) as &i64), a2) as i8 : uu_rm::remove_file(*(v11 as &i64), *((v11 + 8) as &i64), v0 as u64, (v13 & 255) as u64) as i8);
            }
            v14 = v14 & -0x100 | v15 | v16;
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
        } while (v11);
    } else {
        v14 = 0;
        v0 = v12;
        v2 = v13 & 255;
        do {
            v17 = *(v11 as &i64);
            v18 = *((v11 + 8) as &i64);
            v8 = std::fs::symlink_metadata(v17, v18);
            match v8 {
                Err(_) => {
                    v4 = uucore::util_name();
                    v5 = v21;
                    eprint!("{}: ", &v4);
                    v4 = 1;
                    v5 = v17;
                    v6 = v18;
                    v7 = 1;
                    eprintln!("cannot remove {}: No such file or directory", &v4);
                },
                Ok(_) => {
                    v19 = v17;
                    v20 = v18;
                    if (*((&v8 as &char + 56) as &i32) as i16 & 0xf000) != 0x4000 {
                        uu_rm::remove_file(v19, v20, v0 as u64, v2 as u64);
                    } else {
                        uu_rm::handle_dir(v19, v20, a2);
                    }
                },
            }
            v14 = v14 & -0x100 | v15 | v22;
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
        } while (v11);
    }
    return v14 & -0x100 | v15 & 1;
}
