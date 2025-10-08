long long fish::builtins::fish_indent::PrettyPrinterState::emit_gap_text_before(struct_0 *a0, unsigned int a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    uint128_t v3;  // [bp-0x48]
    unsigned long long v5;  // rax
    unsigned long long v6;  // r13
    unsigned long long v7;  // rax
    unsigned int v8;  // r15d
    unsigned int v9;  // edx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    void* v14;  // rax

    v5 = a1.start();
    v6 = a0->field_98;
    if (v5 > v6)
    {
        v0 = &g_14c9510;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14c9520); /* do not return */
    }
    v7 = a1.start();
    v8 = a0->field_50.gap_text_to(a0->field_58, v7);
    if (a0.length(v9))
    {
        v10 = v8.start();
        if (v10 < a0->field_28)
        {
            v11 = v8.start();
            a0->field_a0 = a0->field_20.indent(a0->field_28, v11);
        }
        if (!(char)a0->field_a8.range_contained_error(v8, v9))
        {
            v14 = a0.emit_gap_text(v8, v9, a3);
            a0->field_b0 = 0;
            return v14;
        }
        v12 = v8.start();
        v13 = v8.end(v9);
        if (v13 < v12 || v13 > v6)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c9538); /* do not return */
        a0->padding_30.spec_extend(v12 * 4 + a0->field_90, v13 * 4 + a0->field_90);
    }
    a0->field_b0 = 0;
    return 0;
}
