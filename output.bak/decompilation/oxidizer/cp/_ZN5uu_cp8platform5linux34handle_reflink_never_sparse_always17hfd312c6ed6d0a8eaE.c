fn uu_cp::platform::linux::handle_reflink_never_sparse_always(a0: &Result<struct8, struct4>, a1: u32, a2: u32, a3: u32, a4: u32) -> u8 {
    let v0: i64;  // [sp-0x58]
    let v1: i72;  // [sp-0x50], Other Possible Types: struct9
    let v2: i8;  // [bp-0x40]
    let v3: i64;  // [sp-0x38]
    let v7: i64;  // r14
    let v8: i8;  // bpl

    v1 = uu_cp::platform::linux::check_for_data(a1, a2);
    if *((&v1 as &char + 8) as &i8) != 2 {
        v0 = a3;
        v3 = v1;
        v7 = v2;
        v1 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if !v1 {
            v8 = *((&v1 as &char + 1) as &i8);
            *((a0 + 1) as &i8) = 3;
            *((a0 + 2) as &i8) = 1;
            *((a0 + 3) as &i8) = v8 * 2 + 2;
            *((a0 + 4) as &u8) = uu_cp::platform::linux::check_dest_is_fifo(v0, a4) as i8 | !v7;
        }
    }
    return Ok(struct8 {
        field_7: <UNKNOWN>
    });
}
