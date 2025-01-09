long long uu_dd::dd_copy::h1703f8a2fff7c692(struct_2 *a0, struct struct_0 *a1[3])
{
    char v0;  // [bp-0x2c0]
    char v1;  // [sp-0x2ab]
    char v2;  // [sp-0x2aa]
    char v3;  // [sp-0x2a9]
    unsigned int v4;  // [sp-0x29c]
    void* v5;  // [sp-0x290]
    void* v6;  // [sp-0x288]
    void* v7;  // [sp-0x280]
    void* v8;  // [sp-0x278]
    struct_0 *v9;  // [sp-0x270]
    void* v10;  // [sp-0x268]
    void* v11;  // [sp-0x260]
    void* v12;  // [sp-0x258]
    void* v13;  // [sp-0x250]
    struct_0 *v14;  // [bp-0x248], Other Possible Types: unsigned long long
    struct_0 *v15;  // [bp-0x240], Other Possible Types: unsigned long
    struct_0 *v16;  // [bp-0x23c]
    struct_0 *v17;  // [sp-0x238]
    struct_0 *v18;  // [sp-0x230]
    struct_0 *v19;  // [sp-0x228]
    unsigned long v20;  // [sp-0x218], Other Possible Types: unsigned long long
    struct_0 *v21;  // [sp-0x208]
    struct_0 *v22;  // [bp-0x1f8]
    unsigned long long v23;  // [sp-0x1f0]
    struct_0 *v24;  // [sp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x1e0]
    struct_0 *v26;  // [bp-0x1d8], Other Possible Types: unsigned long long
    struct_0 *v27;  // [bp-0x1d0], Other Possible Types: unsigned long long
    struct_0 *v28;  // [bp-0x1c8], Other Possible Types: struct struct_0 **, char
    struct_0 *v29;  // [sp-0x1c0], Other Possible Types: unsigned long long
    void* v30;  // [bp-0x1b8], Other Possible Types: struct_0 *
    unsigned long long v31;  // [sp-0x170]
    void* v32;  // [sp-0x168]
    char v33;  // [bp-0x160]
    char v34;  // [bp-0x150]
    char v35;  // [bp-0x148]
    unsigned long long v36;  // [sp-0x130]
    unsigned long long v37;  // [sp-0x128]
    char v38;  // [bp-0x120]
    struct_0 *v39;  // [bp-0x108]
    char v40;  // [bp-0x100]
    struct_0 *v41;  // [sp-0xf8]
    unsigned long v42;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v43;  // [sp-0xc0]
    unsigned long long v44;  // [sp-0xb8]
    unsigned int v45;  // [sp-0xb0]
    unsigned long v46;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned int v47;  // [sp-0xa0]
    unsigned long long v48;  // [sp-0x98]
    unsigned long long v49;  // [sp-0x90]
    unsigned long long v50;  // [sp-0x88]
    unsigned int v51;  // [sp-0x80]
    struct_0 *v52;  // [sp-0x78]
    unsigned long long v53;  // [sp-0x70]
    unsigned long long v54;  // [sp-0x68]
    unsigned long long v55;  // [sp-0x60]
    char v56;  // [sp-0x58]
    struct_0 *v57;  // [sp-0x48]
    unsigned long long v58;  // [sp-0x38]
    struct_0 *v60;  // r15
    struct_0 *v61;  // al
    struct_1 *v62;  // rax
    unsigned long long v64;  // rax
    char v65;  // bpl
    struct struct_0 *v66[3];  // rdx
    struct_1 *v68;  // rax
    struct struct_0 *v69[3];  // rcx
    struct_0 *v70;  // rax
    struct_0 *v71;  // xmm1
    struct_0 *v72;  // xmm2
    struct_1 *v73;  // rax
    unsigned long long v74;  // rdi
    unsigned long long v75;  // rsi
    unsigned long long v76;  // r12
    unsigned long long v77;  // r12
    struct struct_0 **v78;  // r14
    unsigned long v79;  // rbp
    struct struct_0 **v81;  // r13
    unsigned long long v82;  // rbx
    unsigned long long v83;  // 4102
    struct_0 *v84;  // 4138
    unsigned long long v85;  // rax
    char v86;  // bl
    unsigned int v87;  // edx
    struct_0 *v88;  // xmm0
    struct_0 *v89;  // xmm1

    v20 = std::time::Instant::now::h9c8927e2f473c2b3();
    v60 = a1[2];
    v31 = uu_dd::calc_bsize::h13ab530ab475ef72(a0->field_8->field_70, v60->field_78);
    std::sync::mpmc::channel::h855ca8fb6aeda91c(&v26);
    *((int128_t *)&v21) = *((int128_t *)&v26);
    v61 = (&a0->field_8->padding_78)[1];
    *((int128_t *)&v14) = *((int128_t *)&v28);
    v17 = v61;
    v28 = 0x8000000000000000;
    v26 = 0;
    std::thread::Builder::spawn_unchecked::h860d342b6a02b1fe(&v39, &v26, &v14);
    ::0x4d6160::core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&v33, &v39);
    v1 = v60->field_93;
    v62 = a0->field_8;
    if (v62->field_0 && (unsigned int)v62->field_0 != 1 || v62->field_8)
    {
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&v35, 221, v31);
        uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(&v38);
        uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(&v39, uu_dd::Alarm::manual_trigger_fn::h737085a66dc3c163(&v38), &g_560fd8);
        v68 = a0->field_8;
        if (!v39)
        {
            v22 = &v40;
            if ((&v68->padding_78)[1] != 2)
            {
                v14 = &v22;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0f2d90884185144;
                v26 = &g_561138.field_0;
                v27 = 2;
                v30 = 0;
                v28 = &v14;
                v29 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v26);
                v68 = a0->field_8;
            }
        }
        v3 = v68->field_45;
        v69 = a1;
        v70 = v69[2];
        v2 = v70->field_9c;
        if (!v70->field_a5)
        {
            v18 = v69[2];
            *((int128_t *)&v15) = *((int128_t *)&v69[0]);
            v14 = 0x8000000000000000;
        }
        else
        {
            v24 = v69[2];
            *((int128_t *)&v22) = *((int128_t *)&v69[0]);
            uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(&v26, &v22);
            v71 = *((int128_t *)&v28);
            v72 = *((int128_t *)&v30);
            *((int128_t *)&v14) = *((int128_t *)&v26);
            v17 = v71;
            v19 = v72;
        }
        v11 = 0;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v4 = 0;
        v7 = 0;
        v6 = 0;
        v5 = 0;
        v12 = 0;
        v32 = 0;
        v13 = 0;
        while (true)
        {
            v73 = a0->field_8;
            v74 = v73->field_0;
            if (!v74)
            {
                v75 = v73->field_8;
                if (!(v7 < v75))
                    goto LABEL_4d856e;
            }
            else if ((unsigned int)v74 != 1)
            {
                v75 = v73->field_8;
            }
            else
            {
                v75 = v73->field_8;
                if (!(v7 < v75))
                    goto LABEL_4d856e;
            }
            uu_dd::read_helper::h638d567deabbf60c(&v26, a0, &v35, uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(v74, v75, v5, v6, v9, v8, v73->field_70, v31));
            v76 = v27;
            if (v26)
                break;
            v78 = v28;
            v79 = v29;
            if (!(!v76) || !(!v78))
            {
                uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(&v26, &v14);
                if (v26)
                {
                    v77 = v27;
                    break;
                }
                v81 = v28;
                v82 = v29;
                v36 = v30;
                v37 = (&v30)[1];
                if (v3)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(v13 >> 63, &g_561158);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(v79 >> 63, &g_561170);
                    uu_dd::Input::discard_cache::h2bede2b9be5bf459(a0->field_0, a0->field_4, v13, v79);
                }
                if (v2)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(-0x100 | (v12 >> 63 || v32), &g_561188);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(-0x100 | (v81 >> 63 || v82), &g_5611a0);
                    uu_dd::BlockWriter::discard_cache::hd6a990a3b71c9db7(&v14, v12, v81);
                }
                v13 += v79;
                v83 = v12;
                v12 += v81;
                v32 = v32 + v82 + ((v83 + (char *)v81 <= v83 ? 1 : 0) & 1);
                v5 += v76;
                v6 += v78;
                v4 += (int)v30;
                v7 += v79;
                v10 += v36;
                v11 += v37;
                v84 = v9;
                v9 += v81;
                v8 = v8 + v82 + ((v84 + v81 <= v84 ? 1 : 0) & 1);
                v85 = uu_dd::Alarm::get_trigger::h51a33321f8d9afe9(&v38);
                if ((char)v85 == 1)
                {
                    v86 = 0;
LABEL_4d84c2:
                    v48 = v5;
                    v49 = v6;
                    v50 = v7;
                    v51 = v4;
                    v52 = v9;
                    v53 = v8;
                    v54 = v10;
                    v55 = v11;
                    v46 = std::time::Instant::elapsed::hd84d976472e03263(&v20);
                    v47 = v87;
                    v56 = v86;
                    std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&v26, &v21, &v46, v11);
                }
                else if ((unsigned int)v85 == 2)
                {
                    v86 = v82 | -0x100 | 1;
                    goto LABEL_4d84c2;
                }
            }
            else
            {
LABEL_4d856e:
                v88 = *((int128_t *)&v14);
                v89 = *((int128_t *)&v17);
                v30 = v19;
                v28 = v89;
                v26 = v88;
                v42 = v5;
                v43 = v6;
                v44 = v7;
                v45 = v4;
                v23 = v8;
                v22 = v9;
                v24 = v10;
                v25 = v11;
                v58 = *((long long *)&v34);
                *((int128_t *)&v57) = *((int128_t *)&v33);
                v64 = uu_dd::finalize::hab8d4b3fb7143922(&v26, &v42, &v22, v20, v87, &v21, &v57, v0);
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&v39);
                core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc();
                ::0x4d5240::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&v35);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252();
                goto LABEL_4d875c;
            }
        }
        core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(&v14);
        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&v39);
        core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc();
        ::0x4d5240::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&v35);
        v65 = 0;
    }
    else
    {
        v64 = uu_dd::flush_caches_full_length::h852ee23a16d52f1f(a0, a1);
        if (v64)
        {
            v65 = vvar_172{reg 56} | -0x100 | 1 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
        }
        else
        {
            v66 = a1;
            v29 = v66[2];
            *((int128_t *)&v27) = *((int128_t *)&v66[0]);
            v26 = 0x8000000000000000;
            *((int128_t *)&v16) = 0;
            *((int128_t *)&v14) = 0;
            *((int128_t *)&v41) = 0;
            *((int128_t *)&v39) = 0;
            v24 = *((long long *)&v34);
            *((int128_t *)&v22) = *((int128_t *)&v33);
            v64 = uu_dd::finalize::hab8d4b3fb7143922(&v26, &v14, &v39, v20, v87, &v21, &v22, v0);
            v65 = 0;
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252();
            if (v65)
            {
                ::0x4d51a0::core::ptr::drop_in_place$LT$uu_dd..Output$GT$::hdcd5f9e7ad84b1ee((int)a1[0]);
                goto LABEL_4d875c;
            }
        }
    }
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(&v33);
LABEL_4d875c:
    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h02b6681dd6fb5196();
    return v64;
}
