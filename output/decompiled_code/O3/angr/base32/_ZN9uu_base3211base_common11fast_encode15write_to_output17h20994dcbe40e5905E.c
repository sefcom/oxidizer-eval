long long uu_base32::base_common::fast_encode::write_to_output::h20994dcbe40e5905(unsigned long a0, unsigned long long a1[4], unsigned long long a2, struct_1 *a3, char a4)
{
    struct struct_0 **v0;  // [sp-0x40]
    struct struct_0 **v2;  // r14
    unsigned long v3;  // r13
    void* v4;  // rax
    void* v5;  // rax
    unsigned long v6;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r14
    void* v10;  // r12
    void* v11;  // r12
    char *v13;  // r14
    char v14;  // r8b
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // r12
    void* v18;  // rcx

    v2 = a3->field_38;
    if (a1[0] != 0x8000000000000000)
    {
        v3 = a1[3];
        v4 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h0acaa4f13922ec3c(a1);
        v0 = v2;
        v8 = v6 - (!(v6 | v3) >> 32 ? (0 CONCAT (unsigned int)v6) /m (unsigned int)v3 >> 32 & 4294967295 : (0 CONCAT v6) /m v3 >> 64);
        if (v8 < v3)
        {
            v9 = a1[2];
            v10 = 0;
        }
        else
        {
            v9 = a1[2];
            v11 = 0;
            do
            {
                if (a1[0] - v9 < v3)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb53a982b2a596a31(a1, v9, v3);
                memcpy(a1[2] + a1[1], v4, v3);
                v13 = a1[2] + v3;
                a1[2] = v13;
                if (v13 == a1[0])
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h66a46631e7372f31(a1);
                v4 += v3;
                v13[a1[1]] = 10;
                v9 = v13 + 1;
                a1[2] = v9;
                v11 -= v3;
            } while (v8 + v11 >= v3);
            v10 = -(v11);
        }
        v2 = v0;
        v5 = v2(a2, a1[1], v9);
        v14 = a4;
        if (v5)
            return v5;
        v15 = a1[3];
        v16 = v15 - v10;
        if (v15 < v10)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        if (v15 == v10)
        {
            a1[2] = 0;
            a1[3] = v16;
            if (v14)
                return 0;
        }
        else
        {
            v17 = v10 + a1[2];
            v18 = a1[0];
            if (v18 > v17)
                v18 = 0;
            a1[2] = v17 - v18;
            a1[3] = v16;
            if (v14)
            {
                v5 = v2(a2, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h0acaa4f13922ec3c(a1));
                if (v5)
                    return v5;
                goto LABEL_48fbbd;
            }
        }
        a1[2] = 0;
        return 0;
    }
    else
    {
        v5 = v2(a2, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h0acaa4f13922ec3c(a1));
        if (v5)
        {
            return v5;
        }
        else if (!a4)
        {
            if (a1[3])
                a1[3] = 0;
            a1[2] = 0;
            return 0;
        }
LABEL_48fbbd:
        v5 = v2(a2, "\n/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 1);
        if (!v5)
            return 0;
        return v5;
    }
}
