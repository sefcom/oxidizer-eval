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
    let v9: i1408;  // [sp-0xe0], Other Possible Types: Result<struct176, struct16>
    let v11: struct8;  // rax
    let v12: i32;  // edx
    let v14: i64;  // rbp
    let v15: i64;  // rbp
    let v16: i64;  // r13
    let v17: i64;  // r15
    let v18: i8;  // al
    let v19: i64;  // r12
    let v20: i64;  // rbx
    let v21: i8;  // al
    let v22: i64;  // rdx

    v3 = a0;
    v4 = a1 * 16 + a0;
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v11 {
        v14 = 0;
    } else {
        v12 = *((a2 + 5) as &i8);
        if !*(a2 as &i8) {
            v15 = 0;
            v0 = v12;
            v2 = *((a2 + 6) as &i8);
            do {
                v19 = *(v11 as &i64);
                v20 = *((v11 + 8) as &i64);
                v9 = std::fs::symlink_metadata(v19, v20);
                match v9 {
                    Ok(_) => {
                        v21 = ((*((&v9 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v19, v20, a2, 0xf000) as i8 : uu_rm::remove_file(v19, v20, v0 as u32 as u64, v2 as u32 as u64) as i8);
                    },
                    Err(_) => {
                        v1 = *((&v9 as &char + 8) as &i64);
                        v5 = uucore::util_name();
                        v6 = v22;
                        eprint!("{:?}: ", &v5);
                        v5 = 1;
                        v6 = v19;
                        v7 = v20;
                        v8 = 1;
                        eprintln!("cannot remove {:?}: No such file or directory", &v5);
                        v21 = (core::ptr::drop_in_place<std::io::error::Error>(&v1) | -0x100 | 1) as i8;
                    },
                }
            } while ((v14 = v15 | -0x100 | (v15 as i8 | v21) as u8 as u64, v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v11));
        } else {
            v14 = 0;
            v0 = v12;
            do {
                v16 = *(v11 as &i64);
                v17 = *((v11 + 8) as &i64);
                v9 = std::fs::symlink_metadata(v16, v17);
                match v9 {
                    Err(_) => {
                        v1 = *((&v9 as &char + 8) as &i64);
                        v18 = 0;
                    },
                    Ok(_) => {
                        v18 = ((*((&v9 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v16, v17, a2, 0xf000) as i8 : uu_rm::remove_file(v16, v17, v0 as u32 as u64, v2 as u32 as u64) as i8);
                    },
                }
            } while ((v14 = v15 | -0x100 | (v15 as i8 | v21) as u8 as u64, v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v11));
        }
    }
    return (v14 | -0x100 | v14 & 1) & 4294967295 & 4294967295;
}
