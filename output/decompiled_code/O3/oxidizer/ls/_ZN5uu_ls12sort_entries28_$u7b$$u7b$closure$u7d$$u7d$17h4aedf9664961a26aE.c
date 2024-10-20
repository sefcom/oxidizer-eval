fn uu_ls::sort_entries::{{closure}}(a0: i64) -> u64 {
    let v0: Enum;  // [sp-0xd0], Other Possible Types: i1408
    let v2: i64;  // rax
    let v3: i64;  // rcx
    let v4: i64;  // rdx
    let v5: i64;  // rax
    let v6: i64;  // rax

    if !(*((a0 + 296) as &i8)) || !(*((a0 + 72) as &i32) < 2) {
        v0 = std::sys::pal::unix::fs::stat(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
        if v0 != 2 {
            v2 = 0xf000 & *((&v0 as &char + 56) as &i32);
            goto LABEL_4f2cb4;
        } else {
            v3 = *((&v0 as &char + 8) as &i64);
            v4 = v3 & 3;
            v5 = 0;
            if v4 - 2 >= 2 && v4 {
                if *(*((v3 + 7) as &i64) as &i64) {
                    v6();
                }
                v5 = 0;
            }
        }
    } else {
        v2 = 0xf000 & *((a0 + 128) as &i32);
LABEL_4f2cb4:
        v5 = v2 | -0x100 | v2 == 0x4000;
    }
    return v5 | -0x100 | v5 ^ 1;
}
