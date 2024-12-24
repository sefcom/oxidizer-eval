long long uu_tee::tee::h5df91d09048e292c(struct_0 *a0)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    char v1;  // [bp-0xa0]
    unsigned long v2;  // [sp-0x98], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x90], Other Possible Types: unsigned long long
    char v4;  // [bp-0x88], Other Possible Types: unsigned long
    int v5;  // [bp-0x78], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    unsigned long v8;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x50]
    unsigned long long v10;  // [sp-0x48]
    unsigned long v11;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x38]
    struct_0 *v13;  // [sp-0x30]
    unsigned long long v15;  // r15
    unsigned long long v16;  // rbx
    char v17;  // bpl
    unsigned long long v18;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    void* v22;  // rdi
    unsigned long long v23;  // rax

    v15 = 167503724547;
    if (a0->field_19 && (int)uucore::features::signals::ignore_interrupts::hf6c64b59fbbc1379() != 134)
        return 167503724547;
    v17 = a0->field_1a;
    if (v17 == 4 && (int)uucore::features::signals::enable_pipe_errors::h30e9d7fe9b8e8d0c() != 134)
        return 167503724547;
    v18 = a0->field_10;
    v11 = a0->field_8;
    v12 = v11 + v18 * 24;
    v13 = a0;
    core::iter::adapters::try_process::hcb6a989b35d496cb(&v0, &v11);
    v16 = *((long long *)&v1);
    if (v8 == 0x8000000000000000)
        return v16;
    v8 = *((long long *)&v0);
    v9 = v16;
    v10 = v2;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h78c35168082532f0(&v0, "'standard output': \nstdin: ", 17);
    v7 = v2;
    v5 = v0;
    v3 = alloc::boxed::Box$LT$T$GT$::new::he91c5402980f7d9b(std::io::stdio::stdout::h077da66234850927());
    v4 = &g_520240;
    *((int128_t *)&v0) = (int128_t)v5;
    v2 = v7;
    alloc::vec::Vec$LT$T$C$A$GT$::insert::h6ab52ec64690305a(&v8, 0, &v0);
    v2 = v10;
    *((int128_t *)&v0) = *((int128_t *)&v8);
    v4 = v17;
    v3 = 0;
    v5 = alloc::boxed::Box$LT$T$GT$::new::h2f4d7a5f0ee60354(std::io::stdio::stdin::h7215cc131abb55d8());
    v6 = &g_520290;
    v20 = std::io::copy::generic_copy::h5ebba31016fac968(&v5, &v0);
    if (!v20)
    {
LABEL_4b35c8:
        if (v10 == v18)
        {
            v23 = _$LT$uu_tee..MultiWriter$u20$as$u20$std..io..Write$GT$::flush::h9f667c085e906113(&v0);
            if (v23)
            {
                ::0x4b2620::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h9f9695d267e941a7(v23);
            }
            else
            {
                v15 = v3;
                if (v15)
                    v15 = 167503724547;
            }
        }
        v22 = 0;
    }
    else if (v20 != 1 || (char)std::io::error::Error::kind::hb2ff5fa058639b3d(v21) == 39)
    {
        ::0x4b1cd0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h49b06029efa5deec(v22);
        goto LABEL_4b35c8;
    }
    ::0x4b2620::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h9f9695d267e941a7(v22);
    core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h1cce3442d7386ab7(v5, v6);
    core::ptr::drop_in_place$LT$uu_tee..MultiWriter$GT$::h8dbdcdc594622a11(&v0);
    return v16;
}
