fn uu_tail::follow::watch::Observer::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> double {
    let v0: struct24;  // [bp-0x38]
    let v1: struct24;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: u64;  // [bp-0x20]
    let v4: u64;  // [bp-0x18]
    let v5: u64;  // [bp-0x10]
    let v7: u64;  // r15
    let v8: u64;  // r14
    let v9: u64;  // r13
    let v10: u64;  // r12
    let v11: struct24;  // rbx
    let v12: struct24;  // rax
    let v13: struct24;  // xmm1
    let v14: u128;  // xmm2
    let v15: iNone;  // xmm3
    let v16: struct24;  // xmm0

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = v12;
    v13 = *((a4 + 16) as &i128);
    v14 = *((a4 + 32) as &i128);
    v15 = *((a4 + 48) as &i128);
    v16 = *((a4 + 64) as &i128);
    return struct144 {
        field_0: 3
        padding_8: <UNKNOWN>
        field_32: <UNKNOWN>
        padding_24: <UNKNOWN>
        field_40: 0
        padding_40: 8
        field_48: 0
        field_56: *(a4 as &i128)
        field_72: v13
        field_88: v14
        field_104: v15
        field_120: v16
        field_136: a5
        field_140: a1
        field_141: a3
        field_142: a2
    };
}
