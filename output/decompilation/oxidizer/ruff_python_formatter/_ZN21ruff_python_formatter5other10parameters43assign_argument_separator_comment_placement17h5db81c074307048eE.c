fn ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement(a0: i64, a1: i64, a2: i32, a3: i8) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: struct12;  // rax

    if a0 {
        if a2 > *((a0 + 8) as &i32) && a3 && a2 < *(a0 as &i32) {
            return 0;
        }
        if a2 > *((a0 + 4) as &i32) && !a3 {
            v2 = v1 & -0x100 | 1;
            if a2 < *((a0 + 12) as &i32) {
                return v1 & -0x100 | 1;
            }
        }
    }
    v3 = v2 & -0x100 | 4;
    if !a1 {
        return v3;
    }
    v4 = v3;
    if a2 > *((a1 + 8) as &i32) {
        v4 = v3;
        if a3 {
            v4 = v3 & -0x100 | 2;
            if a2 < *(a1 as &i32) {
                return v3 & -0x100 | 2;
            }
        }
    }
    if a2 > *((a1 + 4) as &i32) {
        return (a2 < *((a1 + 12) as &i32) ? a3 + 3 : 4);
    }
    return v4 & -0x100 | 4;
}
