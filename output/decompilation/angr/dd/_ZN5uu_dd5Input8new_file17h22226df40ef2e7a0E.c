long long uu_dd::Input::new_file::h22226df40ef2e7a0(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned int v0;  // [sp-0x58]
    unsigned int v1;  // [sp-0x54]
    unsigned int v2;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned short v4;  // [sp-0x3c]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    unsigned int v8;  // edx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned int v11;  // eax
    unsigned int v13;  // ecx
    unsigned long long v14;  // rdx

    v2 = 0x1b600000000;
    v3 = 0;
    v4 = 0;
    v3 = 1;
    if ((int)uu_dd::make_linux_iflags::hef93cf202b98b41f(&a3->padding_0[64]) == 1)
        v2 = v8;
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&v0, &v2, a1, a2);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h24d6e52343c10c0c(&v5, &v0, a1, a2);
    v9 = *((long long *)&v5);
    if (v9)
    {
        v10 = *((long long *)&v6);
        *((unsigned long long *)&a0->field_8) = v9;
        a0->field_10 = v10;
        a0->field_0 = 1;
        return a0;
    }
    v11 = *((int *)&v6);
    v1 = v11;
    v0 = 0;
    if (!a3->field_80)
    {
        v13 = 0;
    }
    else if (!uu_dd::Source::skip::hb4d238ded1ebd635(&v0, a3->field_80))
    {
        v13 = v0;
        v11 = v1;
    }
    else
    {
        *((long long *)&a0->field_8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v14);
        a0->field_10 = v14;
        a0->field_0 = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(v1);
        return a0;
    }
    a0->field_8 = v13;
    *((unsigned int *)&a0->padding_c[0]) = v11;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
