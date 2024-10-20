fn uu_dd::parseargs::Parser::parse_output_flags(a0: &u64, a1: u32, a2: &u8, a3: &u8) -> u64 {
    let v35: &u64;  // rax
    let v40: u64;  // r14

    memcpy(v40, a2, a3);
    v35 = a0;
    *(v35) = 11;
    v35[1] = a3;
    v35[2] = v40;
    v35[3] = a3;
    return v35;
}
