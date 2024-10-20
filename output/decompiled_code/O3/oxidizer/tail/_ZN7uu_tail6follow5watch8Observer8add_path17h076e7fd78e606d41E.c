fn uu_tail::follow::watch::Observer::add_path(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x288]
    let v1: struct24;  // [sp-0x278], Other Possible Types: i192
    let v2: i192;  // [sp-0x260], Other Possible Types: Enum
    let v3: i64;  // [sp-0x248]
    let v4: i64;  // [sp-0x1b0]
    let v5: i64;  // [sp-0x1a8]
    let v6: i64;  // [sp-0x1a0]
    let v7: i64;  // [sp-0x198]
    let v8: i64;  // [sp-0x190]
    let v9: i8;  // [sp-0x188]
    let v10: i8;  // [sp-0x180]
    let v11: i8;  // [bp-0xd8]
    let v12: i64;  // [bp+0x8]
    let v13: i8;  // [bp+0x10]
    let v14: i64;  // rbp
    let v15: i64;  // rax
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v19: i64;  // r15
    let v20: i64;  // r13
    let v21: i64;  // r14
    let v22: i64;  // rax
    let v23: i64;  // rbp
    let v25: i64;  // rbx
    let v27: i64;  // r9

    v14 = v12;
    if *((a0 + 142) as &i8) != 2 {
        if std::path::Path::is_absolute(a1, a2) as i8 {
            v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        } else {
            v2 = std::env::current_dir();
            if v2 != 0x8000000000000000 {
                v1 = std::path::Path::_join(v3, *((&v2 as &char + 16) as &i64), a1, a2);
            } else {
                v2 = 0x8000000000000000;
                v3 = *((&v2 as &char + 8) as &i64);
                v17 = __rust_alloc(32, 8);
                v18 = v2;
                *((v17 + 16) as &i128) = *((&v2 as &char + 16) as &i128);
                *(v17 as &i128) = v18;
                v19 = v12;
                if !a5 {
                    return v17;
                }
                if *(v19 as &i64) {
                    v22();
                }
                if *((v19 + 8) as &i64) {
                    return v17;
                }
                return v17;
            }
        }
        v20 = *((&v1 as &char + 8) as &i64);
        v21 = *((&v1 as &char + 16) as &i64);
        v2 = std::sys::pal::unix::fs::stat(v20, v21);
        if v2 == 2 {
            v10 = *((&v2 as &char + 8) as &i64);
            v9 = 2;
            goto LABEL_4c1243;
        } else {
            memcpy(&v9, &v2, 176);
            v23 = v9;
            if v23 != 2 {
                memcpy(&v11, &v10, 168);
            } else {
LABEL_4c1243:
                v23 = 2;
            }
        }
        v0 = v21;
        memcpy(v25, a3, a4);
        v7 = a5;
        v8 = v12;
        v2 = v23;
        memcpy(&v2, &v11, 168);
        v4 = a4;
        v5 = v25;
        v6 = a4;
        uu_tail::follow::files::FileHandling::insert(a0 + 56, v20, v0, &v2, v13, v27);
        if v1 {
            goto LABEL_4c10ae;
        }
    } else {
        if !a5 {
            return 0;
        }
        if *(v14 as &i64) {
            v15();
        }
        if *((v14 + 8) as &i64) {
LABEL_4c10ae:
        }
    }
    return 0;
}
