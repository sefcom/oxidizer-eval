fn uu_realpath::process_relative(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x48]
    let v1: i64;  // [sp-0x38]
    let v3: i64;  // 4096
    let v4: i64;  // 4096
    let v5: i64;  // rax

    if !a2 {
        if a4 {
            v1 = *((a1 + 16) as &i64);
            v0 = *(a1 as &i128);
        } else {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        }
    } else {
        if std::path::Path::starts_with(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a2, a3) as i8 {
            v1 = *((a1 + 16) as &i64);
            v0 = *(a1 as &i128);
        } else {
            v5 = *((a1 + 16) as &i64);
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: v5
            };
        }
    }
    v5 = uucore::features::fs::make_path_relative_to(a0, &v0, v3, v4, a4, a5);
    return v5;
}
