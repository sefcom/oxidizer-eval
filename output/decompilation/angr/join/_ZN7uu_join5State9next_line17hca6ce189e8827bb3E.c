long long uu_join::State::next_line::hca6ce189e8827bb3(struct_2 *a0, struct_1 *a1, char a2[2])
{
    char v0;  // [sp-0x159]
    char *v1;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned long v2;  // [sp-0x150], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [sp-0x148], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [sp-0x140]
    void* v5;  // [sp-0x138], Other Possible Types: char *, char
    unsigned long long v6;  // [sp-0x130]
    unsigned long v7;  // [sp-0x128]
    unsigned long long v8;  // [sp-0x120]
    int v9;  // [sp-0x118]
    int v10;  // [sp-0x108]
    int v11;  // [sp-0xf8]
    unsigned long long v12;  // [sp-0xe8]
    void* v13;  // [sp-0xd8]
    char *v14;  // [sp-0xd0]
    unsigned long long v15;  // [sp-0xc8]
    char *v16;  // [sp-0xc0], Other Possible Types: struct struct_0 **
    unsigned long long v17;  // [sp-0xb8]
    void* v18;  // [sp-0xb0]
    void* v19;  // [sp-0xa0], Other Possible Types: unsigned long
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
    unsigned int v31;  // rdx
    int v32;  // xmm0

    v28 = 0x8000000000000000;
    uu_join::State::read_line::hbc99b2e048ef8c59(&v1, a1);
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
            v13 = uu_join::State::get_current_key::h6b22667ac5a703a7(a1);
            v30 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(a2[0], v13, v31, uu_join::Line::get_field::h7dd14bed39768627(&v7, *((long long *)&a1->padding_28[16])), v31);
            if ((char)v30 == 1 && (v0 == 2 || a1->padding_48[11] && !a1->padding_48[10]))
            {
                v19 = 0;
                *((int128_t *)&v20) = *((int128_t *)&(&a1->padding_0)[1]);
                v21 = 0;
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v26, (long long)v10, (long long)(&v10)[8]);
                v1 = &v19;
                v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v3 = &a1->padding_48;
                v4 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v5 = &v26;
                v6 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd10f93617439d897;
                v14 = &g_532728;
                v15 = 3;
                v18 = 0;
                v16 = &v1;
                v17 = 3;
                core::option::Option$LT$T$GT$::map_or_else::h8935355a4f11714a(&v22, &v14);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h047006ab4df47656(&v26);
                *((int128_t *)&v11) = *((int128_t *)&v22);
                v12 = *((long long *)&v23);
                if (v0 == 2)
                {
                    *((unsigned long long *)&a0->padding_18[0]) = v12;
                    *((void*)&a0->field_8) = v11;
                    a0->field_0 = 9223372036854775809;
                    v30 = ::0x46c1e0::core::ptr::drop_in_place$LT$uu_join..Line$GT$::h9f6fb57b6249ddac(&v7);
                    return v30;
                }
                v19 = uucore::execution_phrase::h7a36a698673d06ab();
                *((unsigned int *)&v20) = v31;
                v14 = &v19;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
                v16 = &v11;
                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v1 = &g_532758;
                v2 = 3;
                v5 = 0;
                v3 = &v14;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
                a1->padding_48[10] = 1;
                v30 = ::0x46c330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf159c9483d4ed405(&v11);
            }
            v32 = *((int128_t *)&v7);
            *((void*)&a0->field_20) = v10;
            *((void*)&a0->field_10) = v9;
            *((void*)&a0->field_0) = v32;
            return v30;
        }
    }
    a0->field_0 = v28;
    return v30;
}
