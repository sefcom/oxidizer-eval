long long uu_dd::dd_copy(struct_2 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x2c1]
    unsigned int v1;  // [bp-0x2c0]
    char v2;  // [bp-0x2ba]
    char v3;  // [bp-0x2b9]
    unsigned int v4;  // [bp-0x2ac]
    void* v5;  // [bp-0x2a8]
    void* v6;  // [bp-0x2a0]
    void* v7;  // [bp-0x298]
    void* v8;  // [bp-0x290]
    void* v9;  // [bp-0x288]
    void* v10;  // [bp-0x280]
    void* v11;  // [bp-0x280]
    void* v12;  // [bp-0x278]
    void* v13;  // [bp-0x270]
    void* v14;  // [bp-0x268]
    void* v15;  // [bp-0x268]
    void* v16;  // [bp-0x260]
    int v17;  // [bp-0x258]
    char *v18;  // [bp-0x258]
    unsigned long long v19;  // [bp-0x258]
    int v20;  // [bp-0x250], Other Possible Types: unsigned long
    int v21;  // [bp-0x24c]
    int v22;  // [bp-0x248], Other Possible Types: char
    struct_0 *v23;  // [bp-0x240]
    int v24;  // [bp-0x238], Other Possible Types: char
    unsigned long long v25;  // [bp-0x228]
    unsigned long long v26;  // [bp-0x218]
    unsigned long long v27;  // [bp-0x210]
    int v28;  // [sp-0x208], Other Possible Types: char, unsigned long long
    void* v29;  // [bp-0x208]
    int v30;  // [bp-0x200], Other Possible Types: unsigned long long
    int v31;  // [bp-0x1f8], Other Possible Types: char, unsigned long long
    unsigned long v32;  // [bp-0x1f0], Other Possible Types: unsigned long long
    void* v33;  // [bp-0x1e8]
    int v34;  // [sp-0x1e8]
    char v36;  // [bp-0x1e0]
    char v37;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v38;  // [bp-0x198]
    unsigned long long v39;  // [bp-0x190]
    unsigned long long v40;  // [bp-0x188]
    unsigned long long v41;  // [bp-0x180]
    unsigned long long v42;  // [bp-0x178]
    void* v43;  // [bp-0x170]
    int v44;  // [bp-0x168], Other Possible Types: void*, char *
    void* v45;  // [bp-0x160]
    void* v46;  // [sp-0x158], Other Possible Types: unsigned long long
    void* v47;  // [bp-0x150]
    int v48;  // [bp-0x148], Other Possible Types: char
    unsigned long long v49;  // [bp-0x138]
    void* v50;  // [bp-0x130]
    unsigned long long v51;  // [bp-0x128]
    char v52;  // [bp-0x120]
    int v53;  // [bp-0x108], Other Possible Types: char
    char v54;  // [bp-0x100]
    uint128_t v55;  // [bp-0xf8]
    void* v56;  // [bp-0xc8]
    void* v57;  // [bp-0xc0]
    void* v58;  // [bp-0xb8]
    unsigned int v59;  // [bp-0xb0]
    unsigned long long v60;  // [bp-0xa8]
    unsigned int v61;  // [bp-0xa0]
    void* v62;  // [bp-0x98]
    void* v63;  // [bp-0x90]
    void* v64;  // [bp-0x88]
    unsigned int v65;  // [bp-0x80]
    void* v66;  // [bp-0x78]
    void* v67;  // [bp-0x70]
    void* v68;  // [bp-0x68]
    void* v69;  // [bp-0x60]
    char v70;  // [bp-0x58]
    int v71;  // [bp-0x48]
    unsigned long long v72;  // [bp-0x38]
    struct_0 *v74;  // r15
    char v75;  // al
    char v76;  // bpl
    unsigned long long v77;  // r15
    unsigned int v78;  // edx
    void* v80;  // rax
    int v81;  // xmm0
    void* v82;  // rax
    void* v83;  // rcx
    unsigned long long v85;  // rbp
    unsigned long long v86;  // r12
    unsigned long long v87;  // rbx
    char v88;  // r15b
    unsigned int v89;  // edx
    int v90;  // xmm0
    int v91;  // xmm1

    v25 = std::time::Instant::now();
    v74 = a1->field_10;
    v42 = uu_dd::calc_bsize((long long)a0->field_8[112], v74->field_78);
    std::sync::mpmc::channel(&v28);
    v26 = v28;
    v27 = v30;
    v75 = (char)a0->field_8[166];
    *((int128_t *)&v17) = *((int128_t *)&v31);
    v22 = v75;
    v31 = 0x8000000000000000;
    v29 = 0;
    v36 = 0;
    v53.spawn_unchecked(&v29, &(char)v17);
    v48.expect(&v53);
    v0 = v74->field_93 ^ 1;
    if (*((int *)a0->field_8) == 2 || (long long)a0->field_8[8])
    {
        v37.from_elem(221, v42, &g_53de40);
        v1 = (int)v52.with_interval(1, 0) & 0xffffff00 | 1;
        v53.install_signal_handler(v52.manual_trigger_fn());
        v80 = a0->field_8;
        if (!(long long)v53)
        {
            v44 = &v54;
            if ((char)v80[166] != 2)
            {
                v18 = &v44;
                v20 = <&T as core::fmt::Display>::fmt;
                v29 = &g_53de20;
                v30 = 2;
                v33 = 0;
                v31 = &v18;
                v32 = 1;
                std::io::stdio::_eprint(&v29);
                v80 = a0->field_8;
            }
        }
        v3 = (char)v80[69];
        v2 = a1->field_10->field_9c;
        if (a1->field_10->field_a5)
        {
            v29.new(a1);
            v81 = *((int128_t *)&v29);
            memcpy(&v24, &v33, 16);
            *((int128_t *)&v22) = *((int128_t *)&v31);
            v17 = v81;
        }
        else
        {
            v23 = a1->field_10;
            *((uint128_t *)&v20) = a1->field_0;
            v19 = 0x8000000000000000;
        }
        v40 = v26;
        v41 = v27;
        v13 = 0;
        v12 = 0;
        v10 = 0;
        v9 = 0;
        v4 = 0;
        v8 = 0;
        v7 = 0;
        v6 = 0;
        v14 = 0;
        v43 = 0;
        v16 = 0;
    }
    else
    {
        v76 = 1;
        if (uu_dd::flush_caches_full_length(a0, a1))
        {
            v76 = 1;
            goto LABEL_49178d;
        }
        else
        {
            v32 = (long long)v5[16];
            *((int128_t *)&v30) = *((int128_t *)v5);
            v28 = 0x8000000000000000;
            *((uint128_t *)&v21) = 0;
            *((uint128_t *)&v17) = 0;
            v55 = 0;
            *((uint128_t *)&v53) = 0;
            v46 = v49;
            v44 = v48;
            v77 = uu_dd::finalize(&v28, &(char)v17, &v53, v25, v78, v26, v27, &(char)v44, v0);
            goto LABEL_49179a;
        }
    }
    while (true)
    {
        v82 = a0->field_8;
        if (*((long long *)v82) != 2)
        {
            v83 = v7 + v6;
            if (((char)*((long long *)v82) & 1))
                v83 = v8;
            if (v83 >= (long long)v82[8])
                goto LABEL_4915d2;
        }
        uu_dd::read_helper(&v29, a0, &v37, uu_dd::calc_loop_bsize(*((long long *)v82), (long long)v82[8], v6, v7, v10, v9, (long long)v82[112], v42));
        v77 = v30;
        if ((int)v29 == 1)
        {
LABEL_491731:
            core::ptr::drop_in_place<uu_dd::BlockWriter>(&(char)v17);
            core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v53);
            core::ptr::drop_in_place<uu_dd::Alarm>(&v52);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v37, v38);
LABEL_49178d:
            core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v48);
LABEL_49179a:
            core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v26);
            if (v76)
                core::ptr::drop_in_place<uu_dd::Output>(*((int *)v5), (int)v5[4]);
        }
        else if (v77 || v31)
        {
            v85 = v32;
            v29.write_blocks(&(char)v17, v38, v39);
            if ((int)v29 != 1)
            {
                v86 = v31;
                v87 = v32;
                v50 = v33;
                v51 = *((long long *)&v36);
                if (v3)
                {
                    v16 >> 63.unwrap(&g_53de58);
                    v85 >> 63.unwrap(&g_53de70);
                    a0->field_0.discard_cache(a0->field_4, (unsigned int)v16, v85);
                }
                if (v2)
                {
                    v14 >> 63 || v43.unwrap(&g_53de88);
                    v86 >> 63 || v87.unwrap(&g_53dea0);
                    (char)v17.discard_cache(v14, v86);
                }
                v16 += v85;
                v15 = v14 + v86;
                v43 = v43 + v87 + ((v14 + v86 <= v14 ? 1 : 0) & 1);
                v6 += v77;
                v7 += v31;
                v4 += (int)v33;
                v8 += v85;
                v12 += v50;
                v13 += v51;
                v11 = v10 + v86;
                v9 = v9 + v87 + ((v10 + v86 <= v10 ? 1 : 0) & 1);
                v88 = v52.get_trigger();
                v10 = v11;
                v14 = v15;
                if (v88 - 1 < 2)
                {
                    v62 = v6;
                    v63 = v7;
                    v64 = v8;
                    v65 = v4;
                    v66 = v11;
                    v67 = v9;
                    v68 = v12;
                    v69 = v13;
                    v60 = v25.elapsed();
                    v61 = v89;
                    v70 = v88 != 1;
                    v29.send(v40, v41, &v60);
                    v10 = v11;
                    v14 = v15;
                }
            }
            else
            {
                v77 = v30;
                goto LABEL_491731;
            }
        }
        else
        {
LABEL_4915d2:
            v90 = (int128_t)v17;
            v91 = (int128_t)(&v20)[8];
            v34 = v24;
            v31 = v91;
            v28 = v90;
            v56 = v6;
            v57 = v7;
            v58 = v8;
            v59 = v4;
            v45 = v9;
            v44 = v10;
            v46 = v12;
            v47 = v13;
            v72 = v49;
            v71 = v48;
            v77 = uu_dd::finalize(&v29, &v56, &v44, v25, v78, v40, v41, &v71, v0);
            v1 = 0;
            core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v53);
            core::ptr::drop_in_place<uu_dd::Alarm>(&v52);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v37, v38);
            core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v26);
            break;
        }
    }
    core::ptr::drop_in_place<uu_dd::Input>(a0->field_4);
    return v77;
}
