fn uu_rm::remove(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [bp-0x151]
    let v1: u8;  // [bp-0x151]
    let v3: u64;  // [bp-0x100]
    let v4: u64;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: u8;  // [bp-0xe8]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v9: i64;  // r15
    let v10: u64;  // r14
    let v11: u64;  // rbp
    let v12: u8;  // bpl
    let v14: u64;  // rbx
    let v15: u64;  // r12
    let v16: u64;  // rdx

    if !a1 {
        return v11 & -0x100 | v12 & 1;
    }
    v9 = a0;
    v10 = a1 * 16 + a0;
    v0 = *(a2 as &i8) ^ 1;
    v11 = 0;
    if (*(a2 as &i8) & 1) {
        do {
            v7 = std::fs::symlink_metadata(*(v9 as &i64), *((v9 + 8) as &i64));
            match v7 {
                Err(_) => {
                    v1 = v0;
                },
                Ok(_) => {
                    v1 = ((*((&v7 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(*(v9 as &i64), *((v9 + 8) as &i64), a2) as u8 : uu_rm::remove_file(*(v9 as &i64), *((v9 + 8) as &i64), a2) as u8);
                },
            }
            v12 |= v1;
            v11 = v11 & -0x100 | v12;
            v9 += 16;
        } while (v9 != v10);
    } else {
        do {
            v14 = *(v9 as &i64);
            v15 = *((v9 + 8) as &i64);
            v7 = std::fs::symlink_metadata(v14, v15);
            match v7 {
                Err(_) => {
                    v3 = uucore::util_name();
                    v4 = v16;
                    eprint!("{}: ", &v3);
                    v3 = 1;
                    v4 = v14;
                    v5 = v15;
                    v6 = 1;
                    eprintln!("cannot remove {}: No such file or directory", &v3);
                    v1 = v0;
                },
                Ok(_) => {
                    v1 = ((*((&v7 as &char + 56) as &i32) & 0xf000) == 0x4000 ? uu_rm::handle_dir(v14, v15, a2) as u8 : uu_rm::remove_file(v14, v15, a2) as u8);
                },
            }
            v12 |= v1;
            v11 = v11 & -0x100 | v12;
            v9 += 16;
        } while (v9 != v10);
    }
    return v11 & -0x100 | v12 & 1;
}
