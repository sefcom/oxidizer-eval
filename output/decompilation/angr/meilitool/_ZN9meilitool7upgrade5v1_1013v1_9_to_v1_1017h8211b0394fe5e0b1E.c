long long meilitool::upgrade::v1_10::v1_9_to_v1_10(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x2b4]
    unsigned long long v2;  // [bp-0x2b0]
    char *v3;  // [sp-0x2a8], Other Possible Types: unsigned long
    char *v4;  // [sp-0x2a8]
    unsigned int v5;  // [bp-0x2a4]
    unsigned long long v6;  // [bp-0x2a0]
    void* v7;  // [bp-0x298]
    unsigned long long v8;  // [bp-0x288]
    unsigned long long v9;  // [bp-0x280]
    unsigned long long v10;  // [bp-0x278]
    unsigned long long v11;  // [bp-0x270]
    int v12;  // [bp-0x268]
    int v13;  // [bp-0x260]
    unsigned long long v14;  // [bp-0x258]
    int v15;  // [bp-0x248]
    unsigned long long v16;  // [bp-0x248]
    unsigned long long v17;  // [bp-0x240]
    char *v18;  // [bp-0x238]
    char v19;  // [sp-0x230], Other Possible Types: unsigned long, unsigned long long
    char *v20;  // [bp-0x228], Other Possible Types: void*, int, unsigned long long, unsigned int, unsigned long
    int v21;  // [bp-0x228]
    unsigned int v22;  // [bp-0x224]
    unsigned long long v23;  // [bp-0x220]
    char *v24;  // [bp-0x218], Other Possible Types: char, unsigned int, unsigned long long
    unsigned int v25;  // [bp-0x218]
    char *v26;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x218]
    char *v28;  // [bp-0x218]
    unsigned long v29;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned int v30;  // [bp-0x217]
    unsigned int v31;  // [bp-0x214]
    int v32;  // [bp-0x210], Other Possible Types: unsigned long long
    int v33;  // [bp-0x210]
    int v34;  // [bp-0x210]
    char *v35;  // [bp-0x208], Other Possible Types: unsigned long long, unsigned int
    char *v36;  // [bp-0x200], Other Possible Types: unsigned long long
    char *v37;  // [bp-0x1f8]
    unsigned long long v38;  // [bp-0x1f0]
    void* v41;  // [bp-0x168]
    unsigned long long v42;  // [bp-0x160]
    void* v43;  // [bp-0x158]
    unsigned long v44;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v45;  // [bp-0x148]
    unsigned int v46;  // [bp-0x13c]
    int v47;  // [bp-0x138], Other Possible Types: char
    char *v48;  // [bp-0x128]
    int v49;  // [bp-0x118], Other Possible Types: char
    unsigned long long v50;  // [bp-0x110]
    unsigned long long v51;  // [bp-0x108]
    unsigned long long v52;  // [bp-0x100]
    unsigned long long v53;  // [bp-0xf8]
    unsigned long long v54;  // [bp-0xf0]
    void* v55;  // [bp-0xe8]
    unsigned long long v56;  // [bp-0xe0]
    void* v57;  // [bp-0xd8]
    unsigned long long v58;  // [bp-0xc0]
    char v59;  // [bp-0xb8]
    void* v60;  // [bp-0x98]
    char v61;  // [bp-0x90]
    unsigned long long v62;  // [bp-0x88]
    unsigned long long v63;  // [bp-0x80]
    unsigned long long v64;  // [bp-0x78]
    unsigned long long v65;  // [bp-0x70]
    unsigned long long v66;  // [bp-0x68]
    unsigned long long v67;  // [bp-0x60]
    int v68;  // [bp-0x58], Other Possible Types: char
    char v69;  // [bp-0x48]
    unsigned long long v71;  // rdx
    unsigned long long v72;  // r13
    unsigned long long v73;  // rcx
    unsigned long long v74;  // r8
    int v75;  // ymm0
    uint256_t v76;  // ymm0
    uint256_t v77;  // ymm0
    unsigned int v78;  // eax
    unsigned long long v79;  // rax
    char *v80;  // r12
    char *v81;  // rbx
    unsigned long v82;  // r14
    unsigned long long v83;  // r13
    int v84;  // xmm0
    char *v85;  // rbx
    char *v86;  // r15
    int v87;  // xmm0
    unsigned long long v88;  // r15
    uint256_t v89;  // ymm0
    char *v90;  // rcx
    char *v91;  // r13
    char *v92;  // r14
    unsigned long v93;  // rbx
    unsigned long long v94;  // rbp
    char *v95;  // r14
    unsigned long long v96;  // rdx
    char v97;  // sil
    unsigned long long v98;  // [bp-0x268]

    v20 = &g_926058;
    v23 = 1;
    v24 = 8;
    *((uint128_t *)&v32) = 0;
    std::io::stdio::_print(&(char)v20);
    v61.join(a0, a1, "tasks", 5);
    v20 = 0;
    v24 = 0;
    v35 = 0;
    v32 = 429496729601;
    v0.open(&(char)v20, &v61);
    v72 = v71;
    if (!((char)v0.with_context(v62, v63) & 1))
    {
        v11 = v71;
        (char)v20.new(&v11, v71, v73, v74);
        v76 = v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v23);
        memcpy(&v0, &v23, 16);
        v3 = v32;
        if (v20 == 1)
        {
            v24 = v3;
            *((int128_t *)&v20) = *((int128_t *)&v0);
            v72 = (char)v20.from();
            goto LABEL_7570d9;
        }
        v48 = v3;
        v77 = v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
        memcpy(&v47, &v0, 16);
        meilitool::try_opening_database(&(char)v20, &v11, &v47);
        v72 = v23;
        if (!((char)v20 & 1))
        {
            meilitool::try_opening_database(&(char)v20, &v11, &v47);
            v0.with_context(&(char)v20, v62, v63);
            if ((v0 & 1))
            {
                v72 = v2;
                goto LABEL_7570cc;
            }
            v67 = v2;
            v46 = (int)v3;
            (char)v20.len(v23, v24, &v47);
            v88 = v71;
            if (!((char)(char)v20.context() & 1))
            {
                v58 = v71;
                v0.iter(v23, v24, &v47);
                v78 = *((int *)&v0);
                if (v78 != 5)
                {
                    v97 = (char)v3;
                    v31 = v5;
                    v30 = *((int *)((char *)&v3 + 1));
                    v20 = v78;
                    v22 = v1;
                    v23 = v2;
                    v24 = v97;
                    v88 = v20.from();
                    goto LABEL_7570c9;
                }
                v69.collect(v2, (char)v3);
                v41 = 0;
                v42 = 8;
                v43 = 0;
                v55 = 0;
                v56 = 8;
                v57 = 0;
                v59.into_iter(&v69);
                v60 = 0;
                (char)v49.next(&v59);
                v79 = v50;
                v64 = 9223372036854775809;
                if (v50 != 9223372036854775809)
                {
                    v80 = &v0;
                    v81 = &v19;
                    do
                    {
                        if (v79 == 0x8000000000000000)
                        {
                            *((int128_t *)&v20) = *((int128_t *)&v51);
                            v24 = v66;
                            v88 = (char)v20.from();
                            goto LABEL_7570a2;
                        }
                        v82 = v81;
                        v83 = *((long long *)&v49);
                        v84 = *((int128_t *)&v51);
                        v13 = v84;
                        v98 = v79;
                        v66 = v53;
                        v44 = v66;
                        v65 = v54;
                        v45 = v65;
                        v85 = v80;
                        v80.join(a0, a1, "indexes", 7);
                        (char)v20.spec_to_string(&v44);
                        v8.join(v2, v3, &(char)v20);
                        v86 = v85;
                        core::ptr::drop_in_place<std::path::PathBuf>(v85);
                        v19 = v83 + 1;
                        v87 = *((int128_t *)&v9);
                        v15 = v87;
                        v81 = v82;
                        v20 = v82;
                        v23 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v24 = &v58;
                        v32 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v35 = &v98;
                        v36 = <alloc::string::String as core::fmt::Display>::fmt;
                        v37 = &v16;
                        v38 = <std::path::Display as core::fmt::Display>::fmt;
                        v0 = &g_926068;
                        v2 = 5;
                        v7 = 0;
                        v4 = &(char)v20;
                        v6 = 4;
                        std::io::stdio::_print(v86);
                        v80 = v86;
                        v20 = 0;
                        v25 = 0;
                        v35 = 0;
                        v32 = 107374182401;
                        v86.open(&(char)v20, &v8);
                        v88 = v71;
                        if (((char)v80.with_context(v9, v10, &v98) & 1))
                        {
LABEL_75708e:
                            core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                            core::ptr::drop_in_place<alloc::string::String>(&v98);
LABEL_7570a2:
                            v59.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>();
                            v55.drop_in_place<alloc::vec::Vec<(alloc::string::String,uuid::Uuid)>>();
                        }
                        v19 = v71;
                        (char)v20.new(v81, v71, v73, v74);
                        v80.with_context(&(char)v20, v9, v10, &v98);
                        v88 = 5;
                        if (v0 != 2)
                        {
                            v16 = v0;
                            v17 = 5;
                            v18 = v4;
                            v20 = &g_9260b8;
                            v23 = 1;
                            v26 = 8;
                            v89 = ((v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            *((uint128_t *)&v33) = 0;
                            std::io::stdio::_print(&(char)v20);
                            meilitool::upgrade::v1_10::find_rest_embedders(&(char)v20, (long long)v13, v14, v81, &v16);
                            v88 = 1;
                            if (v20 == 0x8000000000000000)
                            {
                                core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v16);
                                goto LABEL_757081;
                            }
                        }
                        else
                        {
LABEL_757081:
                            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v19);
                            goto LABEL_75708e;
                        }
                        v90 = v26;
                        v0 = v20;
                        v2 = 1;
                        v3 = v90;
                        if (v90)
                        {
                            v29 = v14;
                            v77 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v98);
                            *((int128_t *)&v21) = *((int128_t *)&v98);
                            v36 = v3;
                            v32 = v0;
                            v35 = v2;
                            v41.push(&(char)v20);
                        }
                        else
                        {
                            v29 = v14;
                            v77 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v98);
                            *((int128_t *)&v21) = *((int128_t *)&v98);
                            v32 = v66;
                            v35 = v65;
                            v55.push(&(char)v20);
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v80);
                        }
                        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v16);
                        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(v81);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                        (char)v49.next(&v59);
                        v79 = v50;
                    } while (v50 != 9223372036854775809);
                }
                v59.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>();
                v20 = &g_9260c8;
                v23 = 1;
                v24 = 8;
                *((uint128_t *)&v32) = 0;
                std::io::stdio::_print(&(char)v20);
                v59.into_iter(&v55);
                v60 = 0;
                (char)v49.next(&v59);
                if (v50 != 0x8000000000000000)
                {
                    v91 = &v0;
                    v92 = &v44;
                    do
                    {
                        v93 = v92;
                        v94 = *((long long *)&v49);
                        v14 = v52;
                        *((int128_t *)&v12) = *((int128_t *)&v50);
                        memcpy(&v68, &v53, 16);
                        v95 = v91;
                        v91.join(a0, a1, "indexes", 7);
                        (char)v20.spec_to_string(&v68);
                        v8.join(v2, v3, &(char)v20);
                        core::ptr::drop_in_place<std::path::PathBuf>(v95);
                        v44 = v94 + 1;
                        v91 = v95;
                        *((int128_t *)&v15) = *((int128_t *)&v9);
                        v92 = v93;
                        v20 = v93;
                        v23 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v24 = &v58;
                        v32 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v35 = &v98;
                        v36 = <alloc::string::String as core::fmt::Display>::fmt;
                        v37 = &v16;
                        v38 = <std::path::Display as core::fmt::Display>::fmt;
                        v0 = &g_9260f8;
                        v2 = 5;
                        v7 = 0;
                        v3 = &(char)v20;
                        v6 = 4;
                        std::io::stdio::_print(v91);
                        v20 = 0;
                        v25 = 0;
                        v35 = 0;
                        v32 = 107374182401;
                        v91.open(&(char)v20, &v8);
                        v88 = v71;
                        if (((char)v91.with_context(v9, v10, &v98) & 1))
                        {
LABEL_757178:
                            core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                            core::ptr::drop_in_place<alloc::string::String>(&v98);
                            v59.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<(alloc::string::String,uuid::Uuid)>>>();
                        }
                        v44 = v71;
                        (char)v20.new(v92, v71, v73, v74);
                        v91.with_context(&(char)v20, v9, v10, &v98);
                        v88 = v2;
                        if (v0 == 2)
                        {
LABEL_75716b:
                            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v44);
                            goto LABEL_757178;
                        }
                        v16 = v0;
                        v17 = v88;
                        v18 = v3;
                        v20 = &g_926148;
                        v23 = 1;
                        v26 = 8;
                        *((uint128_t *)&v33) = 0;
                        std::io::stdio::_print(&(char)v20);
                        v96 = (long long)(&v12)[8];
                        v20 = v68;
                        v88 = meilitool::upgrade::v1_10::update_index_stats(v67, v46, v96, v14, &(char)v20, &v47);
                        if (!v88)
                        {
                            v20 = &g_926158;
                            v23 = 1;
                            v27 = 8;
                            *((uint128_t *)&v34) = 0;
                            std::io::stdio::_print(&(char)v20);
                            v88 = meilitool::upgrade::v1_10::update_date_format((long long)(&v12)[8], v14, v92, &v16);
                            if (v88)
                                goto LABEL_757161;
                            v28 = v18;
                            *((int128_t *)&v20) = *((int128_t *)&v16);
                            v91.commit(&(char)v20);
                            v88 = v91.with_context(v9, v10, &v98);
                            if (v88)
                                goto LABEL_75716b;
                        }
                        else
                        {
LABEL_757161:
                            core::ptr::drop_in_place<heed::txn::RwTxn>(&v16);
                            goto LABEL_75716b;
                        }
                        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(v92);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                        core::ptr::drop_in_place<alloc::string::String>(&v98);
                        (char)v49.next(&v59);
                    } while (v50 != 0x8000000000000000);
                }
                v59.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<(alloc::string::String,uuid::Uuid)>>>();
                v24 = v48;
                v20 = v47;
                v0.commit(&(char)v20);
                v72 = v0.context("while committing the write txn for the index-schedulerWhile trying to open while opening index  at ''while obtaining a write transaction for index \t- embedder `` in index `while obtaining a write transaction for index `while committing the write txn for index `` at Upgrading from v1.10.0 to v1.11.0\n]Updating embeddings for `while obtaining a read transaction for index Upgrading from v1.11.0 to v1.12.0\nUpgrading from v1.12.{0, 1, 2} to v1.12.3\nNot rebuilding field distribution as it wasn't corrupted coming from vwhile flushing update file bufwriter for update file ", 54);
                if (v72)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<alloc::string::String>)>>(&v41);
                    goto LABEL_7570d9;
                }
                else
                {
                    v20 = &g_926168;
                    v23 = 1;
                    v24 = 8;
                    *((uint128_t *)&v32) = 0;
                    std::io::stdio::_print(&(char)v20);
                    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<alloc::string::String>)>>(&v41);
                    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v11);
                    v72 = 0;
                }
            }
            else
            {
LABEL_7570c9:
                v72 = v88;
                goto LABEL_7570cc;
            }
        }
        else
        {
LABEL_7570cc:
            core::ptr::drop_in_place<heed::txn::RwTxn>(&v47);
LABEL_7570d9:
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v11);
        }
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v61);
    return v72;
}
