fn uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(a0: void*) -> u64 {
    let v0: &u32;  // [sp-0x28]
    let v1: u8;  // [sp-0x20]
    let v3: &struct_0;  // r14
    let v4: &u32;  // rbx
    let v5: u32;  // cc_dep2
    let v6: u64;  // rax
    let v7: u8;  // al

    v3 = a0->field_30;
    v4 = &v3->field_10;
    v3->field_10 = 1;
    if !v3->field_10 {
        v3->field_10 = 1;
        v5 = v3->field_10;
    } else {
        v3->field_10 = 1;
        v5 = v3->field_10;
    }
    if v5 {
        std::sys::sync::mutex::futex::Mutex::lock_contended(v4);
    }
    if !_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1 {
        if !v3->field_14 {
            goto LABEL_4f3d2b;
        }
        v7 = 0;
LABEL_4f3d98:
        v0 = v4;
        v1 = v7;
        core::result::unwrap_failed(); /* do not return */
    }
    v6 = std::panicking::panic_count::is_zero_slow_path();
    if v3->field_14 {
        v7 = v6 | -0x100 | v6 ^ 1;
        goto LABEL_4f3d98;
    }
    if v6 {
LABEL_4f3d2b:
        if (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !std::panicking::panic_count::is_zero_slow_path() as i8 {
            v3->field_14 = 1;
        }
    }
    *(v4) = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4f3d43;
    }
    if *(v4) == 2 {
        goto LABEL_0x4f3d74;
    }
}
