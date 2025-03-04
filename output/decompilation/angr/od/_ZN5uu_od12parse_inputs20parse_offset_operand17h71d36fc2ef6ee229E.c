long long uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x50]
    unsigned int v1;  // [sp-0x50]
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [sp-0x30]
    unsigned long long v4;  // [sp-0x28]
    unsigned long long v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    unsigned long long v7;  // [sp-0x10]
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx
    unsigned long long v14;  // r12
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rbx
    unsigned int v19;  // ebp
    unsigned long long v20;  // r13
    unsigned int v21;  // eax
    unsigned long long v22;  // rax
    unsigned long long v23;  // r8
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rbx
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rax

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = v13;
    v0 = 0;
    v14 = (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), 1);
    v15 = ::0x4d2a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v14, a2, a1, a2);
    if (!v15)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v14, a2, &g_541f00); /* do not return */
    v16 = v15;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v15, v17, "0x", 2) || (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v16, v17, "0X", 2))
    {
        v14 |= 2;
        v18 = 1;
        v19 = 16;
        v20 = a2;
        goto LABEL_4d3226;
    }
    else
    {
        v1 = 0;
        v21 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(v16, v17, ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(98, &v0), 1);
        v20 = a2 - v21;
        v22 = ::0x4d2a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v14, v20, a1, a2);
        if (!v22)
        {
            v23 = &g_541f18;
        }
        else
        {
            v18 = (!(v21 & 255 & 255) ? 1 : 0x200);
            v0 = 0;
            v24 = (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(v22, v17, ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(46, &v0), 1);
            v20 -= v24;
            v19 = v24 * 2 + 8;
LABEL_4d3226:
            v25 = ::0x4d2a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v14, v20, a1, a2);
            if (!v25)
            {
                v23 = &g_541f30;
            }
            else
            {
                core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&v0, v25, a2, v19);
                v26 = *((long long *)&v2) * v18;
                if (!(char)v0)
                    v28 = v26;
                else
                    v28 = 12;
                v29 = ((char)v0 ? "parse failed" : 0);
                a0[1] = v28;
                a0[0] = v29;
                return v29;
            }
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v14, v20, v23); /* do not return */
    }
}
