fn uu_dd::progress::SignalHandler::install_signal_handler(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: Enum;  // [sp-0xf0], Other Possible Types: i64
    let v1: i8;  // [bp-0xe8]
    let v2: i128;  // [sp-0xe0]
    let v3: i64;  // [sp-0xd0]
    let v4: i128;  // [sp-0xc8]
    let v15: i128;  // [sp-0x28]
    let v17: i64;  // rcx
    let v19: i64;  // rax
    let v20: i128;  // xmm0
    let v21: i64;  // rdx
    let v22: i64;  // cc_ndep
    let v23: i64;  // cc_ndep
    let v24: i64;  // cc_dep1

    v0 = std::os::unix::net::stream::UnixStream::pair();
    if v0 {
        goto LABEL_4b206c;
    }
    v0 = signal_hook::iterator::backend::SignalDelivery<R,E>::with_pipe(*((&v0 as &char + 4) as &i32), v1, 10);
    v17 = v0;
    if !v17 {
LABEL_4b206c:
        *((a0 + 8) as &i64) = v1;
        *(a0 as &i64) = 0;
        if *(a2 as &i64) {
            v19();
        }
        if *((a2 + 8) as &i64) {
            return a0;
        }
        return a0;
    }
    v20 = v2;
    v21 = v3;
    v15 = v4;
    *(v17 as &i32) = vvar_180 + 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4b20e1;
    }
    v23 = amd64g_calculate_rflags_c(20, v17, 0, v22);
    v24 = vvar_180 + 1;
    if amd64g_calculate_condition(14, 24, vvar_180 + 1, 0, amd64g_calculate_rflags_c(20, v17, 0, v22)) as char {
        goto LABEL_0x4b2217;
    }
}
