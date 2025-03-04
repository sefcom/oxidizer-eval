fn uu_dd::parseargs::conversion_mode(a0: &struct18, a1: u32, a2: u32, a3: u32, a4: u8, a5: u8) -> u64 {
    if a1 {
        if !a2 {
            if a4 {
                return struct1 {
                    field_0: 4
                };
            }
            return struct2 {
                field_0: 3
                field_1: a5
            };
        } else {
            if a2 != 1 {
                return struct9 {
                    field_0: 0
                    field_8: <UNKNOWN>
                };
            } else if !a4 {
                return struct17 {
                    field_0: 5
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
            } else {
                return struct1 {
                    field_0: 6
                };
            }
        }
    } else {
        if !a2 {
            return struct10 {
                field_0: 1
                field_1: a5
                field_8: <UNKNOWN>
            };
        } else if a2 == 1 {
            return struct9 {
                field_0: 2
                field_8: <UNKNOWN>
            };
        } else {
            return struct1 {
                field_0: 7
            };
        }
    }
}
