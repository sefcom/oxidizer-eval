long long fish::builtins::math::format_double(struct_0 *a0, struct_1 *a1)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    char v5;  // [bp-0x68]
    unsigned long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long v11;  // xmm0lq
    unsigned long v12;  // rcx
    unsigned long long v13;  // xmm0lq
    unsigned long long v14;  // xmm0lq
    unsigned long v15;  // cc_ndep
    unsigned long long v16;  // rcx
    unsigned long long v17;  // xmm0lq
    unsigned long v18;  // xmm0lq
    unsigned long long v19;  // cc_ndep
    unsigned long long v20;  // cc_ndep
    unsigned long v21;  // rax
    unsigned long long v22;  // xmm2lq
    unsigned long long v23;  // xmm2lq
    unsigned long long v24;  // rdx

    if (a1->field_8 == 8)
    {
        trunc();
        if (((char)((CmpF(v18, 0) & 69) >> 6) & 1) == 1 && !((char)_ccall(10, 0, (unsigned long long)(CmpF(v18, 0) & 69), 0, v19)))
            return a0.from_str("0", 1);
        v21 = v18;
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v22 = 9223372036854775807 & v18;
        v23 = v22;
        v24 = ((char)_ccall(3, 0, (unsigned long long)(CmpF(v23, 0) & 69), 0, v20) ? (unsigned long long)(SubV(v22, 0x43e0000000000000)) & v23 >> 63 | v23 : 0);
        if (((CmpF(v23, 4895412794951729151) & 69 | (char)((CmpF(v23, 4895412794951729151) & 69) >> 6)) & 1) != 1)
            v24 = 18446744073709551615;
        v5 = 0;
        *((int *)&v6) = (v21 < 0 ? "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '" : 1);
        v7 = v21 >> 63;
        v8 = 4;
        v9 = v24;
        fish_printf::printf_impl::sprintf_locale(&v4, &v0, "%s0%lo'%ls'\n%ls^%ls^\n%ls^\n", 6, &v5, 2);
        v4.unwrap(&g_14cac90);
    }
    else if (a1->field_8 == 16)
    {
        trunc();
        v12 = v11;
        v0 = 0;
        v1 = 4;
        v13 = v11 & 9223372036854775807;
        v14 = v13;
        v2 = 0;
        v16 = ((char)_ccall(3, 0, (unsigned long long)(CmpF(v14, 0) & 69), 0, v15) ? (unsigned long long)(SubV(v13, 0x43e0000000000000)) & v14 >> 63 | v14 : 0);
        if (((CmpF(v14, 4895412794951729151) & 69 | (char)((CmpF(v14, 4895412794951729151) & 69) >> 6)) & 1) != 1)
            v16 = 18446744073709551615;
        v5 = 0;
        *((int *)&v6) = (v12 < 0 ? "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '" : 1);
        v7 = v12 >> 63;
        v8 = 4;
        v9 = v16;
        fish_printf::printf_impl::sprintf_locale(&v4, &v0, "%s0x%lx%s0%lo'%ls'\n%ls^%ls^\n%ls^\n", 7, &v5, 2);
        v4.unwrap(&g_14cac78);
    }
    else
    {
        v3 = v17;
        num_traits::pow::pow(a1->field_0);
        goto (long long)(g_9f2b30[a1->field_10] + (char *)&g_9f2b30[0]);
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v5);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
