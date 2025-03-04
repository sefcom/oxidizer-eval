fn uu_realpath::process_relative(a0: &struct24, a1: &struct24, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u128;  // [sp-0x48]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rbx
    let v4: u64;  // rdi
    let v5: u64;  // rdx

    v3 = a5;
    if a2 {
        if !std::path::Path::starts_with(a1[1], a1[2], a2, a3) as i8 {
            return struct24 {
                field_0: *(&a1 as &i128)
                field_16: v6
            };
        }
        v1 = a1[2];
        v0 = *(&a1 as &i128);
        v5 = a2;
        if a4 {
            v5 = a4;
        }
        if !a4 {
            v3 = a3;
        }
        v4 = a0;
    } else if a4 {
        v1 = a1[2];
        v0 = *(&a1 as &i128);
        v4 = a0;
        v5 = a4;
    } else {
        return struct24 {
            field_0: *(&a1 as &i128)
            field_16: v6
        };
    }
    uucore::features::fs::make_path_relative_to(v4, &v0, v5, v3);
}
