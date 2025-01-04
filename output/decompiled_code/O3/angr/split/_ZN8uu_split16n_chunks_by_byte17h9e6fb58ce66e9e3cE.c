long long uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(struct_1 *a0, unsigned int a1, unsigned long long a2[3], unsigned long a3, unsigned long a4)
{
    void* v0;  // [sp-0x160]
    unsigned long long v1;  // [sp-0x158]
    void* v2;  // [sp-0x150]
    unsigned long v3;  // [sp-0x148], Other Possible Types: unsigned long long
    struct struct_0 **v4;  // [sp-0x140], Other Possible Types: void*
    struct struct_0 **v5;  // [sp-0x138], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x130], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0x128]
    struct struct_0 **v8;  // [sp-0x120], Other Possible Types: unsigned long long [3], unsigned long long
    char *v9;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned int v10;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x108]
    unsigned long long v12;  // [sp-0xf0]
    unsigned long long v13;  // [sp-0xe8]
    unsigned long long v14[3];  // [sp-0xe0]
    unsigned long long v15[3];  // [sp-0xd8]
    struct struct_0 **v16;  // [sp-0xd0]
    unsigned long long v17;  // [sp-0xc8]
    void* v18;  // [sp-0xc0]
    unsigned long long v19;  // [sp-0xb8]
    void* v20;  // [sp-0xb0]
    unsigned long long v21;  // [sp-0xa0]
    unsigned long long v22[3];  // [sp-0x98]
    char v23;  // [sp-0x90]
    struct struct_0 **v24;  // [sp-0x88]
    unsigned long long v25;  // [sp-0x78]
    char v26;  // [sp-0x70]
    unsigned long v27;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x60]
    struct struct_2 **v29;  // [sp-0x58]
    unsigned long long v30;  // [sp-0x50]
    char v31;  // [bp-0x48]
    char v32;  // [bp-0x38]
    unsigned long long v34[3];  // r14
    unsigned long long v35[3];  // rdx
    unsigned long long v36[3];  // r15
    struct struct_0 **v37;  // rax
    unsigned long long v40[3];  // rax
    unsigned long long v41;  // rsi
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // rax
    unsigned int v44;  // eax
    unsigned long long v45[3];  // r13
    unsigned long long v47[3];  // rbx
    unsigned long long v48[3];  // rbx
    unsigned long long v50[3];  // r15
    unsigned long long v51[3];  // rbx
    unsigned long long v52;  // r13
    unsigned long long v54[3];  // r15
    unsigned long long v55[3];  // rbx
    void* v56;  // rsi
    unsigned long v57;  // r13
    unsigned long long v58;  // r14
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61[3];  // rbp

    v18 = 0;
    v19 = 1;
    v20 = 0;
    v34 = &a0->padding_10[96];
    v36 = v35;
    if (uu_split::get_input_size::hff72b499bd50ee30(v34, a1, &v18, *((long long *)&a0->field_0), a0->field_8))
    {
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v35);
        ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v18);
        return v37;
    }
    *((int128_t *)&v24) = *((int128_t *)&v19);
    *((unsigned int *)&v25) = a1;
    v26 = 0;
    if (a3 != 1)
    {
        if (!(!v40))
            goto LABEL_4cd1f0;
    }
    else if (v35 && a2)
    {
LABEL_4cd1f0:
        v7 = std::io::stdio::stdout::h077da66234850927();
        v3 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v7, v41, v35);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        if ((v35 | a2) >> 32)
        {
            v42 = v35;
            v43 = (unsigned long long)((0 CONCAT v42) % (uint128_t)a2) CONCAT (unsigned long long)((0 CONCAT v42) / (uint128_t)a2);
            v13 = ((unsigned long long)((0 CONCAT v42) % (uint128_t)a2) CONCAT (unsigned long long)((0 CONCAT v42) / (uint128_t)a2)) >> 64;
        }
        else
        {
            v44 = (unsigned int)v35;
            v43 = ((unsigned int)((0 CONCAT v44) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v44) / (a2 & 4294967295))) & 4294967295;
            v13 = ((unsigned int)((0 CONCAT v44) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v44) / (a2 & 4294967295))) >> 32 & 4294967295;
        }
        v12 = v43;
        v14[0] = a2;
        if (a3 != 1)
        {
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&v7, a2, a0, 0);
            v37 = v8;
            v16 = v7;
            if (v16 == 0x8000000000000000)
                goto LABEL_4cd647;
            ::0x4c8ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&v4);
            v4 = v16;
            v5 = v37;
            v6 = v9;
            v45[0] = v14;
        }
        v21 = 1;
        v22[0] = v45;
        v23 = 0;
        if (!_$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&v21))
        {
LABEL_4cd608:
            ::0x4c8ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&v4);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(v3);
            ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v18);
            return 0;
        }
        if (!a3)
        {
            v17 = v34;
        }
        else
        {
            while (true)
            {
                v47 = v48;
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if (!v36)
                    goto LABEL_4cd5fe;
                if (v47 != v14)
                    v50 = v12 + ((char *)&v47[0] + 1 < v13);
                v7 = &v24;
                v8[0] = v50;
                if (!(!v40))
                    goto LABEL_4cd50e;
                if (v47 == a4)
                    break;
                ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v0);
                v36 -= v35;
                if (!_$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&v21))
                    goto LABEL_4cd608;
            }
            v60 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, v1, v2);
            if (!v60)
                goto LABEL_4cd5fe;
            v37 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v60);
            goto LABEL_4cd637;
        }
        while (true)
        {
            v51 = v48;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            if (!v36)
            {
LABEL_4cd5fe:
                ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v0);
                goto LABEL_4cd608;
            }
            v52 = (char *)&v51[0] + 1;
            if (v51 != v14)
                v54 = v12 + (v52 < v13);
            v7 = &v24;
            v8[0] = v54;
            if (std::io::default_read_to_end::h2406a85fdf2eff30())
            {
LABEL_4cd50e:
                v15[0] = v61;
                v27 = v34;
                v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v29 = &v15[0];
                v30 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v7 = &g_548580;
                v8 = 2;
                v11 = 0;
                v9 = &v27;
                v10 = 2;
                ::0x4c9580::core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&v31, 0, &v7);
                v10 = 1;
                *((int128_t *)&v7) = *((int128_t *)&v31);
                v9 = *((long long *)&v32);
                v37 = ::0x4c97b0::alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&v7);
                ::0x4c87b0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(v15);
                goto LABEL_4cd63d;
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&v7, &v4, v52, a0);
                v37 = v7;
                v55 = v8;
                if (!(!v40))
                    goto LABEL_4cd63d;
                v56 = v1;
                v57 = v2;
                v58 = v55[2];
                if (v57 < v55[0] - v58)
                {
                    memcpy(v55[1] + v58, v56, v57);
                    v55[2] = v58 + v57;
                    v17 = v17;
                    goto LABEL_4cd4e3;
                }
                v59 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h76ddc0e24b459a3f(v55, v56, v57);
                v17 = v17;
                if (v59)
                {
                    v37 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v59);
LABEL_4cd637:
LABEL_4cd63d:
                    ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v0);
LABEL_4cd647:
                    ::0x4c8ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&v4);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(v3);
                    ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v18);
                    return v37;
                }
LABEL_4cd4e3:
                ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v0);
                v36 -= v35;
                if (!_$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&v21))
                    goto LABEL_4cd608;
            }
        }
    }
    ::0x4c87f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v18);
    return v37;
}
