fn uu_truncate::truncate_reference_file_only(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v1: struct16;  // [bp-0xd8]
    let v2: u32;  // [bp-0xd0]
    let v4: i64;  // rax
    let v5: u64;  // rax

    v0 = std::fs::metadata(a0, a1);
    match v0 {
        Err(_) => {
            return uu_truncate::truncate_reference_file_only::{{closure}}(a0, a1, v2);
        },
        Ok(_) => {
            v1 = struct16 {
                field_0: a2
                field_8: a2 + a3 * 24
            };
            loop {
                v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
                if !v4 {
                    return 0;
                }
                v5 = uu_truncate::file_truncate(*((v4 + 8) as &i64), *((v4 + 16) as &i64), a4, *((&v0 as &char + 80) as &i64));
                if v5 {
                    return v5;
                }
            }
        },
    }
}
