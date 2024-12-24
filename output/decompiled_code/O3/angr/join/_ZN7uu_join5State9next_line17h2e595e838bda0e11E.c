long long uu_join::State::next_line::h2e595e838bda0e11(struct_0 *a0, struct_1 *a1, char a2[2])
{
    char v0;  // [sp-0x159]
    char v1;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x150], Other Possible Types: unsigned long long
    char v3;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x140]
    void* v5;  // [bp-0x138], Other Possible Types: char, unsigned long long
    unsigned long long v6;  // [sp-0x130]
    unsigned long v7;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x120]
    int v9;  // [sp-0x118]
    int v10;  // [sp-0x108]
    int v11;  // [sp-0xf8]
    unsigned long long v12;  // [sp-0xe8]
    void* v13;  // [sp-0xd8]
    unsigned long v14;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xc8]
    unsigned long long v16;  // [sp-0xc0]
    unsigned long long v17;  // [sp-0xb8]
    void* v18;  // [sp-0xb0]
    void* v19;  // [sp-0xa0], Other Possible Types: unsigned long, unsigned long long
    int v20;  // [bp-0x98], Other Possible Types: unsigned long
    char v21;  // [sp-0x88]
    char v22;  // [bp-0x80]
    char v23;  // [bp-0x70]
    int v24;  // [sp-0x68]
    int v25;  // [sp-0x58]
    char v26;  // [bp-0x48]
    unsigned long long v28;  // r13
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    unsigned long v31;  // rdx
    unsigned long long v32;  // rsi
    int v33;  // xmm0

    v28 = 0x8000000000000000;
    uu_join::State::read_line::h665bb9ebc53f5b93(&v1, a1, a2 + 1);
    v29 = v1;
    v30 = v2;
    if (v29 == 9223372036854775809)
    {
        a0->field_8 = 0x8000000000000000;
        a0->field_10 = v30;
        v28 = 9223372036854775809;
    }
    else
    {
        *((int128_t *)&v25) = *((int128_t *)&v5);
        *((int128_t *)&v24) = *((int128_t *)&v3);
        if (v29 != 0x8000000000000000)
        {
            v7 = v29;
            v8 = v30;
            v10 = v25;
            v9 = v24;
            v0 = a2[1];
            if (v0 == 1)
            {
                v30 = v7;
                *((void*)&a0->field_20) = v10;
                *((void*)&a0->field_10) = v9;
                a0->field_0 = v30;
                a0->field_8 = v8;
                return v30;
            }
            v13 = uu_join::State::get_current_key::h4148c5666ccca327(a1);
            v30 = uu_join::Input$LT$Sep$GT$::compare::h261f74b1101789a8(a2[0], v13, v31, uu_join::Line::get_field::h39d63660a434080d(&v7, *((long long *)&a1->padding_28[16])), v31);
            if ((char)v30 == 1 && (v0 == 2 || a1->padding_48[11] && !a1->padding_48[10]))
            {
                v19 = 0;
                *((int128_t *)&v20) = *((int128_t *)&(&a1->padding_0)[1]);
                v21 = 0;
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v26, (long long)v10, (long long)(&v10)[8]);
                v1 = &v19;
                v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v3 = &a1->padding_48;
                v4 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v5 = &v26;
                v6 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7b2694406563a999;
                v14 = &g_5332c8;
                v15 = 3;
                v18 = 0;
                v16 = &v1;
                v17 = 3;
                core::option::Option$LT$T$GT$::map_or_else::hc169cedaa4ca1c42(&v22, &v14);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hfb30bd98f9c459d6(&v26);
                *((int128_t *)&v11) = *((int128_t *)&v22);
                v12 = *((long long *)&v23);
                if (v0 == 2)
                {
                    *((unsigned long long *)&a0->padding_18[0]) = v12;
                    *((void*)&a0->field_8) = v11;
                    a0->field_0 = 9223372036854775809;
                    v30 = ::0x46c3b0::core::ptr::drop_in_place$LT$uu_join..Line$GT$::ha3d1a35a0a3d3a48(&v7);
                    return v30;
                }
                v19 = uucore::execution_phrase::h54f12bf70b2cca36();
                v20 = v31;
                v14 = &v19;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h338ded74354255ed;
                v16 = &v11;
                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v1 = &g_5332f8;
                v2 = 3;
                v5 = 0;
                v3 = &v14;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v32, v31);
                a1->padding_48[10] = 1;
                v30 = ::0x46c500::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h006a2e88aa63e631(&v11);
            }
            v33 = *((int128_t *)&v7);
            *((void*)&a0->field_20) = v10;
            *((void*)&a0->field_10) = v9;
            *((void*)&a0->field_0) = v33;
            return v30;
        }
    }
    a0->field_0 = v28;
    return v30;
}
