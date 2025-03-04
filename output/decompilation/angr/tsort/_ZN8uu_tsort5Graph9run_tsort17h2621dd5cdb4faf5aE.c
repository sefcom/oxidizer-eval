long long uu_tsort::Graph::run_tsort::h2621dd5cdb4faf5a(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0xe1]
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8]
    char v4;  // [bp-0xb8]
    unsigned long v5;  // [sp-0xb0]
    unsigned long long v6;  // [sp-0xa8]
    void* v7;  // [sp-0xa0]
    char v8;  // [bp-0x98]
    int v9;  // [sp-0x78]
    int v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    struct_2 *v21;  // rax
    unsigned long long v22;  // 4096
    struct_0 *v23;  // rbx
    struct_0 *v24;  // rcx

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h22ab93a426132a55(&v1, a1->field_18, 0);
    if (*((long long *)&v1))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, *((long long *)&v3)); /* do not return */
    v5 = *((long long *)&v2);
    v6 = *((long long *)&v3);
    v7 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hc8089db10f6b491b(&v1, a1);
    v11 = *((long long *)&v4);
    *((int128_t *)&v10) = *((int128_t *)&v3);
    *((int128_t *)&v9) = *((int128_t *)&v1);
    _$LT$alloc..collections..vec_deque..VecDeque$LT$T$GT$$u20$as$u20$alloc..collections..vec_deque..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::spec_from_iter::hf462620b0ae1bf0a(&v8, &v9);
    v15 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hade1d2ed3a63ca34(&v8);
    if (v16 >= 2)
    {
        if (v16 >= 21)
            core::slice::sort::unstable::ipnsort::hf51f3faef85c7917(v15, v16, &v0);
        else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::hb4368774700ae4a6(v15, v16, 1);
    }
    while (true)
    {
        do
        {
            v17 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h21c96a6c4f6a5b39(&v8);
            if (!v17)
            {
                if (a1->field_18)
                {
                    uu_tsort::Graph::detect_cycle::h0c5291f558dc399a(&v1, a1);
                    v24 = a0;
                    *((long long *)((char *)&v24->field_8 + 8)) = *((long long *)&v3);
                    *((int128_t *)&(&v24->field_0)[1]) = *((int128_t *)&v1);
                    v24->field_0 = 1;
                    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h1190539f0e1ad7fe(&v8);
                    ::0x4b5370::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h5f70d679a77a97ed(&v5);
                    v23 = a0;
                    return v23;
                }
                v23 = a0;
                *((void* *)((char *)&v23->field_8 + 8)) = v7;
                *((int128_t *)&(&v23->field_0)[1]) = *((int128_t *)&v5);
                v23->field_0 = 0;
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h1190539f0e1ad7fe(&v8);
                return v23;
            }
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbbd106ac298c97ce(&v5, v17, v16);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h7f917ab83a911431(&v12, a1, v17, v16);
        } while (*((long long *)&v12) == 0x8000000000000000);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha34f728323d6f0c1(&v1, &v12);
        v18 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f648d1fd42f1db6(&v1);
        if (v18)
        {
            v19 = v18;
            v20 = v16;
            do
            {
                v21 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h03536305409d1b4d(a1, v19, v20);
                if (!v21)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_521518); /* do not return */
                v22 = v21->field_28;
                v21->field_28 = v21->field_28 - 1;
                if (v22 == 1)
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hadb7dbb4bc596622(&v8, v19, v20);
                v19 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f648d1fd42f1db6(&v1);
                v20 = v16;
            } while (v19);
        }
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::hf9489df68880ab9d(&v1);
    }
}
