fn uu_cp::platform::linux::handle_reflink_auto_sparse_always(a1: i32, a2: i32, a3: i64, a4: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: alloc::string::String;  // [bp-0x58]
    let v1: struct17;  // [bp-0x50]
    let v2: Result<struct1, struct8>;  // [bp-0x50]
    let v3: alloc::string::String;  // [bp-0x40]
    let v5: u8;  // r14b
    let v6: u64;  // rax
    let v7: u8;  // al
    let v8: u8;  // al
    let v9: u8;  // r12b
    let v10: Result<struct4, struct8>;  // r14b

    v1 = uu_cp::platform::linux::check_for_data(a1, a2);
    v5 = v1.field_8;
    if v5 != 2 {
        v0 = v3;
        v2 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if let Ok(_) = v2 {
            *((a0 + 1) as &i32) = (0x200 <= v2 as i64 ? ((v5 & 1)) as u8 as u8 * 3 : 3);
            *((a0 + 2) as &i8) = 4;
            *((a0 + 3) as &Result<struct4, struct8>) = v10;
            *((a0 + 4) as &u8) = v9;
        }
    }
    v7 = 1;
    return struct16 {
        field_0: v8
        padding_1: <UNKNOWN>
        field_8: v6
    };
}
