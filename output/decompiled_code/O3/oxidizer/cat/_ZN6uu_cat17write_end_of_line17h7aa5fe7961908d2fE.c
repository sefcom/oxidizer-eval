fn uu_cat::write_end_of_line(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, a3);
    if !v3 && (!(a4) || !((v3 = <std::io::stdio::StdoutLock as std::io::Write>::flush(a1), v3))) {
        return struct8 {
            field_0: 9223372036854775814
        };
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v3
    };
}
