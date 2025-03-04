fn uu_tail::paths::Input::resolve(a0: &Option<struct24>, a1: &u64) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x90], Other Possible Types: struct24
    let v1: Result<struct24, struct8>;  // [sp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: struct24;  // [sp-0x58]
    let v4: struct24;  // [sp-0x40]
    let v6: i64;  // r14
    let v7: i64;  // r15

    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
        v6 = *((a1 + 32) as &i64);
        v7 = *((a1 + 40) as &i64);
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v6, v7, v0.field_8, v0.field_16) as i32 {
            v0 = std::fs::canonicalize(v6, v7);
            if v0 as i64 != 0x8000000000000000 {
                return v0;
            }
        }
    }
    v4 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
    vvar_206{stack -120} = std::fs::canonicalize(v4.field_8, v4.field_16)?;
    v1 = v0;
    if v1 as i64 != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned("/dev/fd/0");
        v3 = v0;
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(*((&v1 as &char + 8) as &i64), v2, v3.field_8, v0.field_16) as i8 {
            return v1;
        }
        *(a0 as &i64) = 0x8000000000000000;
    }
}
