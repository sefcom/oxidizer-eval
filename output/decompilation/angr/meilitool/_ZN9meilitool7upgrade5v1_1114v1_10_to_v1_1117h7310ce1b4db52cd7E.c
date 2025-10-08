long long meilitool::upgrade::v1_11::v1_10_to_v1_11(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x1e8]
    unsigned long long v1;  // [bp-0x1e8]
    unsigned long long v2;  // [bp-0x1e0]
    unsigned long long v4;  // [bp-0x1d8]
    unsigned int v5;  // [bp-0x1d4]
    unsigned long long v6;  // [bp-0x1d0]
    void* v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1b0]
    char *v9;  // [bp-0x1a8], Other Possible Types: int, void*, unsigned long, unsigned long long, unsigned int
    int v10;  // [bp-0x1a8]
    int v11;  // [bp-0x1a4], Other Possible Types: unsigned int
    int v12;  // [bp-0x1a0], Other Possible Types: unsigned long long
    char v13;  // [bp-0x198], Other Possible Types: unsigned int, unsigned long long
    char *v14;  // [bp-0x198]
    unsigned int v15;  // [bp-0x198]
    char *v16;  // [bp-0x198]
    unsigned int v17;  // [bp-0x197]
    unsigned int v18;  // [bp-0x194]
    int v19;  // [bp-0x190], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x188], Other Possible Types: unsigned int
    unsigned long long v21;  // [bp-0x180]
    char *v22;  // [bp-0x178]
    unsigned long long v23;  // [bp-0x170]
    unsigned long long v24;  // [bp-0x168]
    unsigned long long v25;  // [bp-0x160]
    unsigned long long v26;  // [bp-0x158]
    unsigned long long v27;  // [bp-0x150]
    unsigned long long v28;  // [bp-0x148]
    int v29;  // [bp-0x148]
    unsigned long long v30;  // [bp-0x140]
    char *v31;  // [bp-0x138]
    unsigned long v32;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v33;  // [bp-0x128]
    char *v34;  // [bp-0x120]
    char v35;  // [bp-0x118]
    unsigned long long v36;  // [bp-0x108]
    unsigned long long v37;  // [bp-0xf8]
    int v38;  // [bp-0xf0]
    unsigned long long v39;  // [bp-0xe0]
    unsigned long long v40;  // [bp-0xd8]
    unsigned long long v41;  // [bp-0xd0]
    char v42;  // [bp-0xc8]
    unsigned long long v43;  // [bp-0xc0]
    unsigned long long v44;  // [bp-0xb8]
    char v45;  // [bp-0xb0]
    unsigned long long v46;  // [bp-0xb0]
    unsigned long long v47;  // [bp-0xa8]
    int v48;  // [bp-0xa0]
    unsigned long long v49;  // [bp-0x90]
    unsigned long long v50;  // [bp-0x88]
    unsigned long long v51;  // [bp-0x80]
    unsigned long long v52;  // [bp-0x78]
    char v53;  // [bp-0x70]
    void* v54;  // [bp-0x50]
    char v55;  // [bp-0x48]
    unsigned long long v57;  // rdx
    unsigned long long v58;  // r12
    unsigned long long v59;  // rcx
    unsigned long long v60;  // r8
    unsigned long long v61;  // r13
    unsigned int v62;  // eax
    unsigned long long v63;  // rax
    unsigned long long v64;  // rbp
    unsigned long long v65;  // rax
    unsigned int v66;  // eax
    int v67;  // xmm0
    char v68;  // sil
    unsigned int v69;  // [bp-0x1e4]

    v9 = &g_926288;
    v12 = 1;
    v13 = 8;
    *((uint128_t *)&v19) = 0;
    std::io::stdio::_print(&(char)v9);
    v42.join(a0, a1, "tasks", 5);
    v9 = 0;
    v13 = 0;
    v20 = 0;
    v19 = 429496729601;
    (char)v1.open(&(char)v9, &v42);
    if (((char)(char)v1.with_context(v43, v44) & 1))
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&v42);
        return v57;
    }
    v24 = v57;
    (char)v9.new(&v24, v57, v59, v60);
    memcpy(&(char)v1, &v12, 16);
    v4 = 429496729601;
    if (v9 == 1)
    {
        v13 = v4;
        *((int128_t *)&v9) = *((int128_t *)&v0);
        v58 = (char)v9.from();
    }
    else
    {
        v36 = v4;
        memcpy(&v35, &v0, 16);
        meilitool::try_opening_database(&(char)v9, &v24, &v35);
        v58 = v12;
        if (!((char)v9 & 1))
        {
            (char)v9.len(v12, v13, &v35);
            v61 = v57;
            if (!((char)(char)v9.context() & 1))
            {
                v41 = v57;
                (char)v1.iter(v12, v13, &v35);
                v62 = *((int *)&v0);
                if (v62 == 5)
                {
                    v55.collect(v2, (char)v4);
                    v53.into_iter(&v55);
                    v54 = 0;
                    v45.next(&v53);
                    v63 = v47;
                    if (v47 != 9223372036854775809)
                    {
                        v40 = 0x8000000000000000;
                        v39 = 9223372036854775819;
                        do
                        {
                            if (v63 == 0x8000000000000000)
                            {
                                v9 = v48;
                                v13 = v49;
                                v61 = (char)v9.from();
                                goto LABEL_757eb7;
                            }
                            v38 = v48;
                            v37 = v63;
                            v51 = v49;
                            v52 = v50;
                            (char)v1.join(a0, a1, "indexes", 7);
                            (char)v9.spec_to_string(&v51);
                            v25.join(v2, v4, &(char)v9);
                            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v1);
                            v32 = v46 + 1;
                            *((int128_t *)&v29) = *((int128_t *)&v26);
                            v9 = &v32;
                            v12 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v14 = &v41;
                            v19 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v20 = &v37;
                            v21 = <alloc::string::String as core::fmt::Display>::fmt;
                            v22 = &v28;
                            v23 = <std::path::Display as core::fmt::Display>::fmt;
                            v1 = &g_926298;
                            v2 = 5;
                            v7 = 0;
                            v4 = &(char)v9;
                            v6 = 4;
                            std::io::stdio::_print(&(char)v1);
                            v9 = 0;
                            v15 = 0;
                            v20 = 0;
                            v19 = 107374182401;
                            (char)v1.open(&(char)v9, &v25);
                            v61 = v57;
                            if (((char)(char)v1.with_context(v26, v27, &v37) & 1))
                            {
LABEL_757e9d:
                                core::ptr::drop_in_place<std::path::PathBuf>(&v25);
                                core::ptr::drop_in_place<alloc::string::String>(&v37);
LABEL_757eb7:
                                v53.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>();
                                goto LABEL_757ec4;
                            }
                            v8 = v57;
                            (char)v9.new(&v8, v57, v59, v60);
                            (char)v1.with_context(&(char)v9, v26, v27, &v37);
                            v61 = v2;
                            if (v1 == 2)
                            {
LABEL_757e93:
                                core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v8);
                                goto LABEL_757e9d;
                            }
                            v32 = v1;
                            v33 = v61;
                            v34 = v4;
                            meilitool::try_opening_poly_database(&(char)v9, &v8, &v32, "vector-arroy", 12);
                            (char)v1.with_context(&(char)v9, &v37);
                            v61 = v2;
                            if (((char)v1 & 1))
                            {
LABEL_757e86:
                                core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v32);
                                goto LABEL_757e93;
                            }
                            (char)v9.new(&v8, v57, v59, v60);
                            (char)v1.with_context(&(char)v9, v26, v27, &v37);
                            v64 = v2;
                            if (v1 == 2)
                            {
LABEL_757e83:
                                v61 = v64;
                                goto LABEL_757e86;
                            }
                            v28 = v1;
                            v30 = v64;
                            v31 = v4;
                            meilitool::try_opening_poly_database(&(char)v9, &v8, &v28, "vector-arroy", 12);
                            (char)v1.with_context(&(char)v9, &v37);
                            v64 = v2;
                            if (!((char)v1 & 1))
                            {
                                arroy::upgrade::cosine_from_0_4_to_0_5(&(char)v1, &v32, v2, (unsigned int)v4, &v28, v2, v4);
                                v65 = v1;
                                if (v65 == 9223372036854775819)
                                {
                                    v16 = v31;
                                    *((int128_t *)&v10) = *((int128_t *)&v28);
                                    (char)v1.commit(&(char)v9);
                                    v66 = v1;
                                    if (v66 != 5)
                                    {
                                        v18 = v5;
                                        *((int128_t *)&v11) = *((int128_t *)&v69);
                                        v9 = v66;
                                        v64 = v9.from();
                                        goto LABEL_757e83;
                                    }
                                }
                                else
                                {
                                    v67 = *((int128_t *)&v2);
                                    *((int128_t *)&v19) = *((int128_t *)&v6);
                                    v12 = v67;
                                    v9 = v65;
                                    v64 = (char)v9.from();
                                    goto LABEL_757e51;
                                }
                            }
                            else
                            {
LABEL_757e51:
                                core::ptr::drop_in_place<heed::txn::RwTxn>(&v28);
                                goto LABEL_757e83;
                            }
                            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v32);
                            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v8);
                            core::ptr::drop_in_place<std::path::PathBuf>(&v25);
                            core::ptr::drop_in_place<alloc::string::String>(&v37);
                            v45.next(&v53);
                            v63 = v47;
                        } while (v47 != 9223372036854775809);
                    }
                    v53.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>();
                    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v35);
                    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v24);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v42);
                    return 0;
                }
                v68 = v4;
                v18 = v5;
                v17 = *((int *)((char *)&v4 + 1));
                v9 = v62;
                v11 = v69;
                v12 = v2;
                v13 = v68;
                v61 = v9.from();
            }
LABEL_757ec4:
            v58 = v61;
        }
        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v35);
    }
    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v24);
    core::ptr::drop_in_place<std::path::PathBuf>(&v42);
    return v58;
}
