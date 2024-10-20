fn uu_sort::get_rlimit(a0: &u64) -> u64 {
    let v0: u128;  // [sp-0x28]
    let v2: &u128;  // rax
    let v3: &u128;  // r14
    let v4: &struct_0;  // rax

    v0 = 0;
    if !getrlimit(7, &v0) {
        a0[1] = v0;
        *(a0) = 0;
        return a0;
    }
    v2 = __rust_alloc(22, 1);
    v3 = v2;
    *(v2) = 43077311918803992773564515798043156806;
    *((v3 as &char + 14) as &i64) = 8388356080512671848;
    v4 = __rust_alloc(32, 8);
    v4->field_0 = 22;
    v4->field_8 = v3;
    v4->field_10 = 22;
    v4->field_18 = 2;
    *(a0) = v4;
    a0[1] = &g_592ce0;
    return a0;
}
