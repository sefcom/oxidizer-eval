fn uu_cp::disk_usage(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: u64;  // [sp-0xe8]
    let v1: u64;  // [sp-0xe0]
    let v2: struct16;  // [sp-0xd8], Other Possible Types: u128
    let v3: u8;  // [bp-0xa0]
    let v4: u8;  // [bp-0x88]
    let v6: struct8;  // rax
    let v7: void*;  // rbx
    let v8: void*;  // rbx
    let v9: struct8;  // r12
    let v10: u64;  // rdx

    v0 = a0;
    v1 = a0 + a1 * 24;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !a2 {
        v8 = 0;
        loop {
            v2 = std::fs::metadata(v6);
            if v2 as i32 == 2 {
                break;
            }
            v8 += ((*(&v3 as &i32) & 0xf000) == 0x4000 ? 0 : *(&v4 as &i64));
            v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        }
    }
    v7 = 0;
    loop {
        v9 = v6;
        v2 = std::fs::metadata(v9);
        if v2 as i32 == 2 {
            break;
        }
        if (*(&v3 as &i32) & 0xf000) != 0x4000 {
            v7 += *(&v4 as &i64);
        } else if !uu_cp::disk_usage_directory(*((v9 + 8) as &i64), *((v9 + 16) as &i64)) {
            v7 += v10;
        }
        v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    }
}
