fn uu_tail::follow::watch::Observer::new(a0: &struct119, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v2: u64;  // [sp-0x28]
    let v3: u64;  // [sp-0x20]
    let v4: u64;  // [sp-0x18]
    let v5: u64;  // [sp-0x10]
    let v7: u64;  // r15
    let v8: u64;  // r14
    let v9: u64;  // r13
    let v10: u64;  // r12
    let v11: u64;  // rbx
    let v12: u64;  // rax

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = v12;
    if uu_tail::platform::unix::supports_pid_checks(a5) {
        return struct119 {
            field_0: 3
            field_32: <UNKNOWN>
            field_40: <UNKNOWN>
            field_48: <UNKNOWN>
            field_56: 0
            field_72: 0
            field_88: <UNKNOWN>
            field_104: <UNKNOWN>
            field_120: <UNKNOWN>
            field_136: <UNKNOWN>
            field_140: <UNKNOWN>
            field_141: <UNKNOWN>
            field_142: <UNKNOWN>
        };
    }
    a5 = 0;
}
