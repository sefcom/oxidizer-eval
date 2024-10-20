long long uu_expand::expand::h4f97caadc536173e(struct_7 *a0)
{
    char v0;  // [bp-0x158]
    char v1;  // [bp-0x150]
    char v2;  // [sp-0x14a]
    char v3;  // [sp-0x149]
    unsigned long long v5;  // [sp-0x140]
    unsigned long long v6;  // [sp-0x138]
    void* v7;  // [sp-0x130]
    char v8;  // [sp-0x128]
    unsigned long long v9;  // [sp-0x120]
    unsigned long long *v13;  // [sp-0x100]
    unsigned long long v22;  // [sp-0xc0]
    char *v23;  // [sp-0xb8]
    void* v26;  // [sp-0xa0]
    char *v27;  // [sp-0x98]
    void* v28;  // [sp-0x90]
    unsigned long long v30;  // [sp-0x80]
    unsigned int v31;  // [sp-0x74]
    unsigned long long v34;  // [sp-0x60]
    unsigned long long v36;  // [sp-0x50]
    unsigned long long v38;  // [sp-0x40]
    unsigned long long v39;  // [sp-0x38]
    unsigned long long v42;  // rax
    unsigned long long *v43;  // rcx
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v125;  // r9
    unsigned long long v126;  // r8
    unsigned long long v127;  // rsi
    unsigned long long v132;  // rax

    v42 = __rust_alloc(0x2000, 1);
    if (!v42)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = 0x2000;
    v6 = v42;
    v7 = 0;
    v8 = 0;
    v9 = std::io::stdio::stdout::h077da66234850927();
    v43 = a0->field_20;
    v44 = a0->field_28;
    v26 = 0;
    v27 = 1;
    v28 = 0;
    v45 = a0->field_10;
    if (v45)
    {
        v38 = &a0->field_8[v45];
        v3 = a0->field_49;
        v31 = a0->field_4a;
        v2 = a0->field_48;
        v23 = &a0->field_38->field_0;
        v30 = a0->field_40;
        v39 = v44 * 8;
        v36 = v44 * 8 - 8;
        v34 = &g_4e57a8;
        v13 = v43;
        v22 = v44;
    }
    else
    {
        if (!v8)
        {
            v132 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17h8a662eb784877df8E.llvm.7244247611968800107(&v5, v127, v44, v43, v126, v125, *((long long *)&v0), *((long long *)&v1));
            if (v132)
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h507c112e3cc4b675E.llvm.7244247611968800107(v132);
        }
        if (!v5)
            return 0;
        __rust_dealloc(v6);
    }
}
