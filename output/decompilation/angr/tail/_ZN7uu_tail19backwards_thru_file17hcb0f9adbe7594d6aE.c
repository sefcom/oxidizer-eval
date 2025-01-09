long long uu_tail::backwards_thru_file::hcb0f9adbe7594d6a(unsigned long long a0, unsigned long a1, char a2)
{
    unsigned long long v0;  // [sp-0xd0]
    unsigned long long v1;  // [sp-0xc8]
    void* v2;  // [sp-0xc0]
    int v3;  // [sp-0xb8]
    unsigned long long v4;  // [sp-0xa8]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x80]
    unsigned long v8;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    char v11;  // [bp-0x58]
    void* v12;  // [sp-0x38]
    unsigned long long v14;  // rax
    void* v15;  // r13
    int v16;  // ymm0
    int v17;  // xmm0
    char *v19;  // rdx

    uu_tail::chunks::ReverseChunks::new::hc0b2e059517a0fa7(&v11, a0);
    v12 = 0;
    v14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc6ca612b237c00c8(&v5, &v11);
    if (*((long long *)&v6) == 0x8000000000000000)
        return v14;
    v15 = 0;
    while (true)
    {
        v17 = *((int128_t *)&v6);
        v16 = v16 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17;
        v3 = v17;
        v4 = *((long long *)&v7);
        v0 = (long long)(&v3)[8];
        v1 = v0 + v4;
        v2 = 0;
        if (!*((long long *)&v5) && v4 && *((char *)(v4 + v0 - 1)) == a2)
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h57eb2a97e4f62b20(&v0);
        v10 = v2;
        v8 = v0;
        v9 = v1;
        while (true)
        {
            if (!v19)
                break;
            if (*(v19) == a2)
            {
                v15 += 1;
                if (v15 >= a1)
                {
                    ::0x4ff900::core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0, 2, _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h57eb2a97e4f62b20(&v8) + 1), v19, &g_5bba58);
                    v14 = ::0x4ff3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&v3);
                    return v14;
                }
            }
        }
        ::0x4ff3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&v3);
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc6ca612b237c00c8(&v5, &v11);
        if (*((long long *)&v6) == 0x8000000000000000)
            return 0x8000000000000000;
    }
}
