fn uu_truncate::truncate_reference_file_only(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0xd8], Other Possible Types: struct16
    let v1: u64;  // [sp-0xd0]
    let v2: i8;  // [bp-0x88]
    let v4: void*;  // rax
    let v6: struct8;  // rax

    v0 = std::fs::metadata(a0, a1);
    if v0 as i32 == 2 {
        v4 = uu_truncate::truncate_reference_file_only::{{closure}}(a0, a1, v1);
        return v4;
    }
    v0 = a2;
    v1 = a2 + a3 * 24;
    loop {
        v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v6 {
            return 0;
        }
        v4 = uu_truncate::file_truncate(*((v6 + 8) as &i64), *((v6 + 16) as &i64), a4, v2);
        if v4 {
            return v4;
        }
    }
}
