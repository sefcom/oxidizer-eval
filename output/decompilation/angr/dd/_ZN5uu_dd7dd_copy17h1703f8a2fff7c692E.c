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
    struct_0 *v14;  // [bp-0x248]
    unsigned long v15;  // [bp-0x240]
    struct_0 *v16;  // [bp-0x23c]
    struct_0 *v17;  // [sp-0x238]
    struct_0 *v18;  // [sp-0x230]
    struct_0 *v19;  // [sp-0x228]
    unsigned long v20;  // [sp-0x218]
    struct_0 *v21;  // [sp-0x208]
    struct_0 *v22;  // [bp-0x1f8]
    unsigned long long v23;  // [sp-0x1f0]
    struct_0 *v24;  // [sp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x1e0]
    struct_0 *v26;  // [sp-0x1d8]
    struct_0 *v27;  // [bp-0x1d0], Other Possible Types: unsigned long long
    struct struct_0 **v28;  // [bp-0x1c8], Other Possible Types: struct_0 *, char
    struct_0 *v29;  // [sp-0x1c0], Other Possible Types: unsigned long long
    void* v30;  // [bp-0x1b8], Other Possible Types: struct_0 *
    unsigned long long v31;  // [sp-0x170]
    void* v32;  // [sp-0x168]
    char v33;  // [bp-0x160]
    char v34;  // [bp-0x150]
    char v35;  // [bp-0x148]
    char v36;  // [bp-0x140]
    char v37;  // [bp-0x138]
    unsigned long long v38;  // [sp-0x130]
    unsigned long long v39;  // [sp-0x128]
    char v40;  // [bp-0x120]
    struct_0 *v41;  // [bp-0x108]
    char v42;  // [bp-0x100]
    struct_0 *v43;  // [sp-0xf8]
    unsigned long v44;  // [sp-0xc8]
    unsigned long long v45;  // [sp-0xc0]
    unsigned long long v46;  // [sp-0xb8]
    unsigned int v47;  // [sp-0xb0]
    unsigned long v48;  // [sp-0xa8]
    unsigned int v49;  // [sp-0xa0]
    unsigned long long v50;  // [sp-0x98]
    unsigned long long v51;  // [sp-0x90]
    unsigned long long v52;  // [sp-0x88]
    unsigned int v53;  // [sp-0x80]
    struct_0 *v54;  // [sp-0x78]
    unsigned long long v55;  // [sp-0x70]
    unsigned long long v56;  // [sp-0x68]
    unsigned long long v57;  // [sp-0x60]
    char v58;  // [sp-0x58]
    struct_0 *v59;  // [sp-0x48]
    unsigned long long v60;  // [sp-0x38]
    struct_0 *v62;  // r15
    struct_0 *v63;  // al
    struct_1 *v64;  // rax
    char v66;  // bpl
    struct struct_0 *v67[3];  // rdx
    struct_1 *v69;  // rax
    struct struct_0 *v70[3];  // rcx
    struct_0 *v71;  // rax
    struct_0 *v72;  // xmm1
    struct_0 *v73;  // xmm2
    struct_1 *v74;  // rax
    unsigned long long v75;  // rdi
    unsigned long long v76;  // rsi
    struct struct_0 **v77;  // r14
    unsigned long v78;  // rbp
    struct struct_0 **v80;  // r13
    unsigned long long v81;  // rbx
    unsigned long long v82;  // 4102
    struct_0 *v83;  // 4138
    unsigned long long v84;  // rax
    char v85;  // bl
    unsigned int v86;  // edx
    struct_0 *v87;  // xmm0
    struct_0 *v88;  // xmm1
    unsigned long long v89;  // r12

    v20 = std::time::Instant::now::h9c8927e2f473c2b3();
    v62 = a1[2];
    v31 = uu_dd::calc_bsize::h13ab530ab475ef72(a0->field_8->field_70, v62->field_78);
    std::sync::mpmc::channel::h855ca8fb6aeda91c(&v26);
    *((int128_t *)&v21) = *((int128_t *)&v26);
    v63 = (&a0->field_8->padding_78)[1];
    *((int128_t *)&v14) = *((int128_t *)&v28);
    v17 = v63;
    v28 = 0x8000000000000000;
    v26 = 0;
    std::thread::Builder::spawn_unchecked::h860d342b6a02b1fe(&v41, &v26, &v14);
    ::0x4d6160::core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&v33, &v41);
    v1 = v62->field_93;
    v64 = a0->field_8;
    if (v64->field_0 && (unsigned int)v64->field_0 != 1 || v64->field_8)
    {
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&v35, 221, v31);
        uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(&v40);
        uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(&v41, uu_dd::Alarm::manual_trigger_fn::h737085a66dc3c163(&v40), &g_560fd8);
        v69 = a0->field_8;
        if (!v41)
        {
            v22 = &v42;
            if ((&v69->padding_78)[1] != 2)
            {
                v14 = &v22;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0f2d90884185144;
                v26 = &g_561138.field_0;
                v27 = 2;
                v30 = 0;
                v28 = &v14;
                v29 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v26);
                v69 = a0->field_8;
            }
        }
        v3 = v69->field_45;
        v70 = a1;
        v71 = v70[2];
        v2 = v71->field_9c;
        if (!v71->field_a5)
        {
            v18 = v70[2];
            *((int128_t *)&v18) = *((int128_t *)&v70[0]);
            v18 = 0x8000000000000000;
        }
        else
        {
            v24 = v70[2];
            *((int128_t *)&v22) = *((int128_t *)&v70[0]);
            uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(&v26, &v22);
            v72 = *((int128_t *)&v28);
            v73 = *((int128_t *)&v30);
            *((int128_t *)&v18) = *((int128_t *)&v26);
            v18 = v72;
            v19 = v73;
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
            v74 = a0->field_8;
            v75 = v74->field_0;
            if (!v75)
            {
                v76 = v74->field_8;
                if (!(v6 + v5 < v76))
                    goto LABEL_4d856e;
            }
            else if ((unsigned int)v75 != 1)
            {
                v76 = v74->field_8;
            }
            else
            {
                v76 = v74->field_8;
                if (!(v7 < v76))
                    goto LABEL_4d856e;
            }
            uu_dd::read_helper::h638d567deabbf60c(&v26, a0, &v35, uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(v75, v76, v5, v6, v9, v8, v74->field_70, v31));
            v89 = v27;
            if (v26)
                break;
            v77 = v28;
            v78 = v29;
            if (!(!v89) || !(!v77))
            {
                uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(&v26, &v14, *((long long *)&v36), *((long long *)&v37));
                if (v26)
                {
                    v89 = v27;
                    break;
                }
                v80 = v28;
                v81 = v29;
                v38 = v30;
                v39 = (&v30)[1];
                if (v3)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(v13 >> 63, &g_561158);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(v78 >> 63, &g_561170);
                    uu_dd::Input::discard_cache::h2bede2b9be5bf459(a0->field_0, a0->field_4, v13, v78);
                }
                if (v2)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(v12 >> 63 || v32, &g_561188);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(v80 >> 63 || v81, &g_5611a0);
                    uu_dd::BlockWriter::discard_cache::hd6a990a3b71c9db7(&v14, v12, v80);
                }
                v13 += v78;
                v82 = v12;
                v12 += v80;
                v32 = v32 + v81 + ((v82 + (char *)v80 <= v82 ? 1 : 0) & 1);
                v5 += v89;
                v6 += v77;
                v4 += (int)v30;
                v7 += v78;
                v10 += v38;
                v11 += v39;
                v83 = v9;
                v9 += v80;
                v8 = v8 + v81 + ((v83 + v80 <= v83 ? 1 : 0) & 1);
                v84 = uu_dd::Alarm::get_trigger::h51a33321f8d9afe9(&v40);
                if ((char)v84 == 1)
                {
                    v85 = 0;
LABEL_4d84c2:
                    v50 = v5;
                    v51 = v6;
                    v52 = v7;
                    v53 = v4;
                    v54 = v9;
                    v55 = v8;
                    v56 = v10;
                    v57 = v11;
                    v48 = std::time::Instant::elapsed::hd84d976472e03263(&v20);
                    v49 = v86;
                    v58 = v85;
                    std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&v26, &v21, &v48, v11);
                }
                else if ((unsigned int)v84 == 2)
                {
                    v85 = v81 & 0xffffffffffffff00 | 1;
                    goto LABEL_4d84c2;
                }
            }
            else
            {
LABEL_4d856e:
                v87 = *((int128_t *)&v18);
                v88 = *((int128_t *)&v18);
                v30 = v19;
                v28 = v88;
                v26 = v87;
                v44 = v5;
                v45 = v6;
                v46 = v7;
                v47 = v4;
                v23 = v8;
                v22 = v9;
                v24 = v10;
                v25 = v11;
                v60 = *((long long *)&v34);
                *((int128_t *)&v59) = *((int128_t *)&v33);
                v89 = uu_dd::finalize::hab8d4b3fb7143922(&v26, &v44, &v22, v20, v86, &v21, &v59, v0);
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&v41);
                core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc(&v40);
                ::0x4d5240::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&v35);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252(&v21);
                goto LABEL_4d875c;
            }
        }
        core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(&v14);
        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&v41);
        core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc(&v40);
        ::0x4d5240::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&v35);
        v66 = 0;
    }
    else
    {
        v89 = uu_dd::flush_caches_full_length::h852ee23a16d52f1f(a0, a1);
        if (v89)
        {
            v66 = (((vvar_170{reg 56} & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
        }
        else
        {
            v67 = a1;
            v29 = v67[2];
            *((int128_t *)&v27) = *((int128_t *)&v67[0]);
            v26 = 0x8000000000000000;
            *((uint128_t *)&v16) = 0;
            *((uint128_t *)&v14) = 0;
            *((uint128_t *)&v43) = 0;
            *((uint128_t *)&v41) = 0;
            v24 = *((long long *)&v34);
            *((int128_t *)&v22) = *((int128_t *)&v33);
            v89 = uu_dd::finalize::hab8d4b3fb7143922(&v26, &v14, &v41, v20, v86, &v21, &v22, v0);
            v66 = 0;
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252(&v21);
            if (v66)
            {
                ::0x4d51a0::core::ptr::drop_in_place$LT$uu_dd..Output$GT$::hdcd5f9e7ad84b1ee((int)a1[0], *((int *)((char *)&a1[0] + 4)));
                goto LABEL_4d875c;
            }
        }
    }
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(&v33);
LABEL_4d875c:
    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h02b6681dd6fb5196(a0->field_4);
    return v89;
}
