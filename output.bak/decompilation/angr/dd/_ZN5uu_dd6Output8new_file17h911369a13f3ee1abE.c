long long uu_dd::Output::new_file::h911369a13f3ee1ab(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned int v0;  // [sp-0x54]
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx

    uu_dd::Output::new_file::open_dst::h968e64089c53b51a(&v3, a1, a2, a3->field_91, a3->field_92, &a3[1].padding_0[2]);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h68ea94665ebd88f8(&v1, &v3, a1, a2);
    v5 = *((long long *)&v1);
    if (v5)
    {
        v6 = *((long long *)&v2);
        a0->field_8 = v5;
        a0->field_10 = v6;
        a0->field_0 = 4;
        return a0;
    }
    v0 = *((int *)&v2);
    if (!a3->field_93)
    {
        v3 = std::fs::File::set_len::hd21acd2eeb028efb(&v0, a3->field_88);
        if (v3)
            ::0x4d5c90::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&v3);
    }
    uu_dd::Output::prepare_file::h9725a129054f1a6a(a0, v0, a3);
    return a0;
}
