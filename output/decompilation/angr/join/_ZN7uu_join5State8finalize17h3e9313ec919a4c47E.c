long long uu_join::State::finalize::h3e9313ec919a4c47(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    int v0;  // [sp-0xc8]
    unsigned long long v1;  // [sp-0xb8]
    int v2;  // [bp-0xa8], Other Possible Types: char
    char v3;  // [bp-0xa0]
    int v4;  // [bp-0x98], Other Possible Types: unsigned long
    char v5;  // [bp-0x90]
    int v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x70], Other Possible Types: unsigned long
    int v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x58]
    int v10;  // [sp-0x50]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v13;  // rax
    void* v14;  // rax
    int v16;  // xmm0
    int v17;  // xmm0
    int v18;  // xmm0
    int v19;  // ymm0
    int v20;  // ymm0
    int v21;  // ymm1
    int v22;  // ymm2
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2
    int v28;  // xmm0
    int v29;  // xmm0
    int v30;  // xmm0

    if (!a0->field_10)
        return 0;
    if (a0->field_59)
    {
        v13 = uu_join::State::print_first_line::h7613f1add6e5ed81(a0, a1, a3);
        if (v13)
        {
            v14 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v13);
            return v14;
        }
    }
    uu_join::State::next_line::hdcd6fa155f18f200(&v2, a0, a2);
    v16 = *((int128_t *)&v3);
    v0 = v16;
    v1 = *((long long *)&v5);
    if (v7 != 9223372036854775809)
    {
        v17 = v6;
        v10 = v17;
        v18 = v0;
        v20 = ((v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
        v8 = v18;
        v9 = v1;
        v7 = *((long long *)&v2);
        if (v7 == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v7);
            return 0;
        }
        v11 = 9223372036854775809;
        while (true)
        {
            if (a0->field_59)
            {
                v23 = uu_join::State::print_line::h1d197a6baae46696(a0, a1, &v7, a3);
                if (v23)
                {
                    v14 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v23);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v7);
                    return v14;
                }
            }
            v24 = *((int128_t *)&v7);
            v25 = (int128_t)(&v8)[8];
            v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25;
            v26 = v10;
            v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
            v6 = v26;
            v4 = v25;
            v2 = v24;
            uu_join::State::reset::h80c820df90bbe344(a0, &v2);
            uu_join::State::next_line::hdcd6fa155f18f200(&v2, a0, a2);
            v28 = (int128_t)(&v2)[8];
            v0 = v28;
            v1 = (long long)(&v4)[8];
            if (v7 == v11)
                break;
            v29 = v6;
            v10 = v29;
            v9 = v1;
            v30 = v0;
            v20 = (((v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            v8 = v30;
            v7 = (long long)v2;
            if (v7 == 0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v7);
                return 0;
            }
        }
    }
    v4 = v1;
    v2 = v0;
    v14 = alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&v2);
    return v14;
}
