long long uu_dd::Output::new_file::h03bd6691f1b2e614(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned int v0;  // [sp-0x4c]
    unsigned int v1;  // [bp-0x48], Other Possible Types: unsigned long long, unsigned long
    unsigned int v2;  // [bp-0x40]
    char v3;  // [sp-0x3e]
    char v4;  // [sp-0x3c]
    char v5;  // [sp-0x3b]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x34]
    char v8;  // [bp-0x30]
    char v10;  // al
    char v11;  // cl
    unsigned int v12;  // eax
    unsigned long long v13;  // rax

    v10 = a3->field_91;
    v11 = a3->field_92;
    v1 = 0x1b600000000;
    v2 = 0x100;
    v4 = v11 ^ 1;
    v5 = v10;
    v3 = a3->field_96;
    v12 = v3 * 0x400;
    if (a3->field_98)
        v12 |= 0x4000;
    if (a3->field_99)
        v12 |= 0x10000;
    if (a3->field_9a)
        v12 |= 0x1000;
    if (a3->field_9e)
        v12 |= 0x40000;
    if (a3->field_9f)
        v12 |= 0x100;
    if (a3->field_a0)
        v12 |= 0x20000;
    if (a3->field_9d)
        v12 |= 0x800;
    if (a3->field_9b)
        v12 |= 0x101000;
    if (v12)
        v1 = v12;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v6, &v1, a1, a2);
    if (*((int *)&v6))
    {
        *((double *)&a0->field_8) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h8070a9e9cf6659d8(*((long long *)&v8), a1, a2);
        a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
        a0->field_0 = 4;
        return a0;
    }
    v0 = *((int *)&v7);
    if (!a3->field_93)
    {
        v13 = std::fs::File::set_len::hd21acd2eeb028efb(&v0, a3->field_88);
        v1 = v13;
        if (v13)
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v1);
    }
    uu_dd::Output::prepare_file::he5401ac5005677cd(a0, v0, a3);
    return a0;
}
