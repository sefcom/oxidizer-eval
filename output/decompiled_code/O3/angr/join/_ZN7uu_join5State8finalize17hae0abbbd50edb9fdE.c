long long uu_join::State::finalize::hae0abbbd50edb9fd(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    int v0;  // [sp-0xc8]
    unsigned long long v1;  // [sp-0xb8]
    int v2;  // [bp-0xa8], Other Possible Types: char
    char v3;  // [bp-0xa0]
    int v4;  // [bp-0x98], Other Possible Types: unsigned long
    char v5;  // [bp-0x90]
    int v6;  // [sp-0x88]
    unsigned long v7;  // [sp-0x70], Other Possible Types: unsigned long long
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
    unsigned long long v21;  // rdx
    int v22;  // ymm1
    int v23;  // ymm2
    unsigned long long v24;  // rax
    int v25;  // xmm0
    int v26;  // xmm1
    int v27;  // xmm2
    int v29;  // xmm0
    int v30;  // xmm0
    int v31;  // xmm0

    if (!a0->field_10)
        return 0;
    if (a0->field_59)
    {
        v13 = uu_join::State::print_first_line::h0493b76e2e0c7805(a0, a1, a3);
        if (v13)
        {
            v14 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v13);
            return v14;
        }
    }
    uu_join::State::next_line::h2ad58b053b68c323(&v2, a0, a2);
    v16 = *((int128_t *)&v3);
    v0 = v16;
    v1 = *((long long *)&v5);
    if (v7 != 9223372036854775809)
    {
        v17 = v6;
        v10 = v17;
        v18 = v0;
        v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
        v8 = v18;
        v9 = v1;
        v7 = *((long long *)&v2);
        if (v7 == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v7);
            return 0;
        }
        v11 = 9223372036854775809;
        while (true)
        {
            if (a0->field_59)
            {
                v24 = uu_join::State::print_line::h10cc8ae5f0481fff(a0, a1, &v7, a3);
                if (v24)
                {
                    v14 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v24);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v7);
                    return v14;
                }
            }
            v25 = *((int128_t *)&v7);
            v26 = (int128_t)(&v8)[8];
            v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
            v27 = v10;
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
            v6 = v27;
            v4 = v26;
            v2 = v25;
            uu_join::State::reset::h0fc47730b66e1f19(a0, &v2, v21);
            uu_join::State::next_line::h2ad58b053b68c323(&v2, a0, a2);
            v29 = (int128_t)(&v2)[8];
            v0 = v29;
            v1 = (long long)(&v4)[8];
            if (v7 == v11)
                break;
            v30 = v6;
            v10 = v30;
            v9 = v1;
            v31 = v0;
            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
            v8 = v31;
            v7 = (long long)v2;
            if (v7 == 0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v7);
                return 0;
            }
        }
    }
    v4 = v1;
    v2 = v0;
    v14 = alloc::boxed::Box$LT$T$GT$::new::h479aa71056b554a0(&v2);
    return v14;
}
