long long uu_join::State::extend::h51589ed765d771bd(struct_1 *a0, struct_0 *a1, char *a2)
{
    unsigned int v0;  // [sp-0xf4]
    unsigned long long v1;  // [sp-0xf0]
    int v2;  // [bp-0xe8], Other Possible Types: char
    int v4;  // [bp-0xd8], Other Possible Types: unsigned long
    char v5;  // [bp-0xd0]
    int v6;  // [sp-0xc8]
    int v7;  // [sp-0xb8]
    unsigned long long v8;  // [sp-0xa8]
    unsigned long v9;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x90]
    int v11;  // [sp-0x88]
    int v12;  // [sp-0x78]
    unsigned long v13;  // [sp-0x60], Other Possible Types: unsigned long long
    int v14;  // [sp-0x58]
    unsigned long long v15;  // [sp-0x48]
    int v16;  // [sp-0x40]
    unsigned long long v18;  // rax
    int v19;  // ymm0
    int v20;  // ymm1
    int v21;  // ymm2
    int v22;  // xmm0
    int v23;  // xmm0
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // xmm1
    unsigned int v27;  // rdx
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2
    int v31;  // xmm0
    struct_1 *v32;  // rax
    struct_1 *v33;  // rcx

    uu_join::State::next_line::hca6ce189e8827bb3(&v2, a1, a2);
    v18 = *((long long *)&v2);
    if (v18 != 9223372036854775809)
    {
        v1 = 0x8000000000000000;
        v0 = *(a2);
        do
        {
            v8 = *((long long *)&v5);
            v22 = (int128_t)(&v2)[8];
            v7 = v22;
            v23 = v6;
            v16 = v23;
            v15 = v8;
            v24 = v7;
            v14 = v24;
            v13 = v18;
            if (v13 == v1)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v13);
                v32 = a0;
                v32->field_0 = v1;
                return v32;
            }
            v25 = (int128_t)(&v14)[8];
            v26 = v16;
            v12 = v26;
            v11 = v25;
            v9 = v13;
            v10 = (long long)v14;
            if ((char)uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(v0, uu_join::State::get_current_key::h6b22667ac5a703a7(a1), v27, uu_join::Line::get_field::h7dd14bed39768627(&v9, a1->field_40), v27))
            {
                v31 = *((int128_t *)&v9);
                v32 = a0;
                *((void*)&v32->field_20) = v12;
                *((void*)&v32->field_10) = v11;
                *((void*)&v32->field_0) = v31;
                return v32;
            }
            v28 = *((int128_t *)&v9);
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
            v29 = v11;
            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
            v30 = v12;
            v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            v6 = v30;
            v4 = v29;
            v2 = v28;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hb39c05ee85860ab5(a1, &v2);
            uu_join::State::next_line::hca6ce189e8827bb3(&v2, a1, a2);
            v18 = (long long)v2;
        } while (v18 != 9223372036854775809);
    }
    v8 = (long long)(&v4)[8];
    *((int128_t *)&v7) = (int128_t)(&v2)[8];
    v4 = v8;
    v2 = v7;
    v33 = a0;
    *((double *)&v33->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&v2);
    v33->field_10 = &g_5326b8;
    v33->field_0 = 9223372036854775809;
    return 9223372036854775809;
}
