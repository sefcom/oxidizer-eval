fn uu_realpath::process_relative(a1: &struct24, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x48]
    let v1: struct24;  // r15
    let v2: i64;  // rsi
    let v3: i64;  // rdi
    let v4: u64;  // rdi

    v1 = a3;
    if a1 {
        if std::path::Path::starts_with(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a1, a2) {
            v0 = struct24 {
                field_0: *(a0 as &i128)
                field_16: *((a0 + 16) as &i64)
            };
            if !a3 {
                a3 = a1;
                if !v1 {
                    goto LABEL_4b6a36;
                }
            } else if !v1 {
LABEL_4b6a36:
            }
        } else {
            *((v3 + 16) as &i64) = *((a0 + 16) as &i64);
            *(v3 as &i128) = *(a0 as &i128);
            return;
        }
    } else {
        if !a3 {
            *((v3 + 16) as &i64) = *((a0 + 16) as &i64);
            *(v3 as &i128) = *(a0 as &i128);
            return;
        }
    }
    uucore::features::fs::make_path_relative_to(v4, v2, a3, a2);
    return;
}
