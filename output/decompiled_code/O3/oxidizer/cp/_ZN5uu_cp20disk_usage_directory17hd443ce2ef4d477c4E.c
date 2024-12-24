fn uu_cp::disk_usage_directory(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x148]
    let v1: i8;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: i64;  // [sp-0x130]
    let v4: i128;  // [sp-0x128]
    let v5: i64;  // [sp-0x118]
    let v6: i320;  // [sp-0x110], Other Possible Types: Option<struct40>
    let v7: i8;  // [bp-0xe8]
    let v8: i192;  // [sp-0xe0], Other Possible Types: Result<struct4, struct8>, struct24, struct9
    let v12: i64;  // rbx
    let v13: i64;  // rdx
    let v14: i256;  // ymm0
    let v17: i128;  // xmm0
    let v19: i64;  // rbp

    v8 = std::fs::read_dir(a0, a1);
    if v1 == 2 {
        return 1;
    }
    v0 = v8;
    v1 = *((&v8 as &char + 8) as &i8);
    v12 = 0;
    loop {
        v6 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v0, v13);
        if !v6 {
            return 0;
        }
        if !v2 {
            break;
        }
        v5 = v7;
        v17 = *((&v6 as &char + 24) as &i128);
        v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
        v4 = v17;
        v2 = *((&v6 as &char + 8) as &i64);
        v3 = *((&v6 as &char + 16) as &i64);
        v8 = std::fs::DirEntry::file_type(&v2);
        match v8 {
            Err(_) => {
LABEL_50824b:
                goto LABEL_508270;
            },
            Ok(_) => {
                if (*((&v8 as &char + 4) as &i32) as i16 & 0xf000) == 0x4000 {
                    v8 = std::fs::DirEntry::path(&v2);
                    if uu_cp::disk_usage_directory(*((&v8 as &char + 8) as &i64), *((&v8 as &char + 16) as &i64)) {
LABEL_508270:
                        break;
                    }
                } else {
                    v8 = std::fs::DirEntry::metadata(&v2);
                    if v8 == 2 {
                        goto LABEL_50824b;
                    }
                }
                v12 += v19;
            },
        }
    }
}
