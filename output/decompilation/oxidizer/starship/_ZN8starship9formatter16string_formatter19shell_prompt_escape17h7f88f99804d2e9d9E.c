fn starship::formatter::string_formatter::shell_prompt_escape(a0: u64, a1: u32, a2: u8) -> int {
    let v0: struct24;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: u64;  // [bp-0x48]
    let v3: struct24;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v5: u32;  // [bp-0x30]
    let v6: struct24;  // [bp-0x28]
    let v7: u64;  // [bp-0x20]

    match (a2) {
        0 => {
            v0 = <T as core::convert::Into<U>>::into(a1);
            v6 = alloc::str::<impl str>::replace(v1, v2, 92, "\\\\");
            v3 = alloc::str::<impl str>::replace(v7, v6.field_16, 36, "\\$");
            alloc::str::<impl str>::replace(a0, v4, v5, 96, "\\`");
        }
        5 => {
            v0 = <T as core::convert::Into<U>>::into(a1);
            alloc::str::<impl str>::replace(a0, v1, v2, 37, "%%");
        }
        _ => {
            <T as core::convert::Into<U>>::into(a0, a1);
            return;
        }
    }
    return;
}
