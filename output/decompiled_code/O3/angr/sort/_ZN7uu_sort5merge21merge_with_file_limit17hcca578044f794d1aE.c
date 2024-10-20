long long uu_sort::merge::merge_with_file_limit::hcca578044f794d1a(unsigned long a0, unsigned long long a1[4], struct_7 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct_9 *v161;  // r15
    unsigned long long v239;  // r14
    unsigned long long v240;  // rcx
    struct_0 *v247;  // r14
    unsigned long long v251;  // rbx
    unsigned long long v252;  // rdi
    unsigned long long v253;  // rbx
    unsigned long long v256;  // rdi
    unsigned long long v278;  // rdi
    unsigned long long v281;  // r14
    unsigned long long v283;  // rdi
    unsigned long long v289;  // rdi
    unsigned long long v293;  // rax
    struct_5 *v295;  // rbx
    unsigned long long v304;  // rax
    struct_1 *v305;  // rbx
    unsigned long long v309;  // rax
    unsigned long long v310;  // rdx
    unsigned long long v311;  // cc_dep2
    unsigned long long v313;  // rax
    unsigned long long v314;  // rax

    v239 = *((long long *)(vvar_279{reg 48} + 296));
    v240 = *((long long *)(vvar_279{reg 48} + 312));
    if (v240 != v239)
    {
        v247 = v239 + 8;
        do
        {
            v251 = (v240 - v239) / 24;
            if (v247->field_0)
            {
                v252 = v247->field_-8;
                vvar_1851{reg 48} = vvar_330{reg 48} - 8;
                *((char **)(vvar_330{reg 48} - 8)) = &g_4dca1d;
                __rust_dealloc(v252);
            }
        } while ((v247 += 24, v253 = v251 - 1, v251 != 1));
    }
    if (*((long long *)(vvar_304{reg 48} + 304)))
    {
        v256 = *((long long *)(vvar_279{reg 48} + 288));
        vvar_279{reg 48} = vvar_279{reg 48} - 8;
        *((char **)(vvar_279{reg 48} - 8)) = &g_4dca47;
        __rust_dealloc(v256);
    }
    vvar_389{reg 48} = vvar_322{reg 48} - 8;
    *((char **)(vvar_322{reg 48} - 8)) = &g_4dca51;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h015d7ac9d5634a6a(vvar_322{reg 48} + 80);
    if (*((long long *)(vvar_1934{reg 48} + 80)))
    {
        v278 = *((long long *)(vvar_389{reg 48} + 88));
        vvar_389{reg 48} = vvar_389{reg 48} - 8;
        *((char **)(vvar_389{reg 48} - 8)) = &g_4dca6f;
        __rust_dealloc(v278);
    }
    v281 = *((long long *)(vvar_389{reg 48} + 480)) + 1;
    while (true)
    {
        vvar_442{reg 48} = vvar_2386{reg 48};
        v283 = *((long long *)(vvar_389{reg 48} + 472));
        if (v281 == 1)
            break;
        v281 -= 1;
        vvar_389{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcaa2;
        _ZN4core3ptr117drop_in_place$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$17h137350f963315950E.llvm.13087432916844444399(v283);
    }
    if (*((long long *)(vvar_405{reg 48} + 464)))
    {
        v289 = *((long long *)(vvar_442{reg 48} + 472));
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcacf;
        __rust_dealloc(v289);
    }
    v293 = *((long long *)(vvar_442{reg 48} + 528));
    if (v293 == 2)
    {
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcafe;
        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h08abcbf4fb19bdb5(vvar_442{reg 48} + 536);
    }
    else
    {
        if ((unsigned int)v293 == 1)
        {
            vvar_442{reg 48} = vvar_442{reg 48} - 8;
            *((char **)(vvar_442{reg 48} - 8)) = &g_4dcaef;
            std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h2718c8c42cd45d9f(vvar_442{reg 48} + 536);
            goto LABEL_4dcb2e;
        }
        v295 = *((long long *)(vvar_442{reg 48} + 536));
        v295->field_208 = vvar_2360 - 1;
        if (CasCmpNE(v295->field_208, vvar_2360))
            goto LABEL_0x4dcb08;
        if ((Not ((vvar_2360 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcb1a;
        std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::he052d28d9855e826(v295);
        v295->field_210 = 1;
        if (CasCmpNE(v295->field_210, v295->field_210))
            goto LABEL_0x4dcb1c;
        if (!vvar_2361)
            goto LABEL_4dcb2e;
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcb2e;
        _ZN4core3ptr172drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$$GT$17h19380b8d307749b8E.llvm.17343790245676626513(v295);
    }
LABEL_4dcb2e:
    v304 = *((long long *)(vvar_442{reg 48} + 144));
    if (v304 == 2)
    {
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcb66;
        std::sync::mpmc::counter::Sender$LT$C$GT$::release::h2b76ec98a97a24c2(vvar_504{reg 48} + 152);
    }
    else
    {
        if ((unsigned int)v304 == 1)
        {
            vvar_442{reg 48} = vvar_442{reg 48} - 8;
            *((char **)(vvar_442{reg 48} - 8)) = &g_4dcb51;
            std::sync::mpmc::counter::Sender$LT$C$GT$::release::hf4f144f3b7052f8f(vvar_504{reg 48} + 152);
            goto LABEL_4dc914;
        }
        v305 = *((long long *)(vvar_442{reg 48} + 152));
        v305->field_200 = vvar_2363 - 1;
        if (CasCmpNE(v305->field_200, vvar_2363))
            goto LABEL_0x4dcb73;
        if ((Not ((vvar_2363 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
        do
        {
            v309 = v305->field_80;
            v310 = v309 | v305->field_190;
            v305->field_80 = v310;
            if (v309 == v305->field_80)
            {
                v305->field_80 = v310;
                v311 = v305->field_80;
            }
            else
            {
                v305->field_80 = v310;
                v311 = v305->field_80;
                v313 = v305->field_80;
            }
        } while ((v247 += 24, v253 = v251 - 1, v251 != 1));
        if (!(v314 & v305->field_190))
        {
            vvar_442{reg 48} = vvar_442{reg 48} - 8;
            *((char **)(vvar_442{reg 48} - 8)) = &g_4dcbb9;
            _ZN3std4sync4mpmc5waker9SyncWaker10disconnect17hed06c07e0ee88640E.llvm.7986240523035248243(&v305->padding_88[184]);
        }
        v305->field_210 = 1;
        if (CasCmpNE(v305->field_210, vvar_2364))
            goto LABEL_0x4dcbbb;
        if (!vvar_2364)
            goto LABEL_4dc914;
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((char **)(vvar_442{reg 48} - 8)) = &g_4dcbd4;
        _ZN4core3ptr172drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$$GT$17h19380b8d307749b8E.llvm.17343790245676626513(v305);
    }
LABEL_4dc914:
    v161 = *((long long *)(vvar_534{reg 48} + 72));
}
