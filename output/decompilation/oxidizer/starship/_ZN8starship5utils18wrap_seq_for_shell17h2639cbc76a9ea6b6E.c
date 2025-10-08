fn starship::utils::wrap_seq_for_shell(a0: &struct24, a1: i64, a2: i8) {
    let v0: u8;  // [bp-0x89]
    let v1: core::fmt::Arguments;  // [bp-0x88]
    let v2: core::fmt::rt::Argument;  // [bp-0x84]
    let v3: core::str::pattern::CharSearcher;  // [bp-0x80]
    let v4: struct66;  // [bp-0x78]
    let v5: struct48;  // [bp-0x70]
    let v6: Option<struct48>;  // [bp-0x68]
    let v7: struct56;  // [bp-0x60]
    let v8: struct24;  // [bp-0x28]
    let v10: u32;  // eax
    let v11: &str;  // rax
    let v12: &str;  // rcx

    v1 = 27;
    v2 = 109;
    if a2 {
        v10 = a2;
        if v10 != 5 && v10 != 7 {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        }
    }
    v3 = v12;
    v4 = 2;
    v5 = v11;
    v6 = 2;
    v0 = 0;
    v7 = struct56 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64) + *((a1 + 8) as &i64)
        field_16: &v1
        field_24: &v0
        field_32: &v3
        field_40: &v2
        field_48: &v5
    };
    v8 = core::iter::traits::iterator::Iterator::collect(&v7);
    return struct24 {
        field_0: v8.field_0
        field_16: v8.field_16
    };
}
