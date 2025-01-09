long long uu_wc::utf8::Incomplete::try_complete_offsets::h9c1fcf79f71d155f(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x37]
    unsigned long long v5;  // r15
    unsigned long long v6;  // r13
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdx
    unsigned long v10;  // r14
    unsigned long long v11;  // r14
    unsigned long long v12;  // r12

    v5 = a0->field_4;
    if (v5 > 4)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v5, 4, &g_531638); /* do not return */
    v6 = 4 - v5;
    v7 = ::0x4c6c60::core::cmp::min_by::h81988dc820cb7914(v6, a2);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::heb9fab0cf9acb3ce(::0x4c61d0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h91a2381faada637b(v7, &a0->padding_0[v5], v6, &g_5315a8), v8, ::0x4c61b0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(v7, a1, a2, &g_5315c0), v8, &g_5315d8);
    core::str::converts::from_utf8::ha1effb4cca6d9901(&v0, ::0x4c61b0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(v7 + v5, a0, 4, &g_5315f0), v8);
    if (!*((long long *)&v0))
    {
        a0->field_4 = v12;
        return v7;
    }
    if (v10)
    {
        v10 = *((long long *)&v1);
        v7 = v11 - v5;
        if (v11 < v5)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_531620); /* do not return */
        v12 = v10 & 4294967295;
    }
    else if ((v2 & 1))
    {
        v12 = v3;
        if ((v12 & 255) < (v5 & 255))
            core::option::unwrap_failed::h0e11329e76906eaa(&g_531608); /* do not return */
        v7 = (v12 & 4294967295) - v5;
    }
}
