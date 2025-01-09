fn uu_rm::remove(a0: u32, a1: u32, a2: &u64) -> u64 {
    let v0: u32;  // [sp-0x16c]
    let v1: u64;  // [sp-0x168]
    let v2: u32;  // [sp-0x15c]
    let v3: u64;  // [sp-0x140]
    let v4: u64;  // [sp-0x138]
    let v5: u64;  // [sp-0x130]
    let v6: u64;  // [sp-0x128]
    let v7: u64;  // [sp-0x120]
    let v8: u8;  // [sp-0x118]
    let v9: struct16;  // [sp-0xe0], Other Possible Types: u128
    let v10: u8;  // [bp-0xa8]
    let v12: struct8;  // rax
    let v13: u32;  // edx
    let v15: u64;  // rbp
    let v16: void*;  // rbp
    let v17: u64;  // r13
    let v18: u64;  // r15
    let v19: u8;  // al
    let v20: u64;  // r12
    let v21: u64;  // rbx
    let v22: u8;  // al
    let v23: u64;  // rdx

    v3 = a0;
    v4 = a1 * 16 + a0;
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v12 {
        v15 = 0;
    } else {
        v13 = *((a2 as &char + 5) as &i8);
        if !*(a2 as &i8) {
            v16 = 0;
            v0 = v13;
            v2 = *((a2 as &char + 6) as &i8);
            do {
                v20 = *(v12 as &i64);
                v21 = *((v12 + 8) as &i64);
                v9 = std::fs::symlink_metadata(v20, v21);
                if v9 as i32 != 2 {
                    v22 = ((*(&v10 as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v20, v21, a2) as i8 : uu_rm::remove_file(v20, v21, v0, v2) as i8);
                } else {
                    v1 = *((&v9 as &char + 8) as &i64);
                    v5 = uucore::util_name();
                    v6 = v23;
                    eprint!("{:?}: ", &v5);
                    v5 = 1;
                    v6 = v20;
                    v7 = v21;
                    v8 = 1;
                    eprintln!("cannot remove {:?}: No such file or directory", &v5);
                    v22 = core::ptr::drop_in_place<std::io::error::Error>(&v1) | -0x100 | 1;
                }
            } while ((v15 = v16 | -0x100 | (v16 as u8 | v22) as u64, v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v12));
        } else {
            v15 = 0;
            v0 = v13;
            do {
                v17 = *(v12 as &i64);
                v18 = *((v12 + 8) as &i64);
                v9 = std::fs::symlink_metadata(v17, v18);
                if v9 as i32 == 2 {
                    v1 = *((&v9 as &char + 8) as &i64);
                    v19 = 0;
                } else {
                    v19 = ((*(&v10 as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v17, v18, a2) as i8 : uu_rm::remove_file(v17, v18, v0, v2) as i8);
                }
            } while ((v15 = v16 | -0x100 | (v16 as u8 | v22) as u64, v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v12));
        }
    }
    return (v15 | -0x100 | v15 & 1) & 4294967295 & 4294967295;
}
