fn fd::exec::CommandSet::execute(a0: u64, a1: u64, a2: u64, a3: u64, a4: i384, a5: u64, a6: u64, a7: u8) -> char {
    let v0: struct48;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: struct40;  // [bp-0x28]

    v0 = a4;
    v1 = a5;
    v2 = struct40 {
        field_0: a0
        field_8: a0 + a1 * 24
        field_16: a2
        field_24: a3
        field_32: &v0
    };
    return fd::exec::command::execute_commands(&v2, a6, a7);
}
