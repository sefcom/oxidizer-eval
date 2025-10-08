long long meilitool::hair_dryer(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0[3];  // [bp-0x700]
    unsigned int v1;  // [bp-0x6f4]
    unsigned long long v2;  // [bp-0x6f0]
    unsigned long long v3;  // [bp-0x6e0]
    char v4;  // [bp-0x6d8]
    unsigned long long v5;  // [bp-0x6c8]
    unsigned long long v6;  // [bp-0x6c0]
    unsigned long long v7;  // [bp-0x6b8]
    unsigned long long v8;  // [bp-0x6b0]
    char v9;  // [bp-0x6a8]
    unsigned long long v10;  // [bp-0x698]
    int v11;  // [bp-0x688]
    unsigned long long v12;  // [bp-0x678]
    unsigned long long v13;  // [bp-0x670]
    unsigned long long v14;  // [bp-0x668]
    unsigned long long v15;  // [bp-0x660]
    void* v16;  // [bp-0x658]
    unsigned long long v17;  // [bp-0x650]
    char v18;  // [bp-0x648]
    unsigned long v19;  // [bp-0x640]
    unsigned long long v20;  // [bp-0x638]
    char v21;  // [bp-0x630]
    unsigned long long v22;  // [bp-0x628]
    unsigned long long v23;  // [bp-0x620]
    void* v24;  // [bp-0x618]
    unsigned long long v25;  // [bp-0x610]
    unsigned int v26;  // [bp-0x608]
    unsigned int v27;  // [bp-0x600]
    unsigned int v28;  // [bp-0x5f8]
    unsigned long long v29;  // [bp-0x5f0]
    unsigned long v30;  // [bp-0x5e8]
    char v31;  // [bp-0x5e0]
    unsigned long long v32;  // [bp-0x5d8]
    unsigned long long v33;  // [bp-0x5d0]
    int v34;  // [bp-0x5c8]
    void* v35;  // [bp-0x5b8], Other Possible Types: unsigned int, unsigned long long, unsigned long
    unsigned int v36;  // [bp-0x5b8]
    char *v37;  // [bp-0x5b8], Other Possible Types: unsigned int
    unsigned int v38;  // [bp-0x5b4]
    int v39;  // [bp-0x5b0], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x5b0]
    char *v41;  // [bp-0x5a8], Other Possible Types: unsigned int, char, unsigned long long
    char *v42;  // [bp-0x5a8]
    unsigned int v44;  // [bp-0x5a7]
    unsigned int v45;  // [bp-0x5a4]
    int v46;  // [bp-0x5a0], Other Possible Types: unsigned long long
    char *v47;  // [bp-0x598], Other Possible Types: void*, unsigned int
    unsigned long long v48;  // [bp-0x590]
    char *v49;  // [sp-0x3e8], Other Possible Types: char, unsigned long
    char *v50;  // [sp-0x3e8], Other Possible Types: unsigned long
    unsigned int v51;  // [bp-0x3e4]
    unsigned long long v52;  // [sp-0x3e0]
    char *v53;  // [bp-0x3d8], Other Possible Types: unsigned long long
    int v54;  // [bp-0x3d7]
    unsigned int v55;  // [bp-0x3d4]
    unsigned long long v56;  // [bp-0x3d0]
    unsigned long long v57;  // [bp-0x3c8]
    unsigned long long v58;  // [bp-0x3c0]
    int v59;  // [bp-0x218]
    char *v60;  // [bp-0x200]
    unsigned long long v61;  // [bp-0x1f8]
    int v62;  // [bp-0x1f0]
    unsigned long long v63;  // [bp-0x98]
    char v64;  // [bp-0x90]
    unsigned long long v66[3];  // rbx
    unsigned long v67;  // r12
    unsigned long v68;  // r13
    unsigned long long v69;  // rdx
    unsigned long long v70;  // r14
    unsigned long long v71;  // r8
    int v72;  // ymm0
    uint256_t v73;  // ymm0
    uint256_t v74;  // ymm0
    unsigned int v75;  // eax
    unsigned long long v76;  // r14
    unsigned long long v77;  // r15
    char *v78;  // rdi
    char *v79;  // rsi
    uint256_t v80;  // ymm2
    uint256_t v81;  // ymm1
    char *v82;  // r14
    uint256_t v83;  // ymm0
    unsigned long long v84;  // rbx
    unsigned int v85;  // eax
    unsigned long long v86;  // rdi
    unsigned long long v87;  // r15
    int v88;  // xmm0
    uint256_t v89;  // ymm2
    int v90;  // xmm0
    int v91;  // xmm0
    uint256_t v92;  // ymm0
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // xmm2
    int v96;  // xmm2
    int v97;  // xmm2
    unsigned long long v98;  // rax
    char v99;  // sil
    char v100;  // sil

    v66 = a0;
    v67 = a0[1];
    v68 = a0[2];
    v21.join(v67, v68, "tasks", 5);
    v35 = 0;
    v41 = 0;
    v47 = 0;
    v46 = 429496729601;
    (char)v49.open(&(char)v35, &v21);
    if (((char)(char)v49.with_context(v22, v23) & 1))
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&v21);
        core::ptr::drop_in_place<std::path::PathBuf>(v66);
        return v69;
    }
    v2 = v69;
    v35 = &g_926f68;
    v39 = 1;
    v41 = 8;
    *((uint128_t *)&v46) = 0;
    std::io::stdio::_eprint(&(char)v35);
    (char)v35.new(&v2, a2, a3, v71);
    v73 = v72 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v39);
    memcpy(&(char)v49, &v39, 16);
    v53 = v46;
    if (v36 == 1)
    {
        v41 = v53;
        memcpy(&(char)v35, &(char)v49, 16);
        v70 = (char)v35.from();
    }
    else
    {
        v10 = v53;
        v74 = v73 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v49);
        memcpy(&v9, &(char)v49, 16);
        meilitool::try_opening_database(&(char)v35, &v2, &v9);
        v70 = v39;
        if (!((char)v35 & 1))
        {
            (char)v49.iter(v39, (unsigned int)v41, &v9);
            v75 = *((int *)&v49);
            if (v75 == 5)
            {
                v3 = v52;
                v4 = v53;
                v77 = a1 + a2 * 24;
                v78 = &v31;
                v79 = &v3;
                v19 = v77;
                v0[0] = a0;
                while (true)
                {
                    v78.next(v79);
                    if (*((int *)&v31) != 1)
                    {
                        core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v3);
                        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v9);
                        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v2);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v21);
                        core::ptr::drop_in_place<std::path::PathBuf>(v66);
                        return 0;
                    }
                    if (v32)
                    {
                        v74 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                        memcpy(&v59, &v34, 16);
                        v7 = v32;
                        v8 = v33;
                        v35 = v76;
                        v39 = v77;
                        if ((char)v35.any(&v7))
                        {
                            (char)v49.join(v67, v68, "indexes", 7);
                            (char)v35.spec_to_string(&v59);
                            v13.join(v52, v53, &(char)v35);
                            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v49);
                            v24 = 0;
                            v26 = 0;
                            v27 = 0;
                            v28 = 0;
                            (char)v35.new(&v24, &v13);
                            (char)v49.with_context(&(char)v35, v14, v15);
                            v70 = v52;
                            if (*((long long *)&v49))
                            {
                                ::libc.so.0::memcpy(&v62, &(char)v53, 448);
                                v60 = *((long long *)&v49);
                                v61 = v70;
                                v50 = &v7;
                                v52 = <&T as core::fmt::Display>::fmt;
                                v35 = &g_926f78;
                                v39 = 2;
                                v47 = 0;
                                v42 = &(char)v49;
                                v46 = 1;
                                std::io::stdio::_eprint(&(char)v35);
                                v82 = &v13;
                                (char)v35.read_txn(&v60, a2, a3, v71);
                                v83 = v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v39);
                                memcpy(&(char)v49, &v39, 16);
                                v53 = 1;
                                if (v36 != 1)
                                {
                                    v12 = v53;
                                    v74 = v83 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v50);
                                    memcpy(&v11, &(char)v49, 16);
                                    if (a3)
                                    {
                                        v84 = a3;
                                        do
                                        {
                                            v1 = 0;
                                            (char)v35.len(v63, *((int *)&v64), &v11);
                                            if (v36 == 5)
                                            {
                                                v5 = v39;
                                                v50 = &v7;
                                                v52 = <&T as core::fmt::Display>::fmt;
                                                v35 = &g_926f98;
                                                v39 = 2;
                                                v47 = 0;
                                                v42 = &(char)v49;
                                                v46 = 1;
                                                std::io::stdio::_eprint(&(char)v35);
                                                (char)v49.iter(v63, *((int *)&v64), &v11);
                                                v85 = (int)v49;
                                                if (v85 == 5)
                                                {
                                                    v20 = v84 - 1;
                                                    v16 = 0;
                                                    v17 = v52;
                                                    v18 = v53;
                                                    v66 = v0;
                                                    while (true)
                                                    {
                                                        v24.next(&v16);
                                                        if ((int)v24 != 1)
                                                            break;
                                                        v86 = *((long long *)&v26);
                                                        v6 = v25;
                                                        v87 = *((long long *)&v28);
                                                        if (v86)
                                                        {
                                                            v37 = v86.fold(*((long long *)&v27) + v86);
                                                            v1 += v37;
                                                            *((int *)&v37) = v40.fold(v29 + v40);
                                                            v1 += v36;
                                                            v82 = &v13;
                                                            if (__ROR__(15170602326218735249 * v6, 4) <= 1844674407370955)
                                                            {
                                                                v88 = v6;
                                                                v89 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4530000043300000;
                                                                v90 = InterleaveLOV((uint128_t)v89, v88);
                                                                v91 = v90 - 0x45300000000000004330000000000000;
                                                                v92 = (((v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v5;
                                                                v93 = InterleaveLOV((uint128_t)v89, (uint128_t)v92);
                                                                v94 = v93 - 0x45300000000000004330000000000000;
                                                                v74 = (v92 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                                                                v95 = v94;
                                                                v96 = (unsigned long long)(v94 >> 64) CONCAT (unsigned long long)(v95 >> 64);
                                                                v97 = AddV(v96, v94);
                                                                v80 = ((v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
                                                                v81 = ((((v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned long long)(v91 >> 64) CONCAT (unsigned long long)(v91 >> 64))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned long long)(v91 >> 64) CONCAT (unsigned long long)(v91 >> 64), v91))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV(AddV((unsigned long long)(v91 >> 64) CONCAT (unsigned long long)(v91 >> 64), v91), v97))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(DivV(AddV((unsigned long long)(v91 >> 64) CONCAT (unsigned long long)(v91 >> 64), v91), v97), 0x4059000000000000));
                                                                v30 = v81;
                                                                v37 = &v6;
                                                                v39 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                                                v41 = &v5;
                                                                v46 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                                                v47 = &v30;
                                                                v48 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                                                                v49 = &g_926fd8;
                                                                v52 = 4;
                                                                v57 = &g_553268;
                                                                v58 = 3;
                                                                v53 = &(unsigned int)v37;
                                                                v56 = 3;
                                                                std::io::stdio::_eprint(&(char)v49);
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v35 = *((long long *)&v27);
                                                            v40 = v87;
                                                            v41 = v29;
                                                            v70 = (char)v35.from();
                                                            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>>(&v16);
                                                            goto LABEL_761c35;
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    v99 = (char)v53;
                                                    v45 = v55;
                                                    v44 = (int)v54;
                                                    v35 = v85;
                                                    v38 = v51;
                                                    v39 = v52;
                                                    v41 = v99;
                                                    v66 = v0;
                                                    v98 = v35.from();
LABEL_761d97:
                                                    v70 = v98;
LABEL_761c35:
                                                    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v11);
                                                    goto LABEL_761c42;
                                                }
                                            }
                                            else
                                            {
                                                v35 = v36;
                                                *((int128_t *)&v39) = *((int128_t *)&v39);
                                                v66 = v0;
                                                v98 = v35.from();
                                                goto LABEL_761d97;
                                            }
                                            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>>(&v16);
                                            v84 = v20;
                                            v50 = &v1;
                                            v52 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                                            v35 = &g_926fb8;
                                            v39 = 2;
                                            v47 = 0;
                                            v41 = &(char)v49;
                                            v46 = 1;
                                            std::io::stdio::_eprint(&(char)v35);
                                        } while (v20);
                                    }
                                    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v11);
                                    core::ptr::drop_in_place<milli::index::Index>(&v60);
                                    core::ptr::drop_in_place<std::path::PathBuf>(v82);
                                    v76 = a1;
                                    v77 = v19;
                                    v78 = &v31;
                                    v79 = &v3;
                                    v66 = v0;
                                    continue;
                                }
                                else
                                {
                                    v41 = v53;
                                    memcpy(&(char)v35, &(char)v49, 16);
                                    v66 = v0;
                                    v70 = (char)v35.from();
LABEL_761c42:
                                    core::ptr::drop_in_place<milli::index::Index>(&v60);
                                }
                            }
                            else
                            {
                                v66 = v0;
                            }
                            core::ptr::drop_in_place<std::path::PathBuf>(&v13);
                            break;
                        }
                        else
                        {
                            v49 = &v7;
                            v52 = <&T as core::fmt::Display>::fmt;
                            v35 = &g_926f30;
                            v39 = 2;
                            v47 = 0;
                            v41 = &(char)v49;
                            v46 = 1;
                            std::io::stdio::_eprint(&(char)v35);
                            v76 = a1;
                            v78 = &v31;
                            v79 = &v3;
                        }
                    }
                    else
                    {
                        memcpy(&v39, &v34, 16);
                        v35 = v33;
                        v70 = (char)v35.from();
                        break;
                    }
                }
                core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v3);
            }
            else
            {
                v100 = v53;
                v45 = v55;
                v44 = *((int *)((char *)&v53 + 1));
                v35 = v75;
                v38 = v51;
                v39 = v52;
                v41 = v100;
                v70 = v35.from();
            }
        }
        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v9);
    }
    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v2);
    core::ptr::drop_in_place<std::path::PathBuf>(&v21);
    core::ptr::drop_in_place<std::path::PathBuf>(v66);
    return v70;
}
