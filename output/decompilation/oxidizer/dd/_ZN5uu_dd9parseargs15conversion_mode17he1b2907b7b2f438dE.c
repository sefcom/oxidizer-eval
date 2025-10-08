fn uu_dd::parseargs::conversion_mode(a1: i64, a2: i64, a3: i64, a4: i8, a5: i8) -> : struct18 {
    let a0: i64;  // rdi

    if a1 {
        if a2 == 2 {
            return struct16 {
                field_0: 0
                padding_1: <UNKNOWN>
                field_8: a1
            };
        } else if (a2 & 1) {
            if a4 {
                return struct24 {
                    field_0: 6
                    padding_1: <UNKNOWN>
                    field_8: a3
                    field_16: a1
                };
            }
            return struct24 {
                field_0: 5
                padding_1: <UNKNOWN>
                field_8: a3
                field_16: a1
            };
        } else {
            if a4 {
                return struct24 {
                    field_0: 4
                    field_1: a5
                    padding_2: <UNKNOWN>
                    field_8: a3
                    field_16: a1
                };
            }
            return struct24 {
                field_0: 3
                field_1: a5
                padding_2: <UNKNOWN>
                field_8: a3
                field_16: a1
            };
        }
    } else {
        if a2 == 2 {
            return struct1 {
                field_0: 7
            };
        } else if (a2 & 1) {
            return struct16 {
                field_0: 2
                padding_1: <UNKNOWN>
                field_8: a3
            };
        } else {
            return struct16 {
                field_0: 1
                field_1: a5
                padding_2: <UNKNOWN>
                field_8: a3
            };
        }
    }
}
