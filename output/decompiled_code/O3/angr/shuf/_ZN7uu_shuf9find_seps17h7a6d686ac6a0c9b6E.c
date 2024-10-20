long long uu_shuf::find_seps::h7a6d686ac6a0c9b6(unsigned long a0, unsigned int a1)
{
    unsigned int v0;  // [sp-0x5c]
    unsigned long v1;  // [sp-0x58]
    unsigned long v2;  // [sp-0x50]
    unsigned int v3;  // [sp-0x44]
    unsigned long v5;  // [sp-0x38]
    unsigned long v7;  // r12
    unsigned long v8;  // rbp
    unsigned long v9;  // rax
    int v10;  // ymm0
    unsigned long v11;  // rsi
    unsigned long v12;  // rcx
    unsigned long v13;  // rbx
    unsigned long v14;  // rdx
    unsigned long v15;  // rcx
    unsigned long v16;  // rax
    unsigned long v17;  // r8
    unsigned long v18;  // rdx
    unsigned long v19;  // rsi
    int v20;  // xmm0
    unsigned long v21;  // r12
    unsigned long v23;  // rdx
    unsigned long v24;  // rbx
    unsigned long v25;  // r13
    unsigned long v26;  // rbp
    unsigned long v27;  // r13
    unsigned long v28;  // r13
    unsigned long v29;  // rax
    unsigned long v30;  // rcx
    unsigned long v31;  // r13
    unsigned long v33;  // rbx
    unsigned long v34;  // r13
    unsigned long v35;  // rcx

    v7 = *((long long *)(a0 + 16));
    if (!v7)
        return v9;
    v8 = a1;
    if (v7 == 1)
    {
        v9 = *((long long *)(a0 + 8));
        if (!*((long long *)(v9 + 8)))
        {
            *((long long *)(a0 + 16)) = 0;
            return v9;
        }
    }
    v0 = v8;
    v3 = v8;
    while (true)
    {
        v7 -= 1;
        v11 = *((long long *)(a0 + 16));
        if (v7 >= v11)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v12 = *((long long *)(a0 + 8));
        v13 = v7 * 16;
        v9 = *((long long *)(v12 + v13));
        v14 = *((long long *)(v12 + v13 + 8));
        if (v14 <= 15)
        {
            if (!v14)
                goto LABEL_48dde3;
            v15 = 0;
            while (*((char *)(v9 + v15)) != (char)v8)
            {
                v15 += 1;
                if (v14 == v15)
                    goto LABEL_48dde3;
            }
        }
        else
        {
            v9 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(v0, v9);
            if (!(v9 == 1))
                goto LABEL_48dde3;
            v11 = *((long long *)(a0 + 16));
        }
        if (v11 <= v7)
            alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::assert_failed::h40502ae031ed5ef5(); /* do not return */
        v7 = v7;
        v16 = *((long long *)(a0 + 8));
        v17 = *((long long *)(v16 + v13));
        v18 = *((long long *)(v16 + v13 + 8));
        v19 = v11 - 1;
        v20 = *((int128_t *)(v16 + v19 * 16));
        v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        *((void*)(v16 + v13)) = v20;
        *((unsigned long *)(a0 + 16)) = v19;
        v2 = v18;
        v1 = v17;
        v5 = v18 + v17;
        v9 = _ZN6memchr4arch6x86_646memchr10memchr_raw2FN17h131809aa972751e4E(v0, v17, v18 + v17, v19 * 16, v17);
        if (!v9)
        {
            v21 = 0;
            v1 = v1;
        }
        else
        {
            v21 = 0;
            v1 = v1;
            do
            {
                v24 = v23;
                v25 = v1;
                v26 = v24 - v25;
                if (v26 < v21)
                    core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                if (v26 > v2)
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                v27 = *((long long *)(a0 + 16));
                if (v27 == *((long long *)a0))
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h7bff639f68a4c8b4(a0);
                    v28 = v1;
                }
                v29 = *((long long *)(a0 + 8));
                v30 = v27 * 16;
                *((unsigned long *)(v29 + v30)) = v21 + v28;
                *((unsigned long *)(v29 + v30 + 8)) = v26 - v21;
                *((unsigned long *)(a0 + 16)) = v27 + 1;
                v21 = v26 + 1;
                v31 = v28;
                v9 = _ZN6memchr4arch6x86_646memchr10memchr_raw2FN17h131809aa972751e4E(v0, v24 + 1, v5, v30);
            } while (v9);
        }
        v2 -= v21;
        v8 = v3;
        if (vvar_353 > v21)
        {
            v33 = *((long long *)(a0 + 16));
            if (v33 == *((long long *)a0))
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h7bff639f68a4c8b4(a0);
                v1 = v1;
            }
            v9 = *((long long *)(a0 + 8));
            v35 = v33 * 16;
            *((unsigned long *)(v9 + v35)) = v34 + v21;
            *((unsigned long *)(v9 + v35 + 8)) = v2;
            *((unsigned long *)(a0 + 16)) = v33 + 1;
        }
LABEL_48dde3:
        if (!v7)
            return v9;
    }
}
