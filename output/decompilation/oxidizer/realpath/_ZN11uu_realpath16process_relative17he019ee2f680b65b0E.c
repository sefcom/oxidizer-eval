fn uu_realpath::process_relative(a1: &struct24, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // r12

    v0 = v2;
    v3 = a4;
    if a2 {
        v0 = a2;
        if !std::path::Path::starts_with(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a2, a3) {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        }
        if !a4 {
            a4 = v0;
            if !v3 {
                goto LABEL_462eb3;
            }
        } else {
            if !v3 {
LABEL_462eb3:
            }
        }
    } else if !a4 {
        return struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
    }
    uucore::features::fs::make_path_relative_to(a0, a1, a4, a3);
    return;
}
