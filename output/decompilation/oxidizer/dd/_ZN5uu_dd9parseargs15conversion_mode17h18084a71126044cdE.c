fn uu_dd::parseargs::conversion_mode(a1: i64, a2: i64, a3: i64, a4: i8, a5: i8) -> : struct18 {
    let a0: u64;  // rsi
    let v1: i64;  // rdi
    let v2: i64;  // rdi
    let v3: i64;  // rdi
    let v4: i64;  // rdi
    let v5: i64;  // rdi
    let v6: i64;  // rdi
    let v7: i64;  // rdi
    let v8: i64;  // rdi

    if a0 {
        if a1 {
            if a1 == 1 {
                if a3 {
                    *(v6 as &i8) = 6;
                } else {
                    *(v7 as &i8) = 5;
                }
            } else {
                *(v2 as &i8) = 0;
                *((v2 + 8) as &u64) = a0;
                return;
            }
        } else {
            if a3 {
                *(v3 as &i8) = 4;
            } else {
                *(v3 as &i8) = 3;
            }
            *((v8 + 1) as &u8) = a4;
        }
        *((v8 + 8) as &u64) = a2;
        *((v8 + 16) as &u64) = a0;
        return;
    } else if a1 {
        if a1 == 1 {
            *(v4 as &i8) = 2;
            *((v4 + 8) as &u64) = a2;
        } else {
            *(v5 as &i8) = 7;
        }
        return;
    } else {
        *(v1 as &i8) = 1;
        *((v1 + 1) as &u8) = a4;
        *((v1 + 8) as &u64) = a2;
        return;
    }
}
