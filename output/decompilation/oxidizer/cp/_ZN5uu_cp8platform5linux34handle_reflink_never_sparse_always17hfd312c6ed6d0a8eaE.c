fn uu_cp::platform::linux::handle_reflink_never_sparse_always(a1: i64, a2: i64, a3: i32, a4: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x50]
    let v1: u8;  // [bp-0x48]
    let v3: u64;  // [bp-0x38]
    let v5: u64;  // rax
    let v6: u8;  // al
    let v7: u8;  // al
    let v8: u8;  // r12b
    let v9: Result<struct4, struct8>;  // bpl
    let v10: u8;  // r13b
    let v11: u8;  // al

    uu_cp::platform::linux::check_for_data(a1, a2, a3);
    if v1 != 2 {
        v3 = *(&v0 as &i64);
        uu_cp::platform::linux::check_sparse_detection(a1, a2, a3);
        if !v0 {
            v11 = uu_cp::platform::linux::check_dest_is_fifo(a3, a4) as i8;
            *((a0 + 1) as &u8) = v10;
            *((a0 + 2) as &i8) = 1;
            *((a0 + 3) as &Result<struct4, struct8>) = v9;
            *((a0 + 4) as &u8) = v11 | v8;
        }
    }
    v6 = 1;
    return struct16 {
        field_0: v7
        field_8: v5
    };
}
