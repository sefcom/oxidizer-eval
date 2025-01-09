long long uu_base32::base_common::get_input::h0f77b7573e033d64(unsigned long long a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned int v4;  // edx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx

    if (a1->field_10 == 0x8000000000000000)
    {
        v2 = std::io::stdio::stdin::h7215cc131abb55d8();
        v5 = alloc::boxed::Box$LT$T$GT$::new::h482febea39d844c0(std::io::stdio::Stdin::lock::h161a36d857331d7f(&v2), v4 & 1);
        v6 = &g_549738;
        goto LABEL_4c18d0;
    }
    else
    {
        std::fs::File::open::h6364263faa0b0b02(&v2, &a1->field_10);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb851e02a25cfd4b9(&v0, &v2, &a1->field_10);
        v5 = *((long long *)&v0);
        if (v5)
        {
            v6 = *((long long *)&v1);
            v7 = 1;
        }
        else
        {
            v5 = alloc::boxed::Box$LT$T$GT$::new::h49813bb62d5bf258(*((int *)&v1));
            v6 = &g_549790;
LABEL_4c18d0:
            v7 = 0;
        }
    }
    a0[1] = v5;
    a0[2] = v6;
    a0[0] = v7;
    return a0;
}
