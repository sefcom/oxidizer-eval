long long uu_dd::Output::new_stdout::h40e44c8bce348b67(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    char v0;  // [sp-0x20]
    char v1;  // [bp-0x1c]
    unsigned long long v2;  // [sp-0x18]
    unsigned long long v4;  // rdx

    v2 = std::io::stdio::stdout::h077da66234850927();
    v0 = 0;
    if (!uu_dd::Dest::seek::h4ce26b2e627880d6(&v0, *((long long *)&a1->field_88)))
    {
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        a0->field_10 = a1;
        return a0;
    }
    *((double *)&a0->padding_1[7]) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h1315402d72f49761(v4);
    a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
    a0->field_0 = 4;
    if (v0 - 1 <= 1)
    {
        close(*((int *)&v1));
        return a0;
    }
    return a0;
}
