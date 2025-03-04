fn uu_rm::remove_dir(a0: u32, a1: u32, a2: &u64) -> u64 {
    let v0: Option<struct40>;  // [sp-0xc8], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90], Other Possible Types: int
    let v3: i64;  // [sp-0x88]
    let v4: i8;  // [sp-0x80]
    let v5: struct24;  // [sp-0x78]
    let v6: struct9;  // [sp-0x58]
    let v7: i64;  // [sp-0x48]
    let v8: iNone;  // [sp-0x38]
    let v9: i8;  // [sp-0x30]
    let v12: i64;  // rdx
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rdx
    let v16: i64;  // rdx
    let v17: i64;  // rdx
    let v18: i64;  // rax
    let v19: i64;  // rax

    if !uu_rm::prompt_dir(a0, a1, *((a2 + 6) as &i8)) as i8 {
        return 0;
    }
    v6 = std::fs::read_dir(a0, a1);
    if v9 == 2 {
        v2 = v12;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        show_error!("cannot remove {}: Directory not empty", &v1);
        v18 = v19 & -0x100 | 1;
        return v18;
    } else if !*((a2 + 4) as &i8) && !*((a2 + 3) as &i8) {
        v2 = v13;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        show_error!("cannot remove {}: Is a directory", &v1);
        return v18;
    } else {
        v0 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v8);
        if v0 {
            v2 = v15;
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            show_error!("cannot remove {}: Directory not empty", &v1);
            return v18;
        }
        v14 = std::fs::remove_dir(a0, a1);
        if v14 {
            v7 = v14;
            if std::io::error::Error::kind(v14) as i8 == 1 {
                v2 = v16;
                v1 = 1;
                v2 = a0;
                v3 = a1;
                v4 = 1;
                show_error!("cannot remove {}: Permission denied", &v1);
            } else {
                v2 = v17;
                v1 = 1;
                v2 = a0;
                v3 = a1;
                v4 = 1;
                show_error!("cannot remove {}: {}", &v1, &v7);
            }
            return v18;
        } else if *((a2 + 5) as &i8) {
            v5 = uu_rm::normalize(a0, a1);
            v1 = 1;
            *(&v2 as &i128) = *((&v5.field_0 as &char + 8) as &i128);
            v4 = 1;
            println!("removed directory {}", &v1);
        }
    }
}
