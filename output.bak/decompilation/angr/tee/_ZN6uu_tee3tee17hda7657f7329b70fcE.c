long long uu_tee::tee::hda7657f7329b70fc(struct_0 *a0)
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
    char v16;  // bpl
    unsigned long long v17;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax

    v15 = 167503724547;
    if (a0->field_19 && (int)uucore::features::signals::ignore_interrupts::h3324c21a6f8249ab() != 134)
        return 167503724547;
    v16 = a0->field_1a;
    if (v16 == 4 && (int)uucore::features::signals::enable_pipe_errors::hea9713d91b5b8a8c() != 134)
        return 167503724547;
    v17 = a0->field_10;
    v11 = a0->field_8;
    v12 = v11 + v17 * 24;
    v13 = a0;
    core::iter::adapters::try_process::hf63c6a42b517bf3c(&v0, &v11);
    v15 = *((long long *)&v1);
    if (v8 == 0x8000000000000000)
        return v15;
    v8 = *((long long *)&v0);
    v9 = v15;
    v10 = v2;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h02ba9e8c78156205(&v0, "'standard output': \nstdin: ", 17);
    v7 = v2;
    v5 = v0;
    v3 = alloc::boxed::Box$LT$T$GT$::new::hc984d48e7fdf5f95(std::io::stdio::stdout::h077da66234850927());
    v4 = &g_51f900;
    *((int128_t *)&v0) = (int128_t)v5;
    v2 = v7;
    alloc::vec::Vec$LT$T$C$A$GT$::insert::h8d0a4e90cda50b20(&v8, 0, &v0);
    v2 = v10;
    *((int128_t *)&v0) = *((int128_t *)&v8);
    v4 = v16;
    v3 = 0;
    v5 = alloc::boxed::Box$LT$T$GT$::new::h15cf95ff801ea224(std::io::stdio::stdin::h7215cc131abb55d8());
    v6 = &g_51f950;
    v19 = std::io::copy::generic_copy::h331c05792c6b2829(&v5, &v0);
    if (!v19)
    {
LABEL_4b33c8:
        if (v10 == v17)
        {
            v21 = _$LT$uu_tee..MultiWriter$u20$as$u20$std..io..Write$GT$::flush::h5ef7c906ce7a5cbe(&v0);
            if (v21)
            {
                ::0x4b2420::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf4a995236b113dff(v21);
            }
            else
            {
                v15 = v3;
                if (v15)
                    v15 = 167503724547;
            }
        }
LABEL_4b33f0:
        goto LABEL_4b33f0;
    }
    else if (v19 != 1 || (char)std::io::error::Error::kind::hb2ff5fa058639b3d(v20) == 39)
    {
        ::0x4b1ad0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d();
        goto LABEL_4b33c8;
    }
    ::0x4b2420::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf4a995236b113dff(0);
    core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::hbcd4494a61c61d7c(v5, v6);
    core::ptr::drop_in_place$LT$uu_tee..MultiWriter$GT$::h7f05ff32ec84ed58(&v0);
    return v15;
}
