fn uu_cp::disk_usage_directory(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x148]
    let v1: i8;  // [sp-0x140]
    let v2: struct40;  // [sp-0x138], Other Possible Types: i64
    let v3: Option<struct40>;  // [sp-0x110], Other Possible Types: i384
    let v4: i96;  // [sp-0xe0], Other Possible Types: Result<struct176, struct8>, struct9, struct24
    let v8: i64;  // rbx
    let v9: i256;  // ymm0

    v4 = std::fs::read_dir(a0, a1);
    if v1 == 2 {
        return 1;
    }
    v0 = v4;
    v1 = *((&v4 as &char + 8) as &i8);
    v8 = 0;
    loop {
        v3 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v3 {
            return 0;
        }
        if !v2 {
            break;
        }
        v9 = v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v3 as &char + 24) as &i128);
        v2 = struct40 {
            field_0: v10
            field_8: v11
            field_16: v12
            field_32: *((&v3 as &char + 40) as &i64)
        };
        v4 = std::fs::DirEntry::file_type(&v2);
        match v4 {
            Err(_) => {
LABEL_508bab:
                break;
            },
            Ok(_) => {
                if (*((&v4 as &char + 4) as &i32) as i16 & 0xf000) == 0x4000 {
                    v4 = std::fs::DirEntry::path(&v2);
                    if uu_cp::disk_usage_directory(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64)) {
                        break;
                    }
                } else {
                    v4 = std::fs::DirEntry::metadata(&v2);
                    if v4 == 2 {
                        goto LABEL_508bab;
                    }
                }
                v8 += vvar_64{reg 56};
            },
        }
    }
}
