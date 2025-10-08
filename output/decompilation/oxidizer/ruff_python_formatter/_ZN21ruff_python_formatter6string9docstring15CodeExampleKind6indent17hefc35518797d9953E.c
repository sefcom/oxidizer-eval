fn ruff_python_formatter::string::docstring::CodeExampleKind::indent(a0: u64, a1: void*) -> int {
    let v1: u64;  // rcx
    let v2: &mut [u8];  // eax

    v1 = 0x8000000000000000 ^ *(a1 as &i64);
    if !v1 {
        ruff_python_formatter::string::docstring::Indentation::from_str(a0, a1[32] as i64, a1[40] as i64);
        return;
    } else if v1 == 1 {
        v2 = a1[48] as i32;
        if v2 != 5 {
            return struct32 {
                field_0: v2
                field_4: <UNKNOWN>
                field_20: <UNKNOWN>
            };
        }
        return struct24 {
            field_0: a1[24] as i128
            field_16: a1[40] as i64
        };
    } else {
        return struct24 {
            field_0: a1[32] as i128
            field_16: a1[48] as i64
        };
    }
}
