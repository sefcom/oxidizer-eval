long long uu_df::mount_info_lt::he7799b73577b1743(unsigned long long a0[15], unsigned long long a1[15])
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v1;  // [sp-0x34]
    unsigned long v3;  // rax
    unsigned long long v4;  // r15
    unsigned long long v5;  // r12
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r13
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v0 = v3;
    v4 = a0[4];
    v5 = a0[5];
    v0 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfcb4c23ecb597bc5(v4, v5, ::0x4c59b0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v0), 1))
    {
        v1 = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfcb4c23ecb597bc5(a1[4], a1[5], ::0x4c59b0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v1), 1))
            return 0;
    }
    v8 = a0[11];
    v9 = a0[14];
    v10 = a1[14];
    if (!(v8) || !((v11 = a1[11], v11)))
    {
        if (!(v9 < v10))
            goto LABEL_4c689d;
    }
    else
    {
        if (!(v9 < v10) || !(v8 <= v11))
        {
LABEL_4c689d:
            v13 = ::0x4c5af0::alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(v4, v5, a1[4], a1[5]);
            v12 = v13 | -0x100 | 1;
            if (!(char)v13)
            {
                v14 = ::0x4c5af0::alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(a0[13], v9, a1[13], v10);
                v12 = v14 | -0x100 | (char)v14 ^ 1;
                return v12;
            }
            return v12;
        }
    }
    return 0;
}
