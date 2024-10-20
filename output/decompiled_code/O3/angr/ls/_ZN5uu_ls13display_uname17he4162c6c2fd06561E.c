long long uu_ls::display_uname::he4162c6c2fd06561(struct_3 *a0, unsigned int a1, char a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x110]
    unsigned long long v1;  // [sp-0x108]
    void* v2;  // [sp-0x100]
    unsigned int v3;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned int v4;  // [sp-0xec]
    unsigned int v5;  // [sp-0xe8]
    char v6;  // [bp-0xe4]
    unsigned long long v7;  // [sp-0xe0]
    unsigned long long v8;  // [sp-0xd8]
    unsigned int *v9;  // [sp-0xd0], Other Possible Types: void*, unsigned long
    char v10;  // [sp-0xc8]
    void* v11;  // [sp-0xc0], Other Possible Types: unsigned long
    char v12;  // [bp-0xb8]
    unsigned long long v13;  // [sp-0xb0]
    unsigned long long v14;  // [sp-0xa8]
    unsigned long v15;  // [sp-0xa0], Other Possible Types: unsigned long long
    char v16;  // [sp-0x98]
    char v17;  // [bp-0x88]
    char v18;  // [bp-0x80]
    char v19;  // [bp-0x70]
    char v20;  // [bp-0x68]
    unsigned long long v21;  // [sp-0x50]
    unsigned long long v22;  // [sp-0x48]
    unsigned long long v23;  // [sp-0x40]
    unsigned long long v24;  // [sp-0x38]
    unsigned long long v26;  // rax
    unsigned int v27;  // cc_dep2
    void* v28;  // r15
    struct_1 *v30;  // r13
    unsigned long long v31;  // rbp
    void* v32;  // r14
    char *v36;  // rax
    char *v37;  // rcx
    char *v38;  // rdx
    int v39;  // xmm0
    int v40;  // ymm0
    int v41;  // ymm0
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdi
    int v44;  // xmm0
    unsigned long long v45;  // rdi
    char *v46;  // rdi
    char v47;  // dl
    unsigned long v48;  // rdx
    char v49;  // bpl
    char *v50;  // rdi
    struct_0 *v51;  // rsi

    if (a2)
    {
        v3 = a1;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v15 = 32;
        v16 = 3;
        v9 = 0;
        v11 = 0;
        v13 = &v0;
        v14 = &g_5ac0e8;
        if (!(char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09(&v3, &v9))
        {
            v26 = v2;
            a0->field_10 = v26;
            a0->field_0 = *((int128_t *)&v0);
            return v26;
        }
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    if (g_5b7c10 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hc8e4f386546c557f(&_ZN5uu_ls14cached_uid2usr9UID_CACHE17h2eda75cd10029a10E, &_ZN5uu_ls14cached_uid2usr9UID_CACHE17h2eda75cd10029a10E);
    g_5b7bd8 = 1;
    if (!g_5b7bd8)
    {
        g_5b7bd8 = 1;
        v27 = g_5b7bd8;
    }
    else
    {
        g_5b7bd8 = 1;
        v27 = g_5b7bd8;
    }
    if (v27)
        std::sys::sync::mutex::futex::Mutex::lock_contended::h59becd3ae8a2224e(&g_5b7bd8);
    if (!_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1)
        v28 = 0;
    else
        v28 = (unsigned int)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c() | -0x100 | (char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c() ^ 1;
    if (g_5b7bdc)
    {
        v9 = &g_5b7bd8;
        v10 = (char)v28;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h198a06ec83b2c442(&v9, &g_5b7be0, a1);
    if (v9)
    {
        v30 = *((long long *)&v10);
        v31 = v11;
        v5 = *((int *)&v12);
        _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h530d40ac55e53641(&v9, a1);
        v32 = v9;
        if (v32 != 0x8000000000000000)
        {
            v8 = *((long long *)&v10);
            v4 = (unsigned int)v28;
            v7 = v11;
            v22 = *((long long *)&v18);
            v24 = *((long long *)&v19);
            v23 = *((long long *)&v20);
            if (*((long long *)&v12) << 1)
            {
                v21 = *((long long *)&v16);
                __rust_dealloc(v13);
            }
            if (v15 << 1)
                __rust_dealloc(v21);
            if (*((long long *)&v17) << 1)
                __rust_dealloc(v22);
            v28 = v4;
            if (v24 << 1)
                __rust_dealloc(v23);
        }
        else
        {
            v3 = v8;
            v32 = 0;
            v1 = 1;
            v2 = 0;
            v15 = 32;
            v16 = 3;
            v9 = 0;
            v11 = 0;
            v13 = &v0;
            v14 = &g_5ac0e8;
            if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09(&v6, &v9))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v8 = v1;
            v7 = v2;
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15718868642555390090(&v3);
        }
        v36 = v30->field_0;
        v37 = v30->field_8;
        v38 = v37 & v31;
        v39 = *((int128_t *)(v36 + v38));
        v41 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        v42 = UnaryOp GetMSBs;
        if (!(unsigned int)v42)
        {
            v43 = 16;
            do
            {
                v38 = &v38[v43] & v37;
                v44 = *((int128_t *)(v36 + v38));
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                v42 = UnaryOp GetMSBs;
                v43 += 16;
            } while (!(unsigned int)v42);
        }
        v45 = (!(v42 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v46 = &v38[v45] & v37;
        v47 = *((char *)(v36 + v46));
        if (v47 >= 0)
        {
            v48 = UnaryOp GetMSBs;
            v46 = (!(v48 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
            v47 = *((char *)(v36 + v46));
        }
        v49 = v31 >> 57;
        *((char *)(v36 + v46)) = v49;
        v36[16 + (v46 + 16 & v37)] = v49;
        v50 = v46 * 32;
        v51 = v36 - v50;
        v30->field_10 = v30->field_10 - (v47 & 1);
        *((unsigned int *)(v36 + -(v50) - 32)) = v5;
        v51[1].field_-18 = v32;
        v51->field_-8 = v8;
        v51->field_-10 = v7;
        v30->field_18 = v30->field_18 + 1;
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(a0, v51 + 1);
    if (!(char)v28 && (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !(char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c())
        g_5b7bdc = 1;
    g_5b7bd8 = 0;
    if (CasCmpNE(g_5b7bd8, g_5b7bd8))
        goto LABEL_0x4d71fd;
    v26 = g_5b7bd8;
    if ((unsigned int)v26 == 2)
        goto LABEL_0x4d7252;
    goto LABEL_0x4d7208;
}
