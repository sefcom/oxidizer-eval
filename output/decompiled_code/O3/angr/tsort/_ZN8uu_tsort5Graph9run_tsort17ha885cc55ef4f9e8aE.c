long long uu_tsort::Graph::run_tsort::ha885cc55ef4f9e8a(struct_0 *a0, struct_2 *a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0xe1]
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8]
    char v4;  // [bp-0xb8]
    unsigned long v5;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xa8]
    void* v7;  // [sp-0xa0]
    char v8;  // [bp-0x98]
    int v9;  // [sp-0x78]
    int v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // r12
    struct_1 *v22;  // rax
    unsigned long long v23;  // 4096
    struct_0 *v24;  // rcx

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hf696ba448bc59b39(&v1, a1->field_18, 0);
    if (*((long long *)&v1))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = *((long long *)&v2);
    v6 = *((long long *)&v3);
    v7 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h416efdd88ebbcec4(&v1, a1);
    v11 = *((long long *)&v4);
    *((int128_t *)&v10) = *((int128_t *)&v3);
    *((int128_t *)&v9) = *((int128_t *)&v1);
    _$LT$alloc..collections..vec_deque..VecDeque$LT$T$GT$$u20$as$u20$alloc..collections..vec_deque..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::spec_from_iter::hdc774b33c0846ec1(&v8, &v9, v15);
    v16 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf628be21ccfe647a(&v8);
    if (v15 >= 2)
    {
        if (v15 >= 21)
            core::slice::sort::unstable::ipnsort::hc404d34b87534593(v16, v15, &v0, v17);
        else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h6a7dbdb59ccfd477(v16, v15, 1);
    }
    while (true)
    {
        do
        {
            v18 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hc8fea07637aadea8(&v8);
            if (!v18)
            {
                if (a1->field_18)
                {
                    uu_tsort::Graph::detect_cycle::hc7eae17e3f302d69(&v1, a1, v15);
                    v24 = a0;
                    *((long long *)((char *)&v24->field_8 + 8)) = *((long long *)&v3);
                    *((int128_t *)&(&v24->field_0)[1]) = *((int128_t *)&v1);
                    v24->field_0 = 1;
                    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h342bba876262a9c0(&v8);
                    ::0x4b57b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h523c1fd02a2a0dbd(&v5);
                    return a0;
                }
                a0 = a0;
                *((void* *)((char *)&a0->field_8 + 8)) = v7;
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v5);
                a0->field_0 = 0;
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h342bba876262a9c0(&v8);
                return a0;
            }
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdb8a4692775041ae(&v5, v18, v15);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::hff9d14d21dbddf4e(&v12, a1, v18, v15);
        } while (*((long long *)&v12) == 0x8000000000000000);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h264299a3b5387349(&v1, &v12);
        v19 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5fde7bf103e3a92(&v1);
        if (v19)
        {
            do
            {
                v21 = v20;
                v22 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h1070f8199d7ae068(a1, v19, v21);
                if (!v22)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v23 = v22->field_28;
                v22->field_28 = v22->field_28 - 1;
                if (v23 == 1)
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h179ce3179eee48e2(&v8, v19, v21);
                v19 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5fde7bf103e3a92(&v1);
            } while (v19);
        }
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h01e174afacdd4ee1(&v1);
    }
}
