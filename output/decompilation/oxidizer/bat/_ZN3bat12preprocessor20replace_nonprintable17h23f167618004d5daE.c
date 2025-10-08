fn bat::preprocessor::replace_nonprintable(a0: i64, a1: u64, a2: u64, a3: u64, a4: u32) -> long long {
    let v0: struct32;  // [bp-0xc4]
    let v3: struct8;  // [bp-0xc0]
    let v20: i64;  // [bp-0x58]
    let v21: u64;  // [bp-0x50]
    let v22: u64;  // [bp-0x48]
    let v23: u64;  // [bp-0x40]
    let v25: struct32;  // rax
    let v26: Option<struct24>;  // r15
    let v27: struct24;  // r13

    v0 = struct32 {
        field_0: a4
        field_4: <UNKNOWN>
        field_12: <UNKNOWN>
        field_20: <UNKNOWN>
    };
    v23 = a3;
    if !a2 {
        *((v20 + 16) as &i64) = 0;
        *(v20 as &struct8) = v3;
        *((v20 + 8) as &i64) = 1;
        return 1;
    }
    v25 = v0.field_0;
    v22 = ((v25 & 255) ? &g_480d0c : &g_5a2c49);
    v21 = v25 + v22 + 3;
    v26 = 0;
    v27 = 0;
}
