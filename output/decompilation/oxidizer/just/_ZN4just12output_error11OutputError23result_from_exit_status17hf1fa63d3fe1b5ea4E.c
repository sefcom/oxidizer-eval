fn just::output_error::OutputError::result_from_exit_status(a0: i64, a1: u32) -> long long {
    let v1: u64;  // rax
    let v2: &mut [u8];  // cl
    let v3: core::option::Option<&str>;  // esi

    v1 = a1 & 127;
    if (a1 & 127) {
        v2 = 5;
        if v1 + 1 < 2 {
            *((a0 + 8) as &i8) = 6;
            return v1;
        }
    } else {
        v3 = a1 >> 8;
        v2 = 2;
        v1 = (v3 & 255) as u64;
        if !v3 as u8 {
            *((a0 + 8) as &i8) = 7;
            return (v3 & 255) as u64;
        }
    }
    return struct8 {
        field_0: v1 as u32
        field_8: <UNKNOWN>
    };
}
