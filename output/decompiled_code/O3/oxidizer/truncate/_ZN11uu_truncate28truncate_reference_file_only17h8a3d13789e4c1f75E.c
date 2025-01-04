fn uu_truncate::truncate_reference_file_only(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i1408;  // [sp-0xd8], Other Possible Types: Result<struct176, struct16>
    let v1: i64;  // [sp-0xd0]
    let v3: i64;  // rax
    let v5: struct8;  // rax

    v0 = std::fs::metadata(a0, a1);
    match v0 {
        Err(_) => {
            v3 = uu_truncate::truncate_reference_file_only::{{closure}}(a0, a1, v1);
            return v3;
        },
        Ok(_) => {
            v0 = a2;
            v1 = a2 + a3 * 24;
            loop {
                v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                if !v5 {
                    return 0;
                }
                v3 = uu_truncate::file_truncate(*((v5 + 8) as &i64), *((v5 + 16) as &i64), a4 as u32 as u64, *((&v0 as &char + 80) as &i64));
                if v3 {
                    return v3;
                }
            }
        },
    }
}
