fn uu_od::parse_formats::is_format_size_char(a0: i32, a1: i8, a2: i64) -> long long {
    let v1: u64;  // rax
    let v2: Result<struct16, struct8>;  // al
    let v3: u64;  // rax

    if !a1 {
        return 0;
    }
    v1 = a1;
    if v1 == 1 {
        v1 = 0;
        match (a0) {
            67 => {
                break;
            }
            _ => {
LABEL_4cb489:
                return v1;
            }
        }
    } else if a0 != 68 {
        v2 = 4;
        v3 = 4;
        if a0 != 70 {
            return 0;
        }
    }
    *(a2 as &Result<struct16, struct8>) = v2;
    v1 = v3 & -0x100 | 1;
    goto LABEL_4cb489;
}
