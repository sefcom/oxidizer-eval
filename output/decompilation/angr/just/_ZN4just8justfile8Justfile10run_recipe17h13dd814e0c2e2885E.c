long long just::justfile::Justfile::run_recipe(void* a0, unsigned long long a1, void* a2, struct_1 *a3, unsigned long long a4, unsigned int a5, unsigned long long a6, struct_2 *a7, unsigned long long a8[2], unsigned long long a9)
{
    char v0;  // [bp-0x1b9]
    struct_0 *v1;  // [bp-0x1b0]
    char v2;  // [bp-0x1a8]
    char v3;  // [bp-0x1a7]
    char v4;  // [bp-0x1a6]
    char v5;  // [bp-0x1a0]
    char v6;  // [bp-0x197]
    char v7;  // [bp-0x196]
    char v8;  // [bp-0x190]
    char v9;  // [bp-0x187]
    char v10;  // [bp-0x186]
    char v11;  // [bp-0x180]
    int v12;  // [bp-0x178]
    int v13;  // [bp-0x177]
    unsigned long long v14;  // [bp-0x170]
    char v15;  // [bp-0x168]
    char v16;  // [bp-0x167]
    char v17;  // [bp-0x166]
    char v18;  // [bp-0x158]
    char v19;  // [bp-0x157]
    char v20;  // [bp-0x156]
    unsigned long v21;  // [bp-0x148]
    unsigned long long v22;  // [bp-0x140]
    struct_1 *v23;  // [bp-0x138]
    unsigned long long v24;  // [bp-0x130]
    unsigned long v25;  // [bp-0x128]
    unsigned long long v26;  // [bp-0x120]
    int v27;  // [bp-0x118]
    unsigned long long v28;  // [bp-0x110]
    unsigned long long v29;  // [bp-0x108]
    int v30;  // [bp-0xf8]
    int v31;  // [bp-0xf1]
    int v32;  // [bp-0xe8]
    int v33;  // [bp-0xe1]
    int v34;  // [bp-0xd8]
    int v35;  // [bp-0xd1]
    int v36;  // [bp-0xc9]
    unsigned long long v37;  // [bp-0xc1]
    void* v38;  // [bp-0xc0]
    char *v39;  // [bp-0xb8]
    char v40;  // [bp-0xb0]
    unsigned long v41;  // [bp-0xa0]
    void* v42;  // [bp-0x98]
    void* v43;  // [bp-0x88]
    char *v44;  // [bp-0x80]
    unsigned int v45;  // [bp-0x78]
    char v46;  // [bp-0x74]
    void* v47;  // [bp-0x70]
    void* v48;  // [bp-0x60]
    int v49;  // [bp-0x58]
    int v50;  // [bp-0x48]
    char v51;  // dl
    char v52;  // cl
    unsigned long long v53;  // rax
    unsigned long long v54;  // rdx
    unsigned long long v55[2];  // rax
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    int v59;  // xmm1
    unsigned long long v60;  // r12
    unsigned long long v61;  // rbp
    unsigned long long v63;  // r8
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    int v73;  // xmm0
    int v74;  // xmm1
    unsigned long long v75;  // rax
    unsigned long v76;  // rdx
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2

    v22 = a6.mutex(a7, a1, a2);
    v2.lock(v22 + 16);
    v0 = v51 & 1;
    v1 = v2.unwrap();
    if (v1->field_5)
    {
        *((char *)a0) = 56;
    }
    else if (a3->field_1a5)
    {
LABEL_66ef0c:
        v53 = a7.module_path();
        v55 = a8[0].get(a8[1], v53, v54);
        if (!v55)
            core::option::expect_failed("failed to retrieve scope for modulesrc/recipe.rs", 35, &g_830280); /* do not return */
        v23 = a3;
        v24 = a4;
        v25 = v55[0];
        v26 = a9;
        v41 = a5;
        v2.evaluate_parameters(&v23, a5, a1, a2, a7->field_50, *((long long *)&a7->field_58), v55[1]);
        if (v2 == 56)
        {
            v37 = v14;
            v56 = *((int128_t *)&v5);
            v57 = *((int128_t *)&v8);
            v58 = *((int128_t *)&v11);
            v35 = v58;
            v33 = v57;
            v31 = v56;
            v50 = v57;
            v49 = v56;
            v29 = v14;
            v27 = v58;
            v42 = 0;
            v43 = 0;
            v44 = &v49;
            *((uint128_t *)&v34) = 0;
            v59 = *((int128_t *)&v25);
            *((int128_t *)&v30) = *((int128_t *)&v23);
            v32 = v59;
            v40 = 1;
            v38 = 0;
            v39 = &v42;
            v60 = a7->field_f0;
            v61 = a7->field_28;
            v2.run_dependencies(a3, &v23, v60.index(a7->field_20, v61), v54, a4, &(char)v30, a6, a7, a8, a9);
            if (v2 == 56)
            {
                v2.run(a7, &v23, &v42, v28, v29, v41);
                if (v2 != 56)
                    goto LABEL_66f33d;
                v63 = v61;
                if (v63 < v60)
                    core::slice::index::slice_start_index_len_fail(v60, v61, &g_8302b0); /* do not return */
                v45 = 0;
                v46 = 0;
                v47 = 0;
                v48 = 0;
                v2.run_dependencies(a3, &v23, a7->field_20 + v60 * 32, v63 - v60, a4, &(char)v30, &v45, a7, a8, a9);
                if (v2 == 56)
                {
                    core::ptr::drop_in_place<just::ran::Ran>(&v45);
                    v1->field_5 = 1;
                    *((char *)a0) = 56;
                    core::ptr::drop_in_place<just::evaluator::Evaluator>(&(char)v30);
                    core::ptr::drop_in_place<just::scope::Scope>(&v42);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v27);
                    core::ptr::drop_in_place<just::scope::Scope>(&v49);
                }
                else
                {
                    *((unsigned long *)&a0[96]) = v21;
                    *((int128_t *)&a0[81]) = *((int128_t *)&v19);
                    *((int128_t *)&a0[65]) = *((int128_t *)&v16);
                    v64 = *((int128_t *)&v3);
                    v65 = *((int128_t *)&(&v5)[9]);
                    v66 = *((int128_t *)&(&v8)[9]);
                    *((int128_t *)&a0[49]) = (int128_t)v13;
                    a0[33] = v66;
                    a0[17] = v65;
                    a0[1] = v64;
                    *((char *)a0) = v2;
                    core::ptr::drop_in_place<just::ran::Ran>(&v45);
LABEL_66f388:
                    core::ptr::drop_in_place<just::evaluator::Evaluator>(&(char)v30);
                    core::ptr::drop_in_place<just::scope::Scope>(&v42);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v27);
                    core::ptr::drop_in_place<just::scope::Scope>(&v49);
                }
            }
            else
            {
LABEL_66f33d:
                *((unsigned long *)&a0[96]) = v21;
                *((int128_t *)&a0[81]) = *((int128_t *)&v19);
                *((int128_t *)&a0[65]) = *((int128_t *)&v16);
                v67 = *((int128_t *)&v3);
                v68 = *((int128_t *)&(&v5)[9]);
                v69 = *((int128_t *)&(&v8)[9]);
                *((int128_t *)&a0[49]) = (int128_t)v13;
                a0[33] = v69;
                a0[17] = v68;
                a0[1] = v67;
                *((char *)a0) = v2;
                goto LABEL_66f388;
            }
        }
        else
        {
            v70 = *((int128_t *)&v3);
            v71 = *((int128_t *)&v6);
            v72 = *((int128_t *)&v9);
            *((int128_t *)&v36) = (int128_t)v12;
            v34 = v72;
            v32 = v71;
            v30 = v70;
            *((unsigned long *)&a0[96]) = v21;
            *((int128_t *)&a0[80]) = *((int128_t *)&v18);
            *((int128_t *)&a0[64]) = *((int128_t *)&v15);
            *((int128_t *)&a0[48]) = (int128_t)(&v34)[15];
            v73 = (int128_t)v30;
            v74 = (int128_t)v32;
            *((int128_t *)&a0[33]) = (int128_t)v34;
            a0[17] = v74;
            a0[1] = v73;
            *((char *)a0) = v2;
        }
    }
    else
    {
        v2.confirm(a7);
        v52 = v2;
        if (v52 == 56)
        {
            if ((v3 & 1))
                goto LABEL_66ef0c;
            v75 = a7->padding_5c[52].lexeme();
            *((char *)a0) = 38;
            *((unsigned long long *)&a0[8]) = v75;
            *((unsigned long *)&a0[16]) = v76;
        }
        else
        {
            *((unsigned long *)&a0[96]) = v21;
            *((int128_t *)&a0[82]) = *((int128_t *)&v20);
            *((int128_t *)&a0[66]) = *((int128_t *)&v17);
            v77 = *((int128_t *)&v4);
            v78 = *((int128_t *)&v7);
            v79 = *((int128_t *)&v10);
            *((int128_t *)&a0[50]) = (int128_t)v13;
            a0[34] = v79;
            a0[18] = v78;
            a0[2] = v77;
            *((char *)a0) = v52;
            *((char *)&a0[1]) = v3;
        }
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v1, v0);
    return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<bool>>>(&v22);
}
