fn uu_dd::progress::ProgUpdate::print_transfer_stats(a0: void*, a1: u32, a2: u64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38], Other Possible Types: &u64
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v4: u64;  // [bp-0x20]
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: &u64;  // rax
    let v9: u64;  // rcx
    let v10: u64;  // r8
    let v11: u64;  // r9
    let v12: u128;  // xmm0

    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    if a1 && (v1 = "\n", v2 = 1, v3 = 8, v4 = 0 as u128, v6 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v0, &v1, a2), v6) {
        v1 = 0x8000000000000000;
        v4 = v6;
        v8 = __rust_alloc(32, 8);
LABEL_4b1f19:
        v12 = *(&v1 as &i128);
        *(&v8[2] as &i128) = *(&v3 as &i128);
        *(v8) = v12;
    } else {
        v7 = uu_dd::progress::ProgUpdate::write_io_lines(a0, &v0, a2);
        if v7 {
            v1 = 0x8000000000000000;
            v4 = v7;
            v8 = __rust_alloc(32, 8);
            goto LABEL_4b1f19;
        } else {
            v8 = uu_dd::progress::ProgUpdate::write_prog_line(a0, &v0, 0, v9, v10, v11);
            if !v8 {
                return v8;
            }
        }
    }
    v1 = v8;
    v2 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
    core::result::unwrap_failed(); /* do not return */
}
