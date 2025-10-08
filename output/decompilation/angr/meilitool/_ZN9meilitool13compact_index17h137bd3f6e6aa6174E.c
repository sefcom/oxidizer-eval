long long meilitool::compact_index(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[3];  // [bp-0x5e0]
    unsigned int v1;  // [bp-0x5d4]
    void* v2;  // [bp-0x5d0]
    char v3;  // [bp-0x5c8]
    unsigned long long v4;  // [bp-0x5c0]
    unsigned long long v5;  // [bp-0x5b8]
    unsigned long long v6;  // [bp-0x5b0]
    char v7;  // [bp-0x5a8]
    char v8;  // [bp-0x5a0]
    unsigned long long v9;  // [bp-0x598]
    unsigned long long v10;  // [bp-0x590]
    char v11;  // [bp-0x588]
    unsigned long long v12;  // [bp-0x580]
    unsigned long long v13;  // [bp-0x578]
    unsigned long long v14;  // [bp-0x570]
    char v15;  // [bp-0x568]
    unsigned long long v16;  // [bp-0x558]
    char v17;  // [bp-0x548]
    unsigned long long v18;  // [bp-0x540]
    unsigned long long v19;  // [bp-0x538]
    unsigned long long v20;  // [bp-0x530]
    unsigned long long v21;  // [bp-0x528]
    unsigned long long v22;  // [bp-0x520]
    unsigned long v23;  // [bp-0x518]
    void* v24;  // [bp-0x510]
    void* v25;  // [bp-0x508]
    unsigned long long v26;  // [bp-0x500]
    unsigned long long v27;  // [bp-0x4f8]
    unsigned long long v28;  // [bp-0x4f0]
    unsigned long long v29;  // [bp-0x4e8]
    unsigned int v30;  // [bp-0x4e0]
    char *v31;  // [bp-0x4d8]
    unsigned long long v32;  // [bp-0x4d0]
    char *v33;  // [bp-0x4c8], Other Possible Types: char, unsigned long
    unsigned int v34;  // [bp-0x4c4]
    void* v35;  // [bp-0x4c0], Other Possible Types: unsigned long long
    char *v36;  // [bp-0x4b8], Other Possible Types: unsigned long long
    unsigned int v37;  // [bp-0x4b4]
    int v38;  // [bp-0x4b0], Other Possible Types: unsigned long long
    int v39;  // [bp-0x4b0]
    char *v40;  // [bp-0x4a8], Other Possible Types: unsigned long long
    unsigned long long v41;  // [bp-0x4a0]
    char v42;  // [bp-0x478]
    unsigned long long v43;  // [bp-0x2f0]
    unsigned long long v44;  // [bp-0x2e8]
    unsigned long long v45;  // [bp-0x2e0]
    int v46;  // [bp-0x2d8]
    void* v47;  // [bp-0x2c8], Other Possible Types: unsigned long
    unsigned int v48;  // [bp-0x2c4]
    void* v49;  // [bp-0x2c0], Other Possible Types: unsigned int, unsigned long long
    char *v50;  // [bp-0x2b8], Other Possible Types: unsigned int
    unsigned long long v51;  // [bp-0x2b8]
    unsigned int v52;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned int v53;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v54;  // [bp-0x2a0]
    char v55;  // [bp-0x278]
    int v56;  // [bp-0x218]
    void* v57;  // [sp-0x208], Other Possible Types: char *, unsigned long long, unsigned int, unsigned long
    unsigned int v58;  // [bp-0x204]
    void* v59;  // [bp-0x200], Other Possible Types: char, unsigned long long
    unsigned long long v60;  // [bp-0x200]
    unsigned int v61;  // [bp-0x1f8], Other Possible Types: unsigned long long, char
    char *v62;  // [bp-0x1f8]
    unsigned int v64;  // [bp-0x1f7]
    unsigned int v65;  // [bp-0x1f4]
    unsigned long long v66;  // [sp-0x1f0]
    void* v67;  // [bp-0x1e8], Other Possible Types: unsigned int
    unsigned long long v69[3];  // rbx
    unsigned long v70;  // r14
    unsigned long v71;  // r15
    void* v72;  // rdx
    void* v73;  // r12
    unsigned long long v74;  // rcx
    unsigned long long v75;  // r8
    unsigned int v76;  // eax
    void* v77;  // rax
    char v78;  // sil

    v69 = a0;
    v27 = a1;
    v28 = a2;
    v70 = a0[1];
    v71 = a0[2];
    v17.join(v70, v71, "tasks", 5);
    v57 = 0;
    v61 = 0;
    v67 = 0;
    v66 = 429496729601;
    v33.open(&(char)v57, &v17);
    v73 = v72;
    if (!((char)v33.with_context(v18, v19) & 1))
    {
        v2 = v72;
        (char)v57.new(&v2, a2, v74, v75);
        memcpy(&v33, &v59, 16);
        v36 = 429496729601;
        if (v57 == 1)
        {
            v61 = v36;
            memcpy(&(char)v57, &v33, 16);
            v73 = (char)v57.from();
        }
        else
        {
            v16 = v36;
            memcpy(&v15, &v33, 16);
            meilitool::try_opening_database(&(char)v57, &v2, &v15);
            v73 = v59;
            if (!((char)v57 & 1))
            {
                v33.iter(v59, v61, &v15);
                v76 = *((int *)&v33);
                if (v76 == 5)
                {
                    v0[0] = a0;
                    v6 = v35;
                    v7 = v36;
                    while (true)
                    {
                        v43.next(&v6);
                        if ((int)v43 != 1)
                            break;
                        if (!v44)
                        {
                            memcpy(&v59, &v46, 16);
                            v57 = v21;
                            v73 = (char)v57.from();
                            v69 = v0;
                            goto LABEL_75fafd;
                        }
                        v56 = v46;
                        v20 = v44;
                        v21 = v45;
                        if (!(char)v20.equal(v21, a1, a2))
                        {
                            v33 = &v20;
                            v35 = <&T as core::fmt::Display>::fmt;
                            v57 = &g_926da0;
                            v60 = 2;
                            v67 = 0;
                            v62 = &v33;
                            v66 = 1;
                            std::io::stdio::_eprint(&(char)v57);
                        }
                        else
                        {
                            v33 = &v20;
                            v35 = <&T as core::fmt::Display>::fmt;
                            v57 = &g_926dc0;
                            v59 = 2;
                            v67 = 0;
                            v62 = &v33;
                            v66 = 1;
                            std::io::stdio::_eprint(&(char)v57);
                            v33.join(v70, v71, "indexes", 7);
                            (char)v57.spec_to_string(&v56);
                            v3.join(v35, v36, &(char)v57);
                            core::ptr::drop_in_place<std::path::PathBuf>(&v33);
                            v47 = 0;
                            v50 = 0;
                            v52 = 0;
                            v53 = 0;
                            (char)v57.new(&(char)v47, &v3);
                            v33.with_context(&(char)v57, v4, v5);
                            v73 = v35;
                            if (!v33)
                            {
                                v69 = v0;
                                goto LABEL_75faf3;
                            }
                            ::libc.so.0::memcpy(&v61, &(char)v36, 448);
                            v57 = v33;
                            v59 = v73;
                            v33 = &g_926de0;
                            v35 = 1;
                            v36 = 8;
                            *((uint128_t *)&v38) = 0;
                            v69 = v0;
                            std::io::stdio::_eprint(&v33);
                            v33.write_txn(&(char)v57, a2, v74, v75);
                            (char)v47.context(&v33);
                            v73 = v49;
                            if (v47 == 2)
                            {
LABEL_75fae6:
                                core::ptr::drop_in_place<milli::index::Index>(&(char)v57);
LABEL_75faf3:
                                core::ptr::drop_in_place<std::path::PathBuf>(&v3);
LABEL_75fafd:
                                core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v6);
                                goto LABEL_75fb07;
                            }
                            v24 = v47;
                            v25 = v73;
                            v26 = v51;
                            v8.join(v4, v5, "data.mdb", 8);
                            v11.join(v4, v5, "data.mdb.cpyCompaction successful. Took around ", 12);
                            v33 = &g_926df0;
                            v35 = 1;
                            v36 = 8;
                            *((uint128_t *)&v38) = 0;
                            std::io::stdio::_eprint(&v33);
                            v29 = std::time::Instant::now();
                            v30 = (unsigned int)v72;
                            v33.copy_to_path(v57, &v11);
                            (char)v47.with_context(&v33, v12, v13);
                            if (((char)v47 & 1))
                            {
                                v73 = v49;
                                goto LABEL_75fac5;
                            }
                            v1 = v48;
                            v33.metadata(&v1);
                            if ((int)v33 == 2)
                            {
                                v73 = 1.from();
                            }
                            else
                            {
                                v14 = *((long long *)&v42);
                                std::fs::metadata(&v33, &v8);
                                (char)v47.with_context(&v33, v9, v10);
                                if ((int)v47 == 2)
                                {
                                    v73 = v49;
                                }
                                else
                                {
                                    v22 = *((long long *)&v55);
                                    v23 = DivV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, *((long long *)&v55)) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, *((long long *)&v55)) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, *((long long *)&v55)) - 0x45300000000000004330000000000000), AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v14) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v14) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v14) - 0x45300000000000004330000000000000));
                                    v47 = v29.elapsed();
                                    v49 = (unsigned int)v72;
                                    v31 = &(char)v47;
                                    v32 = <core::time::Duration as core::fmt::Debug>::fmt;
                                    v33 = &g_926e40;
                                    v35 = 2;
                                    v40 = &g_553208;
                                    v41 = 1;
                                    v36 = &v31;
                                    v38 = 1;
                                    std::io::stdio::_print(&v33);
                                    v33 = &v22;
                                    v35 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                    v36 = &v14;
                                    v38 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                    v40 = &v23;
                                    v41 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                                    v47 = &g_926e60;
                                    v49 = 4;
                                    v53 = &g_553268;
                                    v54 = 3;
                                    v50 = &v33;
                                    v52 = 3;
                                    std::io::stdio::_eprint(&(char)v47);
                                    v33 = &g_926e00;
                                    v35 = 1;
                                    v36 = 8;
                                    *((uint128_t *)&v39) = 0;
                                    std::io::stdio::_eprint(&v33);
                                    v73 = std::fs::rename(&v11, &v8).with_context(v12, v13, v9, v10);
                                    if (!v73)
                                    {
                                        core::ptr::drop_in_place<std::fs::File>(v1);
                                        v33 = &g_926e10;
                                        v35 = 1;
                                        v36 = 8;
                                        *((uint128_t *)&v38) = 0;
                                        v69 = v0;
                                        std::io::stdio::_print(&v33);
                                        v73 = 0;
LABEL_75fac5:
                                        core::ptr::drop_in_place<std::path::PathBuf>(&v11);
                                        core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                                        core::ptr::drop_in_place<heed::txn::RwTxn>(&v24);
                                        goto LABEL_75fae6;
                                    }
                                }
                            }
                            v69 = v0;
                            core::ptr::drop_in_place<std::fs::File>(v1);
                            goto LABEL_75fac5;
                        }
                    }
                    v69 = v0;
                    core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v6);
                    v33 = &v27;
                    v35 = <&T as core::fmt::Display>::fmt;
                    v57 = &g_926e20;
                    v59 = 2;
                    v67 = 0;
                    v62 = &v33;
                    v66 = 1;
                    v77 = anyhow::__private::format_err(&(char)v57);
                }
                else
                {
                    v78 = v36;
                    v65 = v37;
                    v64 = *((int *)((char *)&v36 + 1));
                    v57 = v76;
                    v58 = v34;
                    v59 = v35;
                    v61 = v78;
                    v77 = v57.from();
                }
                v73 = v77;
            }
LABEL_75fb07:
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v15);
        }
        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v2);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    core::ptr::drop_in_place<std::path::PathBuf>(v69);
    return v73;
}
