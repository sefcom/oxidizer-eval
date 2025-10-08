fn uu_head::head_backwards_on_seekable_file(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0xc0]
    let v1: i8;  // [bp-0x70]
    let v3: core::fmt::rt::Argument;  // esi
    let v4: i32;  // edi

    if *(a1 as &i64) != 1 {
        if *(a1 as &i64) == 3 {
            v0 = std::fs::File::metadata(a0);
            if v0.field_0 as i32 == 2 {
                return 1;
            }
            v3 = *(&v1 as &i64) - *((a1 + 8) as &i64);
            if *(&v1 as &i64) <= *((a1 + 8) as &i64) {
                return 0;
            }
        } else {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
    } else {
        if (uu_head::find_nth_line_from_end(a0, *((a1 + 8) as &i64), *((a1 + 43) as &i8)) & 1) {
            return 1;
        }
    }
    return uu_head::read_n_bytes(v4, v3);
}
