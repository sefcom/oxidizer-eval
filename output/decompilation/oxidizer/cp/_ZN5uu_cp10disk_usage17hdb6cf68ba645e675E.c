fn uu_cp::disk_usage(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: struct16;  // [bp-0xe8]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v3: core::fmt::Arguments;  // rax
    let v4: u64;  // rdx

    v0 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v3 {
        if a2 {
            loop {
                v1 = std::fs::metadata(v3, v4);
                if v1 as i32 == 2 || (*((&v1 as &char + 56) as &i32) & 0xf000) == 0x4000 && uu_cp::disk_usage_directory(*((v3 + 8) as &i64), *((v3 + 16) as &i64)) {
                    break;
                }
                v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
                if (!v3)
                    break;
            }
        } else {
            loop {
                v1 = std::fs::metadata(v3, a2);
                if let Err(_) = v1 {
                    break;
                }
                v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
                if (!v3)
                    break;
            }
            return 1;
        }
    }
    return 0;
}
