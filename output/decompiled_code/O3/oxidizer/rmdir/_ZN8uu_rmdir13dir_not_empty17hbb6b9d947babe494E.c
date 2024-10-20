fn uu_rmdir::dir_not_empty(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x178]
    let v1: struct9;  // [bp-0x58]
    let v2: i64;  // [sp-0x48]
    let v3: i8;  // [sp-0x40]
    let v4: i72;  // [sp-0x38], Other Possible Types: struct9, Enum
    let v6: i64;  // rax
    let v7: i64;  // rcx
    let v9: i64;  // rax
    let v10: i8;  // cl

    v6 = *(a0 as &i64);
    v7 = v6 & 3;
    if v7 < 2 {
        return 0;
    }
    if v7 != 2 {
        return 0;
    }
    v9 = v6 >> 32;
    if v9 > 39 {
LABEL_47eb5f:
        return 0;
    }
    v0 = 1073815554;
    if !(*((&v0 as &u8 + ((v9 & 63) >> 3)) as &i8) >> (v9 & 63 & 7) & 1) {
        v0 = 0x8000020000;
        if (*((&v0 as &u8 + ((v9 & 63) >> 3)) as &i8) >> (v9 & 63 & 7) & 1) {
            return -255;
        }
        goto LABEL_47eb5f;
    }
    v4 = std::sys::pal::unix::fs::readdir(a1, a2);
    v10 = *((&v4 as &char + 8) as &i8);
    v2 = v4;
    v3 = (v10 != 2 ? (-0x100 | v10) & 4294967295 & 4294967295 : 2);
    if v10 == 2 {
        goto LABEL_47eb5f;
    }
    v1 = struct9 {
        field_0: v12
        field_8: v13
    };
    v4 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v1, v3);
    if !v4 {
        goto LABEL_0x47ebc8;
    } else {
        goto LABEL_0x47eb93;
    }
}
