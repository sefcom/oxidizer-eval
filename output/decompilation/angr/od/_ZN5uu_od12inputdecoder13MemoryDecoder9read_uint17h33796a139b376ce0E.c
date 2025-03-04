long long uu_od::inputdecoder::MemoryDecoder::read_uint::h33796a139b376ce0(struct_0 *a0, char *a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x50]
    char *v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    unsigned long v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x30]
    struct struct_2 **v5;  // [sp-0x28]
    unsigned long long v6;  // [sp-0x20]
    void* v7;  // [sp-0x18]
    unsigned long long v9[3];  // rcx
    unsigned long long v10;  // rax
    unsigned long long v12[3];  // rcx
    unsigned long long v13;  // rax
    unsigned long long v15[3];  // rcx
    unsigned long long v16;  // rax
    unsigned long long v18[3];  // rcx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned int v22;  // eax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rdx

    v0 = a2;
    switch (a2)
    {
    case 1:
        v9 = a0->field_0;
        v10 = v9[2];
        if (v10 > a1)
        {
            v20 = a1[v9[1]];
            return v20;
        }
        core::panicking::panic_bounds_check::h25a5330941572dd1(a1, v10, &g_543560); /* do not return */
    case 2:
        v18 = a0->field_0;
        v19 = ::0x4d7c60::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(a1, a1 + 2, v18[1], v18[2], &g_543578);
        switch (a0->field_18)
        {
        case 1:
            v22 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h083cd14a218276be(v19, v21);
            break;
        default:
            v22 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::hab4b8969433a088d(v19, v23);
        }
        v20 = v22;
        return v20;
    case 4:
        v12 = a0->field_0;
        v13 = ::0x4d7c60::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(a1, a1 + 4, v12[1], v12[2], &g_543590);
        switch (a0->field_18)
        {
        case 1:
            v20 = (unsigned int)_$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::habec7fb2f414f2e9(v13, v24);
            return v20;
        default:
            v20 = (unsigned int)_$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u32::hc43338f212540fbc(v13, v25);
            return v20;
        }
    case 8:
        v15 = a0->field_0;
        v16 = ::0x4d7c60::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(a1, a1 + 8, v15[1], v15[2], &g_5435a8);
        switch (a0->field_18)
        {
        case 1:
            return _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::hd7b11af3bfea982f(v16, v26);
        default:
            return _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u64::h313bb306d5e0a55e(v16, v27);
        }
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v3 = &g_543550;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3, &g_5435c0); /* do not return */
    }
}
