long long uu_dd::Output::prepare_file::he5401ac5005677cd(struct_0 *a0, unsigned int a1, struct_1 *a2)
{
    char v0;  // [sp-0x20]
    char v1;  // [sp-0x1f]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v1 = a2->field_90 ^ 1;
    v0 = 1;
    v3 = uu_dd::Dest::seek::h4ce26b2e627880d6(&v0, *((long long *)&a2->field_88));
    if (!v3)
    {
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        a0->field_10 = a2;
        return v3;
    }
    *((double *)&a0->padding_1[7]) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf1d5c92d7fda6742(v4);
    a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
    a0->field_0 = 4;
    v5 = v0;
    v3 = v5 | -0x100 | (char)v5 - 1;
    if ((char)v5 - 1 <= 1)
    {
        v3 = close(a1);
        return v3;
    }
    return v3;
}
