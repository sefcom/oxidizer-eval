fn fd::exec::CommandBuilder::new_command(a1: i64, a2: i64) -> Result<struct232, struct16> {
    let a0: void*;  // rdi
    let v0: struct224;  // [bp-0x108], Other Possible Types: struct8
    let v2: u64;  // rdx

    v0 = argmax::Command::new(a1);
    v0 = std::process::Command::stdin(a1, a2);
    v0 = std::process::Command::stdout(a1, a2);
    v0 = std::process::Command::stderr(a1, a2);
    if !(argmax::Command::try_args(&v0, a1 + 24, a2 - 1) & 1) {
        memcpy(a0, &v0, 232);
        return;
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v2
    };
}
