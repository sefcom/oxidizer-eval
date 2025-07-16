fn uu_cat::write_end_of_line(a0: &struct16, a1: i64, a2: i64, a3: i64, a4: i8) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = v2;
    v3 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, a3);
    if let Ok(_) = v3 {
        if !a4 || !((v3 = <std::io::stdio::StdoutLock as std::io::Write>::flush(a1), v3)) {
            return struct8 {
                field_0: 9223372036854775814
            };
        }
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v3
    };
}
