fn uu_cp::disk_usage(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: Option<struct32>;  // [bp-0xe8]
    let v1: Option<struct32>;  // [bp-0xe0]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v4: alloc::string::String;  // rax
    let v5: u64;  // rdx

    v0 = a0;
    v1 = a0 + a1 * 24;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v4 {
        if a2 {
            loop {
                v2 = std::fs::metadata(v4, v5);
                if v2 as i32 == 2 || (*((&v2 as &char + 56) as &i32) & 0xf000) == 0x4000 && uu_cp::disk_usage_directory(*((v4 + 8) as &i64), *((v4 + 16) as &i64)) {
                    break;
                }
                v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
                if (!v4)
                    break;
            }
        } else {
            loop {
                v2 = std::fs::metadata(v4, a2);
                if let Err(_) = v2 {
                    break;
                }
                v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
                if (!v4)
                    break;
            }
            return 1;
        }
    }
    return 0;
}
