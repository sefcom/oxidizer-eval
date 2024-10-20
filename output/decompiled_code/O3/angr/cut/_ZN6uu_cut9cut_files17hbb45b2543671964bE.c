int uu_cut::cut_files::hbb45b2543671964b()
{
    char v0;  // [sp-0x17c]
    char v3;  // [sp-0x179]
    char v10;  // [sp-0x141]
    char v12;  // [bp-0x138]
    void* v28;  // [sp-0xc0]
    unsigned long v33;  // [sp-0x98]
    unsigned long v34;  // [sp-0x90]
    struct_2 *v37;  // [sp-0x78]
    unsigned long long v38;  // [sp-0x70]
    unsigned long long v39;  // [sp-0x68]
    unsigned long long v40;  // [sp-0x60]
    unsigned long long v41;  // [sp-0x58]
    unsigned long long v42;  // [sp-0x50]
    unsigned long long v43;  // [sp-0x48]
    void* v44;  // [sp-0x40]
    unsigned long long v45;  // [sp-0x38]
    struct_2 *v47;  // rdi
    struct_0 *v48;  // rax
    struct_0 *v49;  // r12
    struct_0 *v50;  // rax
    char *v51;  // rax
    struct_0 *v52;  // r15
    unsigned long long v53;  // cc_dep2
    struct_0 *v54;  // rax
    struct_0 *v55;  // rcx
    struct_0 *v56;  // r15
    unsigned long v57;  // cc_ndep
    unsigned long long v59;  // rbp
    struct_8 *v60;  // rsi
    unsigned long long v61;  // rcx
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rbx
    struct_2 *v130;  // r12

    v48 = v47->field_10;
    if (v48)
    {
        v37 = v47;
        v49 = v47->field_8;
        v50 = v48 * 3;
    }
    else
    {
        v51 = __rust_alloc(1, 1);
        if (!v51)
        {
            v37 = v47;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        *(v51) = 45;
        v52 = v47->field_10;
        v53 = v47->field_0;
        if (v52 == v47->field_0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::haf584903278352f2(v47);
        v54 = v47->field_8;
        v55 = v52 * 3;
        *((long long *)((char *)&v54->field_-10 + 0x8 * v55)) = 1;
        *((char **)(8 + (char *)&v54->field_-10 + 0x8 * v55)) = v51;
        *((long long *)(16 + (char *)&v54->field_-10 + 0x8 * v55)) = 1;
        v56 = (char *)&v52->field_-10 + 1;
        v47->field_10 = v56;
        if (!((char)amd64g_calculate_condition(4, 24, v52 + 1, 0, amd64g_calculate_rflags_c(8, v52, v53, v57))))
        {
            v37 = v47;
            v49 = v47->field_8;
            v50 = v56 * 3;
        }
        else
        {
            if (!v130->field_0)
                return;
            __rust_dealloc(v47->field_8);
        }
    }
    v59 = (char *)v49 + 0x8 * v50;
    v45 = v60->field_0;
    v61 = v60->field_8;
    v34 = v60->field_40;
    v33 = v60->field_48;
    v44 = &v60->field_8;
    v0 = v60->field_30;
    v39 = v60->field_18;
    v43 = v60->field_20;
    v10 = v60->field_28;
    v3 = v10;
    v62 = v60->field_10;
    v42 = v62;
    if (!v61)
        v62 = 1;
    v41 = v62;
    v38 = v61;
    if (!v61)
        v61 = "\t: \n: Is a directory\nwhitespace-delimiteddelimiter";
    v40 = v61;
    v28 = 0;
    v63 = &v12;
}
