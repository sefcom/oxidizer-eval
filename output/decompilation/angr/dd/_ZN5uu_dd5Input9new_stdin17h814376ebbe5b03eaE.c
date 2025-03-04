long long uu_dd::Input::new_stdin::h814376ebbe5b03ea(unsigned long long a0[3], struct_0 *a1)
{
    unsigned long long v0;  // [sp-0xe8]
    char *v1;  // [sp-0xe0]
    unsigned long long v2;  // [sp-0xd8]
    unsigned long v3;  // [sp-0xd0]
    unsigned long long v4;  // [sp-0xc8]
    char v5;  // [sp-0xc0], Other Possible Types: unsigned long
    unsigned long v6;  // [sp-0xb8], Other Possible Types: unsigned long long
    struct struct_1 **v7;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v8;  // [sp-0xa8], Other Possible Types: unsigned long long
    void* v9;  // [sp-0xa0]
    char v10;  // [bp-0x88]
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rsi
    unsigned long v14;  // rdx
    int v15;  // ymm0
    int v16;  // ymm0
    unsigned long long v17;  // rax
    unsigned long v18;  // rdx
    int v19;  // ymm0
    unsigned long long v20;  // rdx

    uu_dd::Source::stdin_as_file::h2487bb1f6c82b1dd();
    v0 = 1;
    std::fs::File::metadata::he899a18112e6f19e(&v5, &v0);
    if (*((int *)&v5) == 2)
    {
        v12 = v6;
        goto LABEL_4d6ac9;
    }
    else
    {
        if (!((0xf000 & *((int *)&v10)) != 0x8000) && !(!a1->field_42))
        {
            v3 = uucore::util_name::h60d842bf27b05e82();
            v4 = v14;
            v1 = &v3;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v5 = &g_561008;
            v6 = 2;
            v9 = 0;
            v7 = &v1;
            v8 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5);
            v5 = &g_561060;
            v6 = 1;
            v7 = 8;
            *((uint128_t *)&v8) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5);
            v17 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
        }
        else
        {
            v13 = a1->field_80;
            if (!a1->field_80)
            {
                v16 = v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1;
                a0[1] = (unsigned long long)v16;
                a0[2] = a1;
                a0[0] = 0;
                return a0;
            }
            if (!uu_dd::Source::skip::hb4d238ded1ebd635(&v0, v13))
            {
                v16 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0;
                a0[1] = (unsigned long long)v16;
                a0[2] = a1;
                a0[0] = 0;
                return a0;
            }
            v12 = v18;
LABEL_4d6ac9:
            v17 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v12);
        }
        a0[1] = v17;
        a0[2] = v20;
        a0[0] = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(*((int *)((char *)&v0 + 4)));
        return a0;
    }
}
