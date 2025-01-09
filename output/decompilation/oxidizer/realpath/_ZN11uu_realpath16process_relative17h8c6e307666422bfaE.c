fn uu_realpath::process_relative(a0: &struct24, a1: &struct24, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u128;  // [sp-0x48]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // 4096

    if !a2 {
        if !a4 {
            return struct24 {
                field_0: *(&a1 as &i128)
                field_16: v4
            };
        }
        v1 = a1[2];
        v0 = *(&a1 as &i128);
    } else {
        if !std::path::Path::starts_with(a1[1], a1[2], a2, a3) as i8 {
            return struct24 {
                field_0: *(&a1 as &i128)
                field_16: v4
            };
        }
        v1 = a1[2];
        v0 = *(&a1 as &i128);
    }
    uucore::features::fs::make_path_relative_to(a0, &v0, v3, a5);
}
