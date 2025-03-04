fn uu_rm::remove(a0: u32, a1: u32, a2: &u64) -> u64 {
    let v0: i32;  // [sp-0x16c]
    let v1: i64;  // [sp-0x168]
    let v2: i32;  // [sp-0x15c]
    let v3: i64;  // [sp-0x140]
    let v4: i64;  // [sp-0x138]
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i8;  // [sp-0x118]
    let v9: Result<struct176, struct8>;  // [sp-0xe0]
    let v11: struct8;  // rax
    let v12: i32;  // edx
    let v14: i64;  // rbp
    let v15: i64;  // r13
    let v16: i64;  // r15
    let v17: i8;  // al
    let v18: i64;  // r12
    let v19: i64;  // rbx
    let v20: i8;  // al
    let v21: i64;  // rdx

    v3 = a0;
    v4 = a1 * 16 + a0;
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v11 {
        v14 = 0;
    } else {
        v12 = *((a2 + 5) as &i8);
        if !*(a2 as &i8) {
            v14 = 0;
            v0 = v12;
            v2 = *((a2 + 6) as &i8);
            do {
                v18 = *(v11 as &i64);
                v19 = *((v11 + 8) as &i64);
                v9 = std::fs::symlink_metadata(v18, v19);
                match v9 {
                    Ok(_) => {
                        v20 = ((*((&v9 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v18, v19, a2) as i8 : uu_rm::remove_file(v18, v19, v0 as u64, v2 as u64) as i8);
                    },
                    Err(v1) => {
                        v6 = v21;
                        v5 = 1;
                        v6 = v18;
                        v7 = v19;
                        v8 = 1;
                        show_error!("cannot remove {}: No such file or directory", &v5);
                        v20 = (core::ptr::drop_in_place<std::io::error::Error>(&v1) & -0x100 | 1) as i8;
                    },
                }
            } while ((v14 = v14 & -0x100 | (v14 as u8 | v20) as u64, v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v11));
        } else {
            v14 = 0;
            v0 = v12;
            do {
                v15 = *(v11 as &i64);
                v16 = *((v11 + 8) as &i64);
                v9 = std::fs::symlink_metadata(v15, v16);
                match v9 {
                    Err(_) => {
                        v17 = 0;
                    },
                    Ok(_) => {
                        v17 = ((*((&v9 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v15, v16, a2) as i8 : uu_rm::remove_file(v15, v16, v0 as u64, v2 as u64) as i8);
                    },
                }
            } while ((v14 = v14 & -0x100 | (v14 as u8 | v17) as u64, v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v11));
        }
    }
    return (v14 & -0x100 | v14 as u8 & 1) & 4294967295 & 4294967295;
}
