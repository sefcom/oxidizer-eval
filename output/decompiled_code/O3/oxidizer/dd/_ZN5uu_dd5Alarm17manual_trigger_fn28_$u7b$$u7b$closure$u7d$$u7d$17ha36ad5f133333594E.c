fn uu_dd::Alarm::manual_trigger_fn::{{closure}}(a0: &&struct_0) -> u64 {
    let v0: &struct_0;  // [sp-0x8]
    let v2: &struct_0;  // rax
    let v3: &struct_0;  // rcx
    let v5: u64;  // rax
    let v7: u64;  // rdx
    let v9: u64;  // cc_dep2

    v0 = v2;
    v3 = *(a0);
    if v3 == -1 {
        return v0;
    }
    do {
        v5 = v3->field_0;
        if !v5 {
            return v0;
        }
        if v5 < 0 {
            alloc::sync::Weak<T,A>::upgrade::checked_increment::panic_cold_display(); /* do not return */
        }
        v7 = v5 + 1;
        v3->field_0 = v7;
        if v5 == v3->field_0 {
            v3->field_0 = v7;
            v9 = v3->field_0;
        } else {
            v3->field_0 = v7;
            v9 = v3->field_0;
        }
    } while (!((v5 == v9) as char));
    v0 = v3;
    v3->field_10 = 2;
    *(&v3->field_0 as &i32) = vvar_64 - 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4991aa;
    }
    if !vvar_64 - 1 {
        goto LABEL_0x4991b0;
    }
    goto LABEL_0x4991b8;
}
