fn bat::terminal::as_terminal_escaped(a0: i192, a1: u32, a2: u8, a3: core::option::Option<u32>, a4: i64, a5: u8, a6: u8, a7: i8, a8: u64) -> int {
    let v0: &str;  // [bp-0x7c]
    let v1: struct24;  // [bp-0x78]
    let v2: struct24;  // [bp-0x70]
    let v3: Result<struct40, struct16>;  // [bp-0x68]
    let v4: Result<struct40, struct16>;  // [bp-0x60]
    let v5: &mut [u8];  // [bp-0x48]
    let v6: Result<struct40, struct32>;  // [bp-0x47]
    let v7: struct16;  // [bp-0x45]
    let v8: struct24;  // [bp-0x44]
    let v9: struct24;  // [bp-0x40]
    let v10: Option<struct24>;  // [bp-0x3f]
    let v11: struct24;  // [bp-0x3b]
    let v12: core::option::Option<&str>;  // r15d
    let v13: struct40;  // eax
    let v14: &mut [u8];  // bl
    let v15: u8;  // r13b

    if !a4 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a3, 0);
        return;
    }
    v12 = 21;
    v0 = a5;
    if a6 {
        v13 = bat::terminal::to_ansi_color(a1, v0 as u8);
        v14 = a2 & 1;
        v15 = a2 >> 1 & 1;
        if (a8 & 1) {
            goto LABEL_843f93;
        }
    } else {
        v13 = 21;
        if (a8 & 1) {
LABEL_843f93:
            v12 = bat::terminal::to_ansi_color(a8 >> 8 & 4294967295, v0 as u8);
        }
    }
    v5 = v14;
    v6 = 0;
    v7 = v15;
    v8 = 0;
    v9 = 0;
    v10 = v13;
    v11 = v12;
    v1 = 0x8000000000000000;
    v2 = a3;
    v3 = a4;
    v4 = 9223372036854775810;
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v1);
    return;
}
