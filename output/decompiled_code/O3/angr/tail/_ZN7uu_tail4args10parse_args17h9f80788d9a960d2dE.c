long long uu_tail::args::parse_args::h9f80788d9a960d2d(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x400]
    char v1;  // [bp-0x3f8]
    char v2;  // [bp-0x3f0]
    char v3;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x3e0]
    unsigned long v5;  // [sp-0x3d8], Other Possible Types: unsigned long long
    int v6;  // [sp-0x3d0]
    int v7;  // [sp-0x3c0]
    int v8;  // [sp-0x3b0]
    unsigned long long v9;  // [sp-0x3a0]
    int v10;  // [bp-0x398], Other Possible Types: unsigned int
    int v11;  // [sp-0x388]
    int v12;  // [sp-0x378]
    unsigned long long v13;  // [sp-0x368]
    int v14;  // [sp-0x358]
    int v15;  // [sp-0x348]
    int v16;  // [sp-0x338]
    unsigned long long v17;  // [sp-0x328]
    char v18;  // [bp-0x318]
    char v19;  // [bp-0x310]
    char v20;  // [bp-0x308]
    char v21;  // [bp-0x2f8]
    char v22;  // [bp-0x2e8]
    char v23;  // [bp-0x2e0]
    char v24;  // [bp-0x2d8]
    char v25;  // [bp-0x2d0]
    char v26;  // [bp-0x2c8]
    char v27;  // [bp-0x2b8]
    char v28;  // [bp-0x2a8]
    char v29;  // [bp-0x298]
    unsigned long v31;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36[6];  // r14
    unsigned long long v37;  // rdi
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rcx
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rcx
    int v46;  // xmm0
    int v47;  // xmm1
    int v48;  // xmm2

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd08834ddf646dbe5(&v0, a1, a2);
    uu_tail::args::uu_app::h631b09126fd7a1cd(&v23);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha8fc574574bae717(&v3, &v0);
    clap_builder::builder::command::Command::try_get_matches_from::h4c63156e4b89b375(&v18, &v23, &v3);
    if (*((long long *)&v18) == 0x8000000000000000)
    {
        v4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(*((long long *)&v19));
        v5 = v31;
        v3 = 5;
    }
    else
    {
        v13 = *((long long *)&v22);
        *((int128_t *)&v12) = *((int128_t *)&v21);
        *((int128_t *)&v11) = *((int128_t *)&v20);
        *((int128_t *)&v10) = *((int128_t *)&v18);
        uu_tail::args::Settings::from::hb09bad9e77397b18(&v23, &v10);
        if (v3 == 5)
        {
            *((unsigned long long *)&a0->padding_8[0]) = v4;
            a0->field_10 = v5;
            a0->field_0 = 5;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h52c83552d6561dd6(&v10);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h83de3770967c6084(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf61377112a24aecb(&v0);
            return a0;
        }
        v9 = *((long long *)&v29);
        *((int128_t *)&v8) = *((int128_t *)&v28);
        *((int128_t *)&v7) = *((int128_t *)&v27);
        *((int128_t *)&v6) = *((int128_t *)&v26);
        v3 = *((long long *)&v23);
        v4 = *((long long *)&v24);
        v5 = *((long long *)&v25);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h52c83552d6561dd6(&v10);
    }
    v35 = *((long long *)&v2);
    if ((v35 & -2) == 2)
    {
        v36 = *((long long *)&v1);
        if ((int)v3 == 5)
        {
LABEL_45560e:
            uu_tail::args::parse_obsolete::h853ccbb19cc6cbef();
            v43 = *((long long *)&v23);
            v44 = *((long long *)&v24);
            v45 = *((long long *)&v25);
            if (v43 == 6)
            {
                *((unsigned long long *)&a0->padding_8[0]) = v44;
                a0->field_10 = v45;
                a0->field_0 = 5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h165ffe1be895f9e7(&v3);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h83de3770967c6084(&v0);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf61377112a24aecb(&v0);
                return a0;
            }
            v17 = *((long long *)&v29);
            *((int128_t *)&v16) = *((int128_t *)&v28);
            *((int128_t *)&v15) = *((int128_t *)&v27);
            *((int128_t *)&v14) = *((int128_t *)&v26);
            if ((unsigned int)v43 == 5)
            {
                a0->field_28 = (int128_t)(&v8)[8];
                v46 = *((int128_t *)&v3);
                v47 = *((int128_t *)&v5);
                v48 = (int128_t)(&v6)[8];
                a0->field_20 = (int128_t)(&v7)[8];
                *((void*)&a0->field_18) = v48;
                *((void*)&a0->field_10) = v47;
                *((void*)&a0->field_0) = v46;
            }
            else
            {
                *((unsigned long long *)((char *)&a0->field_28 + 8)) = v17;
                *((void*)((char *)&a0->field_20 + 8)) = v16;
                *((void*)((char *)&a0->field_18 + 8)) = v15;
                *((void*)&(&a0->field_10)[1]) = v14;
                a0->field_0 = v43;
                *((unsigned long long *)&a0->padding_8[0]) = v44;
                a0->field_10 = v45;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h165ffe1be895f9e7(&v3);
            }
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h83de3770967c6084(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf61377112a24aecb(&v0);
            return a0;
        }
        else
        {
            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v23, v36[4], v36[5]);
            v37 = *((long long *)&v24);
            v38 = *((long long *)&v25);
            v10 = 43;
            v39 = *((long long *)&v23);
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h4f01df499cb7cd42(v37, v38, &v10, 1))
            {
                if (v39 != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha46f9862c3b09f7b();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h014eeaab42db4d7f(&v23);
                }
                v35 = *((long long *)&v2);
                goto LABEL_45560e;
            }
            else if (v39 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha46f9862c3b09f7b();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h014eeaab42db4d7f(&v23);
            }
        }
    }
    a0->field_28 = (int128_t)(&v8)[8];
    v40 = *((int128_t *)&v3);
    v41 = *((int128_t *)&v5);
    v42 = (int128_t)(&v6)[8];
    a0->field_20 = (int128_t)(&v7)[8];
    *((void*)&a0->field_18) = v42;
    *((void*)&a0->field_10) = v41;
    *((void*)&a0->field_0) = v40;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h83de3770967c6084(&v0);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf61377112a24aecb(&v0);
    return a0;
}
