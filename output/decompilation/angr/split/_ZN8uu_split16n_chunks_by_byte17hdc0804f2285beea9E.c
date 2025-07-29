long long uu_split::n_chunks_by_byte(struct_0 *a0, unsigned int a1, unsigned long long a2[3], unsigned long a3, unsigned long a4)
{
    void* v0;  // [bp-0x1f0]
    unsigned long long v1;  // [bp-0x1e8]
    void* v2;  // [bp-0x1e0]
    unsigned long long v3;  // [bp-0x1d8]
    void* v4;  // [bp-0x1d0]
    char *v5;  // [bp-0x1c8], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x1b8]
    unsigned long long v8;  // [bp-0x1b0]
    unsigned long long v9[3];  // [bp-0x1a8]
    unsigned long long v10[3];  // [bp-0x1a0]
    char *v11;  // [bp-0x198], Other Possible Types: unsigned long long
    int v12;  // [bp-0x198]
    int v13;  // [bp-0x198]
    char *v14;  // [bp-0x190], Other Possible Types: unsigned long long [3]
    int v15;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned int v16;  // [bp-0x180]
    int v17;  // [bp-0x178]
    int v18;  // [bp-0x168]
    unsigned long long v19;  // [bp-0x158]
    unsigned long long v20;  // [bp-0x150]
    unsigned long long v21;  // [bp-0x148]
    unsigned long long v22;  // [bp-0x140]
    unsigned long long v23;  // [bp-0x138]
    void* v24;  // [bp-0x130]
    unsigned long long v25;  // [bp-0x128]
    void* v26;  // [bp-0x120]
    int v27;  // [bp-0x118], Other Possible Types: char
    unsigned long long v28;  // [bp-0x108]
    int v29;  // [bp-0x100]
    unsigned long long v30;  // [bp-0xf8]
    unsigned long long v31;  // [bp-0xf0]
    unsigned long v32;  // [bp-0xe0]
    unsigned long long v33;  // [bp-0xd0]
    unsigned long long v34[3];  // [bp-0xc8]
    char v35;  // [bp-0xc0]
    int v36;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v37;  // [bp-0xa8]
    int v38;  // [bp-0x98]
    unsigned long long v39;  // [bp-0x88]
    int v40;  // [bp-0x80]
    unsigned long long v41;  // [bp-0x70]
    char v42;  // [bp-0x68]
    unsigned long long v43;  // [bp-0x58]
    char v44;  // [bp-0x50]
    int v45;  // [bp-0x48], Other Possible Types: char
    char v46;  // [bp-0x38]
    unsigned long v48;  // r14
    unsigned long long v49[3];  // rdx
    unsigned long long v50[3];  // r15
    char *v51;  // r13
    unsigned long long v52[3];  // rdx
    unsigned long long v53[3];  // rax
    unsigned long long v55[3];  // r13
    unsigned long long v58[3];  // rbx
    unsigned long long v59[3];  // rbx
    unsigned long long v60[3];  // rax
    unsigned long long v61[3];  // r15
    unsigned long long v62;  // rax
    char *v63;  // rax
    unsigned long v64;  // r14
    unsigned long long v65[3];  // rbx
    unsigned long v66;  // r13
    unsigned long long v67[3];  // rax
    unsigned long long v68[3];  // rbx
    unsigned long v69;  // r14
    unsigned long long v70;  // rax
    unsigned long long v75[3];  // rbp
    int v76;  // xmm2
    int v77;  // xmm3

    v24 = 0;
    v25 = 1;
    v26 = 0;
    v48 = &a0->padding_10[96];
    v50 = v49;
    if (uu_split::get_input_size(v48, a1, &v24, a0->field_0, a0->field_8))
    {
        v51 = v49.from();
    }
    else
    {
        memcpy(&v42, &v25, 16);
        *((unsigned int *)&v43) = a1;
        v44 = 0;
        if (a3)
        {
            if (!v49 || !a2)
                goto LABEL_4b2197;
LABEL_4b2117:
            v11 = std::io::stdio::stdout();
            v3 = v11.lock();
            v4 = 0;
            v5 = 8;
            v6 = 0;
            if ((v49 | a2) >> 32)
            {
                v8 = ((unsigned long long)((0 CONCAT v49) % (uint128_t)a2) CONCAT (unsigned long long)((0 CONCAT v49) / (uint128_t)a2)) >> 64;
                v7 = (unsigned long long)((0 CONCAT v49) % (uint128_t)a2) CONCAT (unsigned long long)((0 CONCAT v49) / (uint128_t)a2);
                v9[0] = a2;
                v55 = a2;
                if (!a3)
                    goto LABEL_4b21bb;
            }
            else
            {
                *((unsigned int *)&v8) = ((unsigned int)((0 CONCAT (unsigned int)v49) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v49) / (a2 & 4294967295))) >> 32;
                v7 = ((unsigned int)((0 CONCAT (unsigned int)v49) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v49) / (a2 & 4294967295))) & 4294967295;
                v9[0] = a2;
                v55 = a2;
                if (!a3)
                {
LABEL_4b21bb:
                    v11.init(a2, a0, 0);
                    v51 = v14;
                    v23 = v11;
                    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
                        goto LABEL_4b263a;
                    v4.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                    v4 = v23;
                    v5 = v51;
                    v6 = v15;
                    v55[0] = v9;
                }
            }
            v33 = 1;
            v34[0] = v55;
            v35 = 0;
            if (!v33.spec_next())
            {
LABEL_4b267d:
                v4.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
                ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v24);
                return 0;
            }
            if (((char)a3 & 1))
            {
                while (true)
                {
                    v59 = v58;
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    if (!v50)
                        goto LABEL_4b2673;
                    v60 = v7 + ((char *)&v59[0] + 1 < v8);
                    if (v59 == v9)
                        v61 = v50;
                    else
                        v61 = v60;
                    v11 = &v42;
                    v14[0] = v61;
                    if (!(!std::io::default_read_to_end(&v11, &v0, 0, &v42)))
                        goto LABEL_4b2429;
                    if (v59 == a4)
                        break;
                    ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
                    v50 -= v49;
                    v58 = v49;
                    if (!v33.spec_next())
                        goto LABEL_4b267d;
                }
                v62 = v3.write_all(1, 0);
                if (!v62)
                    goto LABEL_4b2673;
                v63 = v62.from();
            }
            else
            {
                v32 = v48;
                v64 = v48;
                while (true)
                {
                    v65 = v58;
                    v48 = v64;
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    if (!v50)
                    {
LABEL_4b2673:
                        ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
                        goto LABEL_4b267d;
                    }
                    v66 = (char *)&v65[0] + 1;
                    v67 = v7 + (v66 < v8);
                    if (v65 == v9)
                        v67 = v50;
                    v11 = &v42;
                    v14[0] = v67;
                    if (std::io::default_read_to_end(&v11, &v0, 0, &v42))
                    {
LABEL_4b2429:
                        v10[0] = v75;
                        v11.to_vec("inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
                        v28 = v15;
                        memcpy(&v27, &v11, 16);
                        v11.clone(v48);
                        v39 = v28;
                        v38 = v27;
                        *((int128_t *)&v40) = *((int128_t *)&v11);
                        v41 = v15;
                        v11.to_vec("errorsplit-error-cannot-read-from-inputsplit-error-input-output-errorsplit-error-multi-character-separatorsplit-error-multiple-separator-characterssplit-error-filter-with-kth-chunksplit-error-invalid-io-block-size", 5);
                        v37 = v15;
                        memcpy(&v36, &v11, 16);
                        v11.spec_to_string(&v10);
                        v28 = v37;
                        v27 = v36;
                        *((int128_t *)&v29) = *((int128_t *)&v11);
                        v31 = v15;
                        v76 = *((int128_t *)&v39);
                        v77 = (int128_t)(&v40)[8];
                        v12 = v38;
                        v15 = v76;
                        v17 = v77;
                        v21 = v30;
                        v22 = v31;
                        v19 = v28;
                        v20 = (long long)v29;
                        v18 = v27;
                        v27.from_iter(&v11);
                        uucore::mods::locale::get_message_with_args(&v45, "split-error-cannot-read-from-inputsplit-error-input-output-errorsplit-error-multi-character-separatorsplit-error-multiple-separator-characterssplit-error-filter-with-kth-chunksplit-error-invalid-io-block-size", 34, &v27);
                        v16 = 1;
                        v13 = v45;
                        v15 = *((long long *)&v46);
                        v51 = v11.new();
                        ::0x4ad8d0::core::ptr::drop_in_place<std::io::error::Error>(v10);
                        goto LABEL_4b2630;
                    }
                    v11.get_writer(&v4, v66, a0);
                    v51 = v11;
                    v68 = v14;
                    if (!(!v11))
                        goto LABEL_4b2630;
                    v69 = v68[2];
                    if (0 < v68[0] - v69)
                    {
                        memcpy(v68[1] + v69, 0x1, 0);
                        v68[2] = v69;
                        goto LABEL_4b23d7;
                    }
                    if (v68.write_all_cold(1, 0))
                        break;
LABEL_4b23d7:
                    ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
                    v50 -= v49;
                    v64 = v32;
                    v58 = v49;
                    if (!v33.spec_next())
                        goto LABEL_4b267d;
                }
                v63 = v70.from();
            }
            v51 = v63;
LABEL_4b2630:
            ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
LABEL_4b263a:
            v4.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
        }
        else
        {
            if (v49 < a2)
                v52 = v49;
            else
                v52 = a2;
            v53 = v52;
            if (a0->field_a1)
                a2 = v53;
            else
                a2 = a2;
            if (!(!a2))
                goto LABEL_4b2117;
LABEL_4b2197:
            v51 = 0;
        }
    }
    ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v24);
    return v51;
}
