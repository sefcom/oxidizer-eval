fn bat::output::OutputHandle::write_fmt(a0: i64, a1: i64, a2: u64) -> long long {
    let v1: u64;  // rax

    if *(a1 as &i32) != 1 {
        v1 = *((*((a1 + 16) as &i64) + 72) as &i64)(*((a1 + 8) as &i64), a2) as i64;
        if v1 {
            return struct16 {
                field_0: 0
                padding_1: <UNKNOWN>
                field_8: v1
            };
        }
    } else if *((*((a1 + 16) as &i64) + 40) as &i64)(*((a1 + 8) as &i64), a2) as i8 {
        return struct1 {
            field_0: 1
        };
    }
    return struct1 {
        field_0: 13
    };
}
