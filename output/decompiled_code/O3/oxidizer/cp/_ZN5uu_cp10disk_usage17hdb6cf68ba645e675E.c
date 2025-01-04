fn uu_cp::disk_usage(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: i64;  // [sp-0xe8]
    let v1: i64;  // [sp-0xe0]
    let v2: Result<struct176, struct16>;  // [sp-0xd8], Other Possible Types: i1408
    let v4: struct8;  // rax
    let v5: i64;  // rbx
    let v6: i64;  // rbx
    let v7: i64;  // rdx
    let v8: struct8;  // r12
    let v9: i64;  // rdx
    let v10: i64;  // rdx

    v0 = a0;
    v1 = a0 + a1 * 24;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !a2 {
        v6 = 0;
        loop {
            v2 = std::fs::metadata(v4, v10);
            if v2 == 2 {
                break;
            }
            v6 += ((*((&v2 as &char + 56) as &i32) & 0xf000) == 0x4000 ? 0 : *((&v2 as &char + 80) as &i64));
            v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        }
    }
    v5 = 0;
    loop {
        v8 = v4;
        v2 = std::fs::metadata(v8, v7);
        if v2 == 2 {
            break;
        }
        if (*((&v2 as &char + 56) as &i32) & 0xf000) != 0x4000 {
            v5 += *((&v2 as &char + 80) as &i64);
        } else if !uu_cp::disk_usage_directory(*((v8 + 8) as &i64), *((v8 + 16) as &i64)) {
            v5 += v9;
        }
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    }
}
