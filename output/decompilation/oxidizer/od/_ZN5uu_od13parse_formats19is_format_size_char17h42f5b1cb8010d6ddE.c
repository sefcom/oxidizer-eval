fn uu_od::parse_formats::is_format_size_char(a0: u32, a1: u32, a2: &struct1) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax

    if !a1 {
        return 0;
    }
    v1 = a1 & 4294967295;
    if v1 != 1 {
        if a0 == 68 {
            goto LABEL_4cb47b;
        }
        v2 = v1 & -0x100 | 4;
        if a0 != 70 {
            return 0;
        }
    } else {
        v1 = 0;
        match (a0) {
            67 => {
                v2 = 1;
                break;
            }
            73 => {
                v2 = 4;
                break;
            }
            76 => {
LABEL_4cb47b:
                v2 = v1 & -0x100 | 8;
                break;
            }
            83 => {
                v2 = 2;
                break;
            }
            _ => {
LABEL_4cb489:
                return v1;
            }
        }
    }
    *(a2) = 4;
    v1 = v2 & -0x100 | 1;
    goto LABEL_4cb489;
}
