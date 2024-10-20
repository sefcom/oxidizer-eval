long long uu_csplit::SplitWriter::new_writer::hc81c848b7923881a(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x50]
    char v2;  // [sp-0x4f]
    char v3;  // [sp-0x4d]
    char v4;  // [bp-0x4c], Other Possible Types: unsigned short
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x44]
    char v7;  // [bp-0x40]
    unsigned long long v8[3];  // [bp-0x38]
    char v9;  // [bp-0x30]
    char v10;  // [bp-0x28]
    unsigned long long v12;  // r15
    unsigned long long v13;  // r14
    unsigned int v15;  // ebp
    unsigned long long v16;  // rax
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rcx
    unsigned long long v20;  // r8
    unsigned long long v21;  // r9
    unsigned long long v22;  // rax

    v12 = a0->field_28;
    uu_csplit::split_name::SplitName::get::h5d36d3bf5645865b(v8, a0->field_20, v12);
    v1 = 0;
    v4 = 0;
    v2 = 1;
    v4 = 1;
    v3 = 1;
    v13 = *((long long *)&v9);
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v0, v13, *((long long *)&v10));
    if (v8[0])
        __rust_dealloc(v13);
    if (*((int *)&v5))
        return *((long long *)&v7);
    v15 = *((int *)&v6);
    v16 = __rust_alloc(0x2000, 1);
    if (!v16)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    if (a0->field_0 != 0x8000000000000000)
    {
        if (!a0->field_18)
        {
            v22 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17h9e57525acabfe52eE.llvm.2876468079995662589(a0, v17, v18, v19, v20, v21, 0x1b600000000, *((long long *)&v1));
            if (v22)
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h977df0175dd0c77cE.llvm.2876468079995662589(v22);
        }
        if (a0->field_0)
            __rust_dealloc(a0->field_8);
        close(a0->field_1c);
        v12 = a0->field_28;
    }
    a0->field_0 = 0x2000;
    a0->field_8 = v16;
    a0->field_10 = 0;
    a0->field_18 = 0;
    a0->field_1c = v15;
    a0->field_28 = v12 + 1;
    a0->field_30 = 0;
    a0->field_38 = 0;
    return 0;
}
