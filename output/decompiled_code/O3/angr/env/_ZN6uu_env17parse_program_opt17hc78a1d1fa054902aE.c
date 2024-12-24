long long uu_env::parse_program_opt::hc78a1d1fa054902a(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned int v1;  // [sp-0x10]

    if (!a0->field_99)
    {
        ::0x4cb390::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h58b87609619f8c5b(&v0, "cannot specify --null (-0) with command", 39);
        v1 = 125;
        return alloc::boxed::Box$LT$T$GT$::new::h327a230aaa8be308(&v0);
    }
    ::0x4cb4e0::alloc::vec::Vec$LT$T$C$A$GT$::push::hc1718938363aafce(&a0->padding_0[72], a1, a2);
    return 0;
}
