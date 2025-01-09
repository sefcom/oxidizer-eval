long long uu_dd::Input::new_fifo::h35e5c2fb1b3ef304(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned int v0;  // [sp-0x48]
    unsigned int v1;  // [sp-0x44]
    unsigned int v2;  // [sp-0x40]
    unsigned long long v3;  // [bp-0x3c]
    char v4;  // [sp-0x38]
    unsigned short v5;  // [sp-0x34]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x2c]
    char v8;  // [bp-0x28]
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // edx
    unsigned long v14;  // rdx
    unsigned long long v15;  // rdx

    v3 = 438;
    v5 = 0;
    v4 = 1;
    v10 = uu_dd::make_linux_iflags::hef93cf202b98b41f(&a3->padding_0[64]);
    if (!v10)
        v11 = v10;
    else
        v11 = v12;
    v2 = v11;
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&v6, &v2, a1, a2);
    if (*((int *)&v6))
    {
        *((long long *)&a0->field_8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(*((long long *)&v8));
        a0->field_10 = v14;
        a0->field_0 = 1;
        return a0;
    }
    v1 = *((int *)&v7);
    v0 = 2;
    if (a3->field_80 && uu_dd::Source::skip::hb4d238ded1ebd635(&v0, a3->field_80))
    {
        *((long long *)&a0->field_8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v15);
        a0->field_10 = v15;
        a0->field_0 = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0();
        return a0;
    }
    a0->field_8 = 2;
    *((unsigned int *)&a0->padding_c[0]) = v1;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
