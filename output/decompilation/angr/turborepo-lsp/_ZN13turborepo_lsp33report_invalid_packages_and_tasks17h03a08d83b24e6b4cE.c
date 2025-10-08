long long turborepo_lsp::report_invalid_packages_and_tasks(unsigned long long a0, unsigned long long a1, void* a2, unsigned long long a3, unsigned long long a4[5])
{
    unsigned long long v0;  // [bp-0x310]
    unsigned long long v1;  // [bp-0x308]
    void* v2;  // [bp-0x300], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v3;  // [bp-0x2f8]
    void* v4;  // [bp-0x2f0], Other Possible Types: char *, unsigned long
    unsigned long v5;  // [bp-0x2e8], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x2e0]
    int v7;  // [bp-0x2d8]
    int v8;  // [bp-0x2c8]
    int v9;  // [bp-0x2b8]
    int v10;  // [bp-0x2a8]
    unsigned long long v11;  // [bp-0x298]
    unsigned long long v12;  // [bp-0x290]
    unsigned long long v13;  // [bp-0x280]
    unsigned long long v14;  // [bp-0x278]
    unsigned long long v15;  // [bp-0x268]
    unsigned long long v16;  // [bp-0x260]
    unsigned long long v17;  // [bp-0x250]
    unsigned long long v18;  // [bp-0x248]
    unsigned long long v19;  // [bp-0x230]
    int v20;  // [bp-0x220]
    int v21;  // [bp-0x210]
    int v22;  // [bp-0x200]
    unsigned long long v23;  // [bp-0x1f0]
    unsigned int v24;  // [bp-0x1e8]
    uint128_t v25;  // [bp-0x1e0]
    int v26;  // [bp-0x1d0], Other Possible Types: char
    unsigned long long v27;  // [bp-0x1c0]
    int v28;  // [bp-0x1b8], Other Possible Types: char *
    int v29;  // [bp-0x1b8]
    unsigned long long v30;  // [bp-0x1b0]
    char *v31;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x1a0]
    int v33;  // [bp-0x190]
    int v34;  // [bp-0x180]
    int v35;  // [bp-0x170]
    int v36;  // [bp-0x160]
    unsigned long long v37;  // [bp-0x150]
    char v38;  // [bp-0x148]
    unsigned long long v39;  // [bp-0x138]
    char v40;  // [bp-0x130]
    unsigned long long v41;  // [bp-0x120]
    char v42;  // [bp-0x118]
    unsigned long long v43;  // [bp-0x108]
    char v44;  // [bp-0x100]
    char *v45;  // [bp-0xf0]
    char v46;  // [bp-0xe8]
    int v47;  // [bp-0xd8]
    int v48;  // [bp-0xc8]
    int v49;  // [bp-0xb8]
    unsigned long long v50;  // [bp-0xa8]
    unsigned long long v51;  // [bp-0xa0]
    int v52;  // [bp-0x98]
    unsigned long v53;  // [bp-0x80]
    unsigned long v54;  // [bp-0x78]
    unsigned int v55[1][4];  // [bp-0x70], Other Possible Types: int
    unsigned long long v56;  // [bp-0x58]
    unsigned long long v57;  // [bp-0x50]
    unsigned long v58;  // [bp-0x48]
    unsigned long long v59;  // [bp-0x40]
    unsigned long long v60;  // [bp-0x38]
    unsigned long v62;  // r12
    unsigned long v63;  // r13
    unsigned long long v64;  // r14
    unsigned long v65;  // r13
    unsigned long v66;  // r12
    unsigned long long v67[6];  // rbx
    unsigned long v68;  // rax
    unsigned long long v69;  // r12
    unsigned long long v70;  // rax

    v57 = a1;
    v62 = a4[1];
    v63 = a4[2];
    core::str::<impl str>::split_once(&v2, a4[1], a4[2]);
    v64 = v2;
    v56 = v3;
    v65 = v63;
    v66 = v62;
    if (v64)
    {
        v65 = v5;
        v66 = v4;
    }
    v53 = v66;
    v54 = v65;
    turborepo_lsp::convert_ranges(&v55, a2, a4[3] + 1, a4[4] - 1);
    v67 = a0.get_inner(v66, v65);
    v68 = &v67[3];
    if (!v67)
        v68 = 0;
    v58 = v68;
    v59 = v64;
    v69 = v56;
    v60 = v69;
    if (v64)
    {
        if (!a1.get_inner(&v59))
        {
            v0 = v64;
            v1 = v69;
            *((unsigned long long **)&v29) = &v0;
            v30 = <&T as core::fmt::Display>::fmt;
            v31 = &v57;
            v32 = <&T as core::fmt::Debug>::fmt;
            v2 = &g_d2f6c8;
            v3 = 2;
            v6 = 0;
            v4 = &(unsigned long long)v29;
            v5 = 2;
            v26.map_or_else(0, a2, &v2);
            v2.to_vec("turbo:no-such-packageThe task `` does not exist in the package ``.", 21);
            v45 = v4;
            memcpy(&v44, &v2, 16);
            v24 = 0;
            v25 = 0;
            v18 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v12 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v14 = 0x8000000000000000;
            v16 = 0x8000000000000000;
            v19 = 9223372036854775813;
            v52 = v55;
            v51 = 4294967297;
            v37 = v11;
            v36 = v10;
            v35 = v9;
            v34 = v8;
            v33 = v7;
            memcpy(&v32, &v5, 16);
            v39 = v13;
            memcpy(&v38, &v12, 16);
            v31 = v27;
            v29 = v26;
            v41 = v15;
            memcpy(&v40, &v14, 16);
            v43 = v17;
            memcpy(&v42, &v16, 16);
            v50 = v23;
            v49 = v22;
            v48 = v21;
            v47 = v20;
            memcpy(&v46, &v19, 16);
            a3.push(&(unsigned long long)v29, &g_d2f780);
        }
        else if (v67)
        {
            v2 = v67[4];
            v3 = v67[4] + v67[5] * 24;
            v28 = &v59;
            v70 = v2.try_fold(&v28).is_err();
            if ((char)v70)
                return v70;
            v0 = v64;
            v1 = v69;
            *((unsigned long **)&v29) = &v53;
            v30 = <&T as core::fmt::Display>::fmt;
            v31 = &v0;
            v32 = <&T as core::fmt::Display>::fmt;
            v2 = &g_d2f6e8;
            v3 = 3;
            v6 = 0;
            v4 = &(unsigned long long)v29;
            v5 = 2;
            v26.map_or_else(0, a2, &v2);
            v2.to_vec("turbo:no-such-task-in-package` does not exist.turbo:no-such-taskroot is not a valid utf-8 pathfile is always an absolute pathroot uri: ", 29);
            v45 = v4;
            memcpy(&v44, &v2, 16);
            v24 = 0;
            v25 = 0;
            v18 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v12 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v14 = 0x8000000000000000;
            v16 = 0x8000000000000000;
            v19 = 9223372036854775813;
            v52 = v55;
            v51 = 4294967297;
            v37 = v11;
            v36 = v10;
            v35 = v9;
            v34 = v8;
            v33 = v7;
            memcpy(&v32, &v5, 16);
            v39 = v13;
            memcpy(&v38, &v12, 16);
            v31 = v27;
            v29 = v26;
            v41 = v15;
            memcpy(&v40, &v14, 16);
            v43 = v17;
            memcpy(&v42, &v16, 16);
            v50 = v23;
            v49 = v22;
            v48 = v21;
            v47 = v20;
            memcpy(&v46, &v19, 16);
            a3.push(&(unsigned long long)v29, &g_d2f768);
        }
        else
        {
            v0 = v64;
            v1 = v69;
            *((unsigned long **)&v28) = &v53;
            v30 = <&T as core::fmt::Display>::fmt;
            v31 = &v0;
            v32 = <&T as core::fmt::Display>::fmt;
            v2 = &g_d2f6e8;
            v3 = 3;
            v6 = 0;
            v4 = &(unsigned long long)v28;
            v5 = 2;
            v26.map_or_else(0, a2, &v2);
            v2.to_vec("turbo:no-such-taskroot is not a valid utf-8 pathfile is always an absolute pathroot uri: ", 18);
            v45 = v4;
            memcpy(&v44, &v2, 16);
            v24 = 0;
            v25 = 0;
            v18 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v12 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v14 = 0x8000000000000000;
            v16 = 0x8000000000000000;
            v19 = 9223372036854775813;
            v52 = v55;
            v51 = 4294967297;
            v37 = v11;
            v36 = v10;
            v35 = v9;
            v34 = v8;
            v33 = v7;
            memcpy(&v32, &v5, 16);
            v39 = v13;
            memcpy(&v38, &v12, 16);
            v31 = v27;
            v28 = v26;
            v41 = v15;
            memcpy(&v40, &v14, 16);
            v43 = v17;
            memcpy(&v42, &v16, 16);
            v50 = v23;
            v49 = v22;
            v48 = v21;
            v47 = v20;
            memcpy(&v46, &v19, 16);
            a3.push(&(unsigned long long)v28, &g_d2f750);
        }
    }
    else
    {
        if (!v67)
        {
            *((unsigned long **)&v29) = &v53;
            v30 = <&T as core::fmt::Display>::fmt;
            v2 = &g_d2f718;
            v3 = 2;
            v6 = 0;
            v4 = &(unsigned long long)v29;
            v5 = 1;
            v26.map_or_else(0, a2, &v2);
            v2.to_vec("turbo:no-such-taskroot is not a valid utf-8 pathfile is always an absolute pathroot uri: ", 18);
            v45 = v4;
            memcpy(&v44, &v2, 16);
            v24 = 0;
            v25 = 0;
            v18 = 9223372036854775809;
            v5 = 0x8000000000000000;
            v12 = 0x8000000000000000;
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v14 = 0x8000000000000000;
            v16 = 0x8000000000000000;
            v19 = 9223372036854775813;
            v52 = v55;
            v51 = 4294967297;
            v37 = v11;
            v36 = v10;
            v35 = v9;
            v34 = v8;
            v33 = v7;
            memcpy(&v32, &v5, 16);
            v39 = v13;
            memcpy(&v38, &v12, 16);
            v31 = v27;
            v29 = v26;
            v41 = v15;
            memcpy(&v40, &v14, 16);
            v43 = v17;
            memcpy(&v42, &v16, 16);
            v50 = v23;
            v49 = v22;
            v48 = v21;
            v47 = v20;
            memcpy(&v46, &v19, 16);
            a3.push(&(unsigned long long)v29, &g_d2f738);
        }
        else
        {
            return v68;
        }
    }
    v18.drop_in_place<core::option::Option<lsp_types::NumberOrString>>();
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v2);
}
