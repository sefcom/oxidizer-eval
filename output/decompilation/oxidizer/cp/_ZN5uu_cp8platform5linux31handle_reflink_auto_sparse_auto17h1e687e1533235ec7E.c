fn uu_cp::platform::linux::handle_reflink_auto_sparse_auto(a1: i64, a2: i64, a3: i64, a4: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x50]
    let v1: u8;  // [bp-0x48]
    let v3: core::fmt::rt::Argument;  // [bp-0x38]
    let v5: u64;  // rax
    let v7: u8;  // al
    let v8: u64;  // rax
    let v9: u8;  // al
    let v10: u8;  // r12b
    let v11: core::result::Result<std::fs::File, std::io::error::Error>;  // r13b
    let v12: u8;  // bpl
    let v13: void*;  // rax

    uu_cp::platform::linux::check_for_data(a1, a2, a3);
    if v1 != 2 {
        v3 = *(&v0 as &i64);
        uu_cp::platform::linux::check_sparse_detection(a1, a2, a3);
        if !v0 {
            *((a0 + 1) as &u8) = v10;
            *((a0 + 2) as &i8) = 4;
            *((a0 + 3) as &u8) = v12;
            *((a0 + 4) as &core::result::Result<std::fs::File, std::io::error::Error>) = v11;
            v13 = 0;
        }
    }
    v7 = 1;
    v8 = v5 & -0x100 | 1;
    return struct16 {
        field_0: v9
        padding_1: <UNKNOWN>
        field_8: v5
    };
}
