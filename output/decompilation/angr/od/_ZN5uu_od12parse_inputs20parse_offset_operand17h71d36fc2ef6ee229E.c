long long uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [sp-0x30]
    unsigned long long v3;  // [sp-0x28]
    unsigned long long v4;  // [sp-0x20]
    unsigned long long v5;  // [sp-0x18]
    unsigned long long v6;  // [sp-0x10]
    unsigned long v8;  // r15
    unsigned long v9;  // r14
    unsigned long v10;  // r13
    unsigned long v11;  // r12
    unsigned long v12;  // rbx
    unsigned long long v13;  // r12
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rbx
    unsigned int v18;  // ebp
    unsigned long long v19;  // 4096
    unsigned int v20;  // eax
    unsigned long long v21;  // r13
    unsigned long long v22;  // rax
    unsigned long long v23;  // r8
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbx
    unsigned long long v29;  // rax

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = 0;
    v13 = (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(a1, a2, ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), 1);
    v14 = ::0x4d2a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v13, a2, a1, a2);
    if (!v14)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v13, a2, &g_541f00); /* do not return */
    v15 = v14;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v14, v16, "0x", 2) || (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(v15, v16, "0X", 2))
    {
        v13 |= 2;
        v17 = 1;
        v18 = 16;
        goto LABEL_4d3226;
    }
    else
    {
        v0 = 0;
        v20 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(v15, v16, ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(98, &v0), 1);
        v21 = a2 - v20;
        v22 = ::0x4d2a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v13, v21, a1, a2);
        if (!v22)
        {
            v23 = &g_541f18;
        }
        else
        {
            v17 = (!(v20 & 255 & 255) ? 1 : 0x200);
            v0 = 0;
            v24 = (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(v22, v16, ::0x4d2a80::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(46, &v0), 1);
            v18 = v24 * 2 + 8;
            v19 = v21 - v24;
LABEL_4d3226:
            v21 = v19;
            v26 = ::0x4d2a40::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v13, v21, a1, a2);
            if (!v26)
            {
                v23 = &g_541f30;
            }
            else
            {
                core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&v0, v26, v16, v18);
                v27 = *((long long *)&v1) * v17;
                if ((char)v0)
                    v27 = 12;
                v29 = ((char)v0 ? "parse failed" : 0);
                a0[1] = v27;
                a0[0] = v29;
                return v29;
            }
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v13, v21, v23); /* do not return */
    }
}
