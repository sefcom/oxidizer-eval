long long uu_df::table::Table::new::h150da2e8fce38b34(struct_4 *a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x570]
    char v1;  // [bp-0x568]
    char v2;  // [bp-0x560]
    char *v3;  // [sp-0x558]
    struct_0 *v4;  // [sp-0x550]
    char v5;  // [sp-0x548]
    char v6;  // [bp-0x540]
    char v7;  // [bp-0x530]
    unsigned long long v8;  // [sp-0x528]
    unsigned long long v9;  // [sp-0x520]
    char v10;  // [bp-0x518]
    char v11;  // [bp-0x510]
    char v12;  // [bp-0x508]
    char v13;  // [bp-0x500]
    char v14;  // [bp-0x4f0]
    unsigned long v15;  // [sp-0x4e8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x4e0]
    void* v17;  // [sp-0x4d8]
    char *v18;  // [sp-0x4d0]
    char v19;  // [bp-0x4c8]
    char *v20;  // [bp-0x4a8]
    struct_0 *v21;  // [sp-0x4a0], Other Possible Types: unsigned long long
    char v22;  // [bp-0x498], Other Possible Types: unsigned long long
    char v23;  // [bp-0x3f0]
    char *v24;  // [bp-0x3b8]
    char *v25;  // [sp-0x3b0]
    void* v26;  // [sp-0x3a8], Other Possible Types: unsigned long long
    char *v27;  // [bp-0x2c8], Other Possible Types: char
    unsigned long long v28;  // [sp-0x2b8]
    char v29;  // [bp-0x1d8]
    char v30;  // [bp-0x108]
    unsigned long long v32;  // r14
    unsigned long long v33;  // r15
    struct_3 *v34;  // rax
    char *v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    char *v38;  // xmm0
    char *v39;  // xmm0
    struct_1 *v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42[3];  // rdx
    unsigned long long v43[3];  // rdx
    unsigned long long v44;  // r12
    unsigned long long v45;  // r13
    unsigned long long v47;  // rsi
    unsigned long long *v48;  // r14

    uu_df::table::Header::get_headers::h9deb63aa1bbc7ffc(&v13, a1);
    v32 = a1->field_8;
    v33 = a1->field_10;
    v15 = v32;
    v16 = v32 + v33;
    v17 = 0;
    v18 = &v13;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdd0d63c294815eaf(&v10, &v15);
    v34 = ::0x4ca3a0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
    if (!v34)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
    v8 = v33;
    v9 = v32;
    v34->field_10 = *((long long *)&v14);
    v35 = *((int128_t *)&v13);
    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
    *((char **)&v34->field_0) = v35;
    alloc::slice::hack::into_vec::h66565a3942fda66c(&v0, v34, 1);
    uu_df::table::Row::new::h8c73bfba9893cde9(&v29);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c80df5ce5ec3924(&v19, a2);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&v27, &v19);
    if (*((long long *)&v27) != 0x8000000000000000)
    {
        if (a1->field_51)
        {
            do
            {
                memcpy(&v20, &v27, 232);
                memcpy(&v24, &v27, 232);
                _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h3abce5fbf3fc5b59(&v30, &v24);
                v3 = &v30;
                v4 = a1;
                v5 = 0;
                uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&v6, &v3);
                memcpy(&v24, &v30, 208);
                _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h1c84c760c7ffbf98(&v29, &v24);
                v26 = *((long long *)&v7);
                v38 = *((int128_t *)&v6);
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                v24 = v38;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&v0, &v24);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&v27, &v19);
            } while (*((long long *)&v27) != 0x8000000000000000);
        }
        else
        {
            do
            {
                memcpy(&v20, &v27, 232);
                if (!*((long long *)&v23))
                {
                    ::0x4c9d80::core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::heb85b8cb09ae29f1(&v20);
                }
                else
                {
                    memcpy(&v24, &v27, 232);
                    _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h3abce5fbf3fc5b59(&v30, &v24);
                    v3 = &v30;
                    v4 = a1;
                    v5 = 0;
                    uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&v6, &v3);
                    memcpy(&v24, &v30, 208);
                    _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h1c84c760c7ffbf98(&v29, &v24);
                    v26 = *((long long *)&v7);
                    v39 = *((int128_t *)&v6);
                    v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                    v24 = v39;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&v0, &v24);
                }
            } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&v27, &v19), *((long long *)&v27) != 0x8000000000000000));
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_df..filesystem..Filesystem$GT$$GT$::h34738f1f8620436d(&v19);
    if (a1->field_53)
    {
        v20 = &v29;
        v21 = a1;
        v22 = 1;
        uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&v24, &v20);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&v0, &v24);
    }
    v20 = *((long long *)&v1);
    v21 = &v20[24 * *((long long *)&v2)];
    v40 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9feb0d036dbb7b0d(&v20);
    if (!v40)
    {
        v28 = *((long long *)&v2);
        *((int128_t *)&v27) = *((int128_t *)&v0);
        v22 = *((long long *)&v12);
        *((int128_t *)&v20) = *((int128_t *)&v10);
        uu_df::table::Table::get_alignments::hd7c942e203dd63ed(&v24, v9, v8);
        a0->field_10 = v26;
        a0->field_0 = *((int128_t *)&v24);
        (&a0->field_10)[1] = v27;
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v28;
        *((int128_t *)&a0->field_28) = *((int128_t *)&v20);
        *((unsigned long long *)&a0->field_30) = v22;
        core::ptr::drop_in_place$LT$uu_df..table..Row$GT$::h54411b51149585a8(&v29);
        return a0;
    }
    do
    {
        v24 = &v40->field_8->field_0;
        v25 = &v24[24 * v40->field_10];
        v26 = 0;
        v41 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h168fcdda2a16741a(&v24);
        if (v42)
        {
            v43 = v42;
            do
            {
                v44 = v43[1];
                v45 = v43[2];
                v47 = *((long long *)&v12);
                if (v41 >= v47)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(v41, v47, &g_541b70); /* do not return */
                v48 = *((long long *)&v11);
                if (unicode_width::str_width::hf245007b39258182(v44, v45, 0) > v48[v41])
                    v48[v41] = unicode_width::str_width::hf245007b39258182(v44, v45, 0);
                v41 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h168fcdda2a16741a(&v24);
                v43 = v42;
            } while (v42);
        }
    } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&v27, &v19), *((long long *)&v27) != 0x8000000000000000));
}
