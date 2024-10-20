fn uu_head::read_n_bytes(a0: u64, a1: u64, a2: i64) -> u64 {
    let v0: &struct_0;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: struct8;  // [bp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: &struct_0;  // rdi
    let v8: &struct_0;  // rdi
    let v9: void*;  // rdx

    v2 = struct8 {
        field_8: a0
    };
    v3 = a1;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1, v5, v6);
    if !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v2, &v0) {
        v8 = v0;
        v8->field_c = vvar_107 - 1;
        if vvar_107 != 1 {
            return 0;
        }
        v8->field_0 = 0;
        v8->field_8 = 0;
        if BinaryOp CasCmpNE {
            goto LABEL_0x488a89;
        }
        if ((Not (Load(addr=(vvar_47{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake(&v8->field_8 as &struct_0);
    }
    v7 = v0;
    v7->field_c = vvar_106 - 1;
    if vvar_106 != 1 {
        return v9;
    }
    v7->field_0 = 0;
    v7->field_8 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x488a5d;
    }
    if v7->field_8 == 2 {
        goto LABEL_0x488a65;
    }
    goto LABEL_0x488a93;
}
