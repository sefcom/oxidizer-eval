long long uu_ls::display_group::hede33fed64a9e21e(struct_1 *a0, unsigned int a1, char a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [sp-0xa0]
    unsigned int v1;  // [sp-0x9c]
    void* v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    void* v4;  // [sp-0x88]
    unsigned int v5;  // [bp-0x80], Other Possible Types: unsigned long
    char v6;  // [bp-0x74]
    unsigned int *v7;  // [sp-0x70], Other Possible Types: void*, unsigned long
    char v8;  // [sp-0x68]
    void* v9;  // [sp-0x60], Other Possible Types: unsigned long
    char v10;  // [bp-0x58]
    unsigned long long v11;  // [sp-0x50]
    unsigned long long v12;  // [sp-0x48]
    unsigned long long v13;  // [sp-0x40]
    char v14;  // [sp-0x38]
    unsigned long long v16;  // rax
    unsigned int v17;  // cc_dep2
    unsigned long long v18;  // rax
    struct_2 *v19;  // r13
    unsigned long long v20;  // r15
    void* v21;  // r12
    unsigned long long v22;  // rbp
    char *v23;  // rax
    char *v24;  // rcx
    char *v25;  // rdx
    int v26;  // xmm0
    int v27;  // ymm0
    int v28;  // ymm0
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rdi
    int v31;  // xmm0
    unsigned long long v32;  // rdi
    char *v33;  // rdi
    char v34;  // dl
    unsigned long v35;  // rdx
    char v36;  // r15b
    char *v37;  // rdi
    struct_0 *v38;  // rsi

    if (a2)
    {
        v5 = a1;
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v13 = 32;
        v14 = 3;
        v7 = 0;
        v9 = 0;
        v11 = &v2;
        v12 = &g_5ac0e8;
        if (!(char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09(&v5, &v7))
        {
            v16 = v4;
            a0->field_10 = v16;
            a0->field_0 = *((int128_t *)&v2);
            return v16;
        }
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    if (g_5b7c60 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hc8e4f386546c557f(&_ZN5uu_ls14cached_gid2grp9GID_CACHE17h2b3be3e674243d9eE, &_ZN5uu_ls14cached_gid2grp9GID_CACHE17h2b3be3e674243d9eE);
    g_5b7c28 = 1;
    if (!g_5b7c28)
    {
        g_5b7c28 = 1;
        v17 = g_5b7c28;
    }
    else
    {
        g_5b7c28 = 1;
        v17 = g_5b7c28;
    }
    if (v17)
        std::sys::sync::mutex::futex::Mutex::lock_contended::h59becd3ae8a2224e(&g_5b7c28);
    if (!_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1)
    {
        v0 = 0;
    }
    else
    {
        v18 = std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c();
        v0 = v18 | -0x100 | (char)v18 ^ 1;
    }
    if (g_5b7c2c)
    {
        v7 = &g_5b7c28;
        v8 = v0;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h198a06ec83b2c442(&v7, &g_5b7c30, a1);
    if (v7)
    {
        v19 = *((long long *)&v8);
        v20 = v9;
        v1 = *((int *)&v10);
        _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h70bcc9c34023d2c5(&v7, a1);
        v21 = v7;
        v22 = *((long long *)&v8);
        if (v21 == 0x8000000000000000)
        {
            v5 = v22;
            v21 = 0;
            v22 = 1;
            v4 = 0;
            v13 = 32;
            v14 = 3;
            v7 = 0;
            v9 = 0;
            v11 = &v2;
            v12 = &g_5ac0e8;
            if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09(&v6, &v7))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15718868642555390090(&v5);
        }
        v23 = v19->field_0;
        v24 = v19->field_8;
        v25 = v24 & v20;
        v26 = *((int128_t *)(v23 + v25));
        v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
        v29 = UnaryOp GetMSBs;
        if (!(unsigned int)v29)
        {
            v30 = 16;
            do
            {
                v25 = &v25[v30] & v24;
                v31 = *((int128_t *)(v23 + v25));
                v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                v29 = UnaryOp GetMSBs;
                v30 += 16;
            } while (!(unsigned int)v29);
        }
        v32 = (!(v29 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v33 = &v25[v32] & v24;
        v34 = *((char *)(v23 + v33));
        if (v34 >= 0)
        {
            v35 = UnaryOp GetMSBs;
            v33 = (!(v35 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
            v34 = *((char *)(v23 + v33));
        }
        v36 = v20 >> 57;
        *((char *)(v23 + v33)) = v36;
        v23[16 + (v33 + 16 & v24)] = v36;
        v37 = v33 * 32;
        v38 = v23 - v37;
        v19->field_10 = v19->field_10 - (v34 & 1);
        *((unsigned int *)(v23 + -(v37) - 32)) = v1;
        v38[1].field_-18 = v21;
        v38->field_-8 = v22;
        v38->field_-10 = v4;
        v19->field_18 = v19->field_18 + 1;
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(a0, v38 + 1);
    if (!(char)v0 && (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !(char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c())
        g_5b7c2c = 1;
    g_5b7c28 = 0;
    if (CasCmpNE(g_5b7c28, g_5b7c28))
        goto LABEL_0x4d7648;
    v16 = g_5b7c28;
    if ((unsigned int)v16 == 2)
        goto LABEL_0x4d7699;
    goto LABEL_0x4d7653;
}
