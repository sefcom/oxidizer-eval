long long uu_dd::dd_copy(struct_3 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x2cb]
    char v1;  // [bp-0x2ca]
    char v2;  // [bp-0x2c9]
    struct_1 *v3;  // [bp-0x2c0]
    unsigned int v4;  // [bp-0x2b4]
    void* v5;  // [bp-0x2b0]
    void* v6;  // [bp-0x2a8]
    void* v7;  // [bp-0x2a0]
    void* v8;  // [bp-0x298]
    void* v9;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x290]
    void* v11;  // [bp-0x288]
    void* v12;  // [bp-0x280]
    void* v13;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x278]
    void* v15;  // [bp-0x270]
    unsigned long long v16[2];  // [bp-0x268]
    unsigned long long v17[2];  // [bp-0x268]
    unsigned long long v18[2];  // [bp-0x268]
    int v19;  // [bp-0x260], Other Possible Types: unsigned long long
    char *v20;  // [bp-0x258], Other Possible Types: int
    char v21;  // [bp-0x258]
    struct_0 *v22;  // [bp-0x250], Other Possible Types: unsigned long long
    int v23;  // [bp-0x248]
    unsigned long long v24;  // [bp-0x238]
    char v25;  // [bp-0x228]
    void* v26;  // [bp-0x218], Other Possible Types: unsigned long long
    int v27;  // [sp-0x218], Other Possible Types: char, unsigned long long
    int v28;  // [bp-0x210], Other Possible Types: unsigned long long
    int v29;  // [bp-0x208], Other Possible Types: char, unsigned long long
    struct_0 *v30;  // [bp-0x200], Other Possible Types: unsigned long long
    void* v31;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v32;  // [sp-0x1f8]
    char v34;  // [bp-0x1f0]
    int v35;  // [sp-0x1b8], Other Possible Types: char
    int v36;  // [bp-0x1ac]
    int v37;  // [bp-0x1a8], Other Possible Types: struct_0 *
    unsigned long long v38;  // [bp-0x198]
    void* v39;  // [bp-0x190]
    char v40;  // [bp-0x188]
    unsigned long long v41;  // [bp-0x180]
    unsigned long long v42;  // [bp-0x178]
    unsigned long long v43;  // [bp-0x170]
    unsigned long long v44;  // [bp-0x168]
    char v45;  // [bp-0x160]
    char *v46;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v47;  // [bp-0x140]
    unsigned long long v48;  // [bp-0x138]
    unsigned long long v49;  // [bp-0x130]
    int v50;  // [bp-0x128], Other Possible Types: char
    int v51;  // [bp-0x118]
    unsigned long long v52;  // [bp-0x108]
    unsigned long long v53;  // [bp-0x100]
    unsigned long long v54;  // [bp-0xf8]
    unsigned int v55;  // [bp-0xf0]
    int v56;  // [bp-0xe8], Other Possible Types: char
    char v57;  // [bp-0xe0]
    int v58;  // [bp-0xd8]
    unsigned long long v59;  // [bp-0x98]
    unsigned int v60;  // [bp-0x90]
    unsigned long long v61;  // [bp-0x88]
    unsigned long long v62;  // [bp-0x80]
    unsigned long long v63;  // [bp-0x78]
    unsigned int v64;  // [bp-0x70]
    unsigned long long v65;  // [bp-0x68]
    unsigned long long v66;  // [bp-0x60]
    unsigned long long v67;  // [bp-0x58]
    unsigned long long v68;  // [bp-0x50]
    char v69;  // [bp-0x48]
    struct_1 *v71;  // r13
    struct_0 *v72;  // r12
    char v73;  // al
    struct_2 *v75;  // rax
    int v76;  // xmm1
    int v77;  // xmm2
    struct_2 *v78;  // rax
    unsigned long long v80;  // r13
    unsigned long long v81;  // rbp
    unsigned long long v82;  // rbx
    char v83;  // r12b
    unsigned int v84;  // edx
    int v85;  // xmm0
    int v86;  // xmm1
    unsigned long long v87;  // r12
    char v88;  // bpl
    unsigned int v89;  // edx

    v71 = a1;
    v24 = std::time::Instant::now();
    v72 = a1->field_10;
    v38 = uu_dd::calc_bsize(a0->field_8->field_70, v72->field_78);
    std::sync::mpmc::channel(&v27);
    memcpy(&v25, &v27, 16);
    v73 = a0->field_8->field_a6;
    *((int128_t *)&v17[0]) = *((int128_t *)&v29);
    v21 = v73;
    v29 = 0x8000000000000000;
    v26 = 0;
    v34 = 0;
    v56.spawn_unchecked(&v26, &(char)v17);
    v50.expect(&v56);
    v0 = v72->field_93 ^ 1;
    if (a0->field_8->field_0 && (unsigned int)a0->field_8->field_0 != 1 || a0->field_8->field_8)
    {
        v40.from_elem(221, v38, &g_5dec58);
        v3 = a1;
        v45.with_interval(1, 0);
        v56.install_signal_handler(v45.manual_trigger_fn(), &g_5dea18);
        v75 = a0->field_8;
        if (*((int *)&v56) == 3)
        {
            v46 = &v57;
            if (v75->field_a6 != 2)
            {
                uucore::mods::locale::get_message(&v35, "dd-warning-signal-handlerFailed to join with the output thread./dev/stdout(uutils coreutils) 0.1.0dd-after-help", 25);
                *(v16) = &v35;
                v19 = <alloc::string::String as core::fmt::Display>::fmt;
                v20 = &v46;
                v22 = <&T as core::fmt::Display>::fmt;
                v26 = &g_5dec28;
                v28 = 3;
                v31 = 0;
                v29 = &v16;
                v30 = 2;
                std::io::stdio::_eprint(&v26);
                ::0x4cbd30::core::ptr::drop_in_place<alloc::string::String>(&v35);
                v75 = a0->field_8;
            }
        }
        v2 = v75->field_45;
        v1 = a1->field_10->field_9c;
        if (a1->field_10->field_a5)
        {
            v37 = a1->field_10;
            *((int128_t *)&v35) = *((int128_t *)&a1->field_0);
            v26.new(&(char)v35);
            v76 = *((int128_t *)&v29);
            v77 = *((int128_t *)&v31);
            *((int128_t *)&v17[0]) = *((int128_t *)&v26);
            v20 = v76;
            v23 = v77;
        }
        else
        {
            v22 = a1->field_10;
            *((int128_t *)&v19) = *((int128_t *)&a1->field_0);
            *(v18) = 0x8000000000000000;
        }
        v12 = 0;
        v11 = 0;
        v9 = 0;
        v8 = 0;
        v4 = 0;
        v7 = 0;
        v6 = 0;
        v5 = 0;
        v13 = 0;
        v39 = 0;
        v15 = 0;
    }
    else
    {
        v88 = 1;
        if (uu_dd::flush_caches_full_length(a0, a1))
        {
            v88 = 1;
            goto LABEL_4cf66e;
        }
        else
        {
            v30 = a1->field_10;
            *((int128_t *)&v28) = *((int128_t *)&a1->field_0);
            v27 = 0x8000000000000000;
            *((uint128_t *)&v36) = 0;
            *((uint128_t *)&v35) = 0;
            *((uint128_t *)&v20) = 0;
            *((uint128_t *)&v17[0]) = 0;
            v58 = v51;
            v56 = v50;
            v87 = uu_dd::finalize(&v27, &(char)v35, &(char)v17, v24, v89, &v25, &v56, v0);
            goto LABEL_4cf67b;
        }
    }
    while (true)
    {
        v78 = a0->field_8;
        if (v78->field_0)
        {
            if ((unsigned int)v78->field_0 == 1 && v7 >= v78->field_8)
                goto LABEL_4cf4b6;
        }
        else
        {
            if (!(v6 + v5 < v78->field_8))
                goto LABEL_4cf4b6;
        }
        uu_dd::read_helper(&v26, a0, &v40, uu_dd::calc_loop_bsize(v78->field_0, v78->field_8, v5, v6, v9, v8, v78->field_70, v38));
        v87 = v28;
        if ((int)v26 == 1)
        {
LABEL_4cf628:
            v71 = v3;
            core::ptr::drop_in_place<uu_dd::BlockWriter>(&(char)v17);
            core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v56);
            core::ptr::drop_in_place<uu_dd::Alarm>(&v45);
            ::0x4cbd60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
LABEL_4cf66e:
            ::0x4cc470::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v50);
LABEL_4cf67b:
            core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v25);
            if (v88)
                ::0x4cbcc0::core::ptr::drop_in_place<uu_dd::Output>(*((int *)&v71->field_0), *((int *)&v71->padding_1[3]));
        }
        else if (v87 || v29)
        {
            v80 = v30;
            v26.write_blocks(&(char)v17, v41, v42);
            if ((int)v26 != 1)
            {
                v81 = v29;
                v82 = v30;
                v43 = v31;
                v44 = (&v31)[1];
                if (v2)
                {
                    v15 >> 63.unwrap(&g_5dec70);
                    v80 >> 63.unwrap(&g_5dec88);
                    a0.discard_cache((unsigned int)v15, v80);
                }
                if (v1)
                {
                    v13 >> 63 || v39.unwrap(&g_5deca0);
                    v81 >> 63 || v82.unwrap(&g_5decb8);
                    (char)v17.discard_cache(v13, v81);
                }
                v15 += v80;
                v14 = v13 + v81;
                v39 = v39 + v82 + ((v13 + v81 <= v13 ? 1 : 0) & 1);
                v5 += v87;
                v6 += v29;
                v4 += (int)v31;
                v7 += v80;
                v11 += v43;
                v12 += v44;
                v10 = v9 + v81;
                v8 = v8 + v82 + ((v9 + v81 <= v9 ? 1 : 0) & 1);
                v83 = v45.get_trigger();
                v9 = v10;
                v13 = v14;
                if (v83 - 1 < 2)
                {
                    v61 = v5;
                    v62 = v6;
                    v63 = v7;
                    v64 = v4;
                    v65 = v10;
                    v66 = v8;
                    v67 = v11;
                    v68 = v12;
                    v59 = v24.elapsed();
                    v60 = v84;
                    v69 = v83 != 1;
                    v26.send(&v25, &v59, v12);
                    v9 = v10;
                    v13 = v14;
                }
            }
            else
            {
                v87 = v28;
                goto LABEL_4cf628;
            }
        }
        else
        {
LABEL_4cf4b6:
            v85 = v17;
            v86 = (int128_t)v20;
            v32 = v23;
            v29 = v86;
            v27 = v85;
            v52 = v5;
            v53 = v6;
            v54 = v7;
            v55 = v4;
            v47 = v8;
            v46 = v9;
            v48 = v11;
            v49 = v12;
            v37 = v51;
            v35 = v50;
            v87 = uu_dd::finalize(&v26, &v52, &v46, v24, v89, &v25, &(char)v35, v0);
            core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v56);
            core::ptr::drop_in_place<uu_dd::Alarm>(&v45);
            ::0x4cbd60::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
            core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v25);
            break;
        }
    }
    core::ptr::drop_in_place<uu_dd::Input>(a0->field_4);
    return v87;
}
