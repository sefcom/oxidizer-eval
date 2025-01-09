fn uu_cp::copydir::path_has_prefix(a0: &Result<struct1, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i200;  // [sp-0x78], Other Possible Types: Result<struct24, struct8>
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v8: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rcx
    let v12: i64;  // rax
    let v13: i64;  // rax

    v0 = uucore::features::fs::canonicalize(a1, a2, 0, 2);
    v8 = v0;
    match v0 {
        Err(_) => {
            *((a0 + 8) as &i64) = v2;
            *(a0 as &i8) = 1;
            v10 = v8;
            return v10;
        },
        Ok(_) => {
            v1 = v8;
            v2 = *((&v0 as &char + 8) as &i64);
            v3 = *((&v0 as &char + 16) as &i64);
            v0 = uucore::features::fs::canonicalize(a3, a4, 0, 2);
            v11 = v0;
            v12 = *((&v0 as &char + 8) as &i64);
            match v0 {
                Err(_) => {
                    *((a0 + 8) as &i64) = v5;
                    *(a0 as &i8) = 1;
                },
                Ok(_) => {
                    v4 = v11;
                    v5 = v12;
                    v6 = *((&v0 as &char + 16) as &i64);
                    *((a0 + 1) as &i8) = std::path::Path::starts_with(v2, v3, &v4) as i8;
                    *(a0 as &i8) = 0;
                },
            }
            v10 = v13;
            return v10;
        },
    }
}
