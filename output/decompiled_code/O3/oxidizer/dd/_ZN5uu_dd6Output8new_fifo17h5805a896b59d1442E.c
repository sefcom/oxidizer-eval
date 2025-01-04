fn uu_dd::Output::new_fifo(a0: &struct17, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u8;  // [bp-0x48]
    let v1: u64;  // [bp-0x44]
    let v2: u8;  // [sp-0x3e]
    let v3: u8;  // [sp-0x3c]
    let v4: u8;  // [sp-0x3b]
    let v5: u64;  // [sp-0x38], Other Possible Types: Result<struct4, struct8>
    let v11: u32;  // eax
    let v13: u32;  // eax

    if a3->field_88 {
        v5 = std::fs::File::open(a1, a2);
        match v5 {
            Err(_) => {
                return struct17 {
                    field_0: 4
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
            },
            Ok(v1) => {
                v0 = 2 as u8;
                if uu_dd::Dest::seek(&v0) {
                    return struct17 {
                        field_0: 4
                        field_8: <UNKNOWN>
                        field_16: <UNKNOWN>
                    };
                }
            },
        }
    }
    if a3->field_0 && a3->field_0 != 1 || a3->field_8 {
        v1 = 1099511628214;
        v3 = a3->field_92 ^ 1;
        v4 = a3->field_91;
        v2 = a3->field_96;
        v0 = v11;
        v5 = std::fs::OpenOptions::open(&v0, a1, a2);
        match v5 {
            Err(_) => {
                return struct17 {
                    field_0: 4
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
            },
            Ok(v13) => {
                a0->field_0 = 2 as u8;
                a0->field_4 = v13;
            },
        }
    } else {
        a0->field_0 = 3;
    }
    a0->field_10 = a3;
    return struct17 {
        field_0: 4
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
}
