fn uu_cp::disk_usage(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: struct16;  // [bp-0xe8]
    let v1: Result<struct176, struct8>;  // [sp-0xd8]
    let v3: i64;  // rax
    let v4: i64;  // rbx
    let v5: i64;  // rbx
    let v6: i64;  // rdx

    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !a2 {
        v5 = 0;
        loop {
            v1 = std::fs::metadata(v3);
            if v1 as i32 == 2 {
                break;
            }
            v5 += ((*((&v1 as &char + 56) as &i32) & 0xf000) == 0x4000 ? 0 : *((&v1 as &char + 80) as &i64));
            v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        }
    }
    v4 = 0;
    loop {
        v1 = std::fs::metadata(v3);
        if v1 as i32 == 2 {
            break;
        }
        if (*((&v1 as &char + 56) as &i32) & 0xf000) != 0x4000 {
            v4 += *((&v1 as &char + 80) as &i64);
        } else if !uu_cp::disk_usage_directory(*((v3 + 8) as &i64), *((v3 + 16) as &i64)) {
            v4 += v6;
        }
        v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    }
}
