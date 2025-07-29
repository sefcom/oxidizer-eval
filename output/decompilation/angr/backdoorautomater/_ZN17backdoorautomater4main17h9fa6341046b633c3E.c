long long backdoorautomater::main()
{
    int v1;  // [bp-0x3b8]
    int v2;  // [bp-0x3b8]
    int v3;  // [bp-0x3b8]
    int v4;  // [bp-0x3b8]
    unsigned long long v5;  // [bp-0x3b0]
    void* v6;  // [bp-0x3a8], Other Possible Types: unsigned long long
    int v7;  // [bp-0x398]
    unsigned long long v8;  // [bp-0x388]
    void* v9;  // [bp-0x380], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x378]
    unsigned long long v11;  // [bp-0x370]
    int v12;  // [bp-0x370]
    int v13;  // [bp-0x368]
    unsigned long long v14;  // [bp-0x360]
    int v15;  // [bp-0x358]
    unsigned long long v16;  // [bp-0x348]
    int v17;  // [bp-0x340]
    unsigned long long v18;  // [bp-0x330]
    int v19;  // [bp-0x328]
    unsigned long long v21;  // [bp-0x318]
    int v22;  // [bp-0x310]
    char v23;  // [bp-0x308]
    unsigned long long v24;  // [bp-0x300]
    void* v25;  // [bp-0x2f8]
    char v26;  // [bp-0x2f0]
    char v27;  // [bp-0x2e8]
    unsigned long long v28;  // [bp-0x2d8]
    char v29;  // [bp-0x2c8]
    unsigned long long v30;  // [bp-0x2b8]
    char v31;  // [bp-0x2a8]
    unsigned long long v32;  // [bp-0x298]
    char v33;  // [bp-0x290]
    char v34;  // [bp-0x1f8]
    char v35;  // [bp-0x160]
    char v36;  // [bp-0xc8]
    unsigned long long v39;  // rdx
    unsigned int v40;  // eax
    unsigned long v41;  // r15
    unsigned int v42;  // r12d
    char *v43;  // r15
    char *v44;  // r14
    unsigned long long v45;  // rcx
    char *v46;  // rbp
    char v48;  // r12b
    char v49;  // bl
    unsigned long long v50;  // rcx
    char *v51;  // r13
    unsigned long long v52;  // rcx
    char v54;  // r15b
    char v56;  // r14b
    unsigned long long v57;  // rcx
    unsigned int v58;  // edx
    unsigned long long v60;  // rax

    do
    {
        v9 = &g_62adb0;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_print(&v9);
        v9 = &g_62adc0;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_print(&v9);
        v9 = &g_62add0;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_print(&v9);
        v9 = &g_62ade0;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_print(&v9);
        v9 = &g_62adf0;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v13) = 0;
        std::io::stdio::_print(&v9);
        *((unsigned long long *)&v2) = 0;
        v5 = 1;
        v6 = 0;
        v9 = std::io::stdio::stdin();
        v9.read_line(&(unsigned long long)v2).expect(v39, &g_62ae00);
        v40 = core::str::<impl str>::trim_matches(v5, v6).from_str(v39);
        v41 = (unsigned int)v39;
        v9.to_vec("Concert String to Integer: Errortransition equivalence classes: failed to create PatternID from must call 'finish_pattern' firststate must have zero transitions", 32);
        v8 = v11;
        memcpy(&v7, &v9, 16);
        v9.add(&v7, v5, v6);
        v42 = v41;
        v40 & 1.expect(v42, 1, v11, &g_62ae18);
        ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(&v9);
        (unsigned long long)v2.clear();
        ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v2);
    } while (!(char)v41);
    v9 = 0;
    v10 = 1;
    *((uint128_t *)&v12) = 0;
    v14 = 1;
    *((uint128_t *)&v15) = 0;
    v16 = 1;
    v26 = 0;
    *((uint128_t *)&v17) = 0;
    v18 = 1;
    v43 = &(char)v19;
    *((uint128_t *)&v19) = 0;
    v21 = 1;
    v44 = &v23;
    *((uint128_t *)&v22) = 0;
    v24 = 1;
    v25 = 0;
    switch (v42)
    {
    case 1:
        v9.set_param(1);
        v33.clone(&v9);
        backdoorautomater::sanitizer::sanitize_param_hub(&v33, 1, v39, v45);
        v46 = &(char)v17;
        v28 = (long long)v15;
        memcpy(&v27, &(char)v12, 16);
        v6 = (long long)v17;
        *((int128_t *)&v1) = (int128_t)(&v15)[8];
        v8 = v11;
        memcpy(&v7, &v9, 16);
        v48 = 1;
        backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::newservice::write_service(&v27, &(unsigned long long)v2, &v7, *((int *)&v26)));
        v49 = 1;
        break;
    case 2:
        v9.set_param(2);
        v34.clone(&v9);
        backdoorautomater::sanitizer::sanitize_param_hub(&v34, 2, v39, v57);
        v46 = &(char)v17;
        v30 = (long long)v15;
        memcpy(&v29, &v12, 16);
        v28 = (long long)v22;
        memcpy(&v27, &(char)v19, 16);
        v58 = *((int *)&v26);
        v6 = v11;
        *((int128_t *)&v4) = *((int128_t *)&v9);
        v8 = (long long)v17;
        memcpy(&v7, &v15, 16);
        backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::get_service(&v29, &v27, v58, &(unsigned long long)v2, &v7));
        v49 = 1;
        break;
    case 3:
        v9.set_param(3);
        v35.clone(&v9);
        backdoorautomater::sanitizer::sanitize_param_hub(&v35, 3, v39, v50);
        v46 = &(char)v17;
        v30 = v11;
        memcpy(&v29, &v9, 16);
        v28 = (long long)v17;
        memcpy(&v27, &(char)v15, 16);
        v6 = (long long)v22;
        v51 = &(char)v19;
        *((int128_t *)&v2) = (int128_t)(&v19)[8];
        v8 = v25;
        memcpy(&v7, &v22, 16);
        backdoorautomater::shellscript::create_script(&v29, &v27, &(unsigned long long)v2, &v7, *((int *)&v26));
        goto LABEL_465bf6;
    case 4:
        v9.set_param(4);
        v36.clone(&v9);
        backdoorautomater::sanitizer::sanitize_param_hub(&v36, 4, v39, v52);
        v32 = v11;
        memcpy(&v31, &v9, 16);
        v30 = (long long)v17;
        memcpy(&v29, &v15, 16);
        v28 = (long long)v22;
        v51 = &(char)v19;
        memcpy(&v27, &(char)v19, 16);
        v6 = v25;
        *((int128_t *)&v3) = (int128_t)(&v22)[8];
        v8 = (long long)v19;
        v46 = &(char)v17;
        memcpy(&v7, &v17, 16);
        backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::cronshell::create_cron(&v31, &v29, &v27, &(unsigned long long)v2, *((int *)&v26), &v7));
        v54 = 1;
LABEL_465bf6:
        v56 = 1;
LABEL_465ce5:
        v60 = ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(&(char)v12);
        if (!v56)
            v60 = ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(&(char)v15);
        v44 = &v23;
        v43 = v51;
        if (!(!v54))
            goto LABEL_465d19;
        break;
    default:
        v46 = &(char)v17;
        v51 = &(char)v19;
        ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(&v9);
        v48 = 1;
        goto LABEL_465ce5;
    }
    v60 = ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(v46);
LABEL_465d19:
    if (v48)
        v60 = ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(v43);
    if (v49)
        v60 = ::0x463b50::core::ptr::drop_in_place<alloc::string::String>(v44);
    return v60;
}
