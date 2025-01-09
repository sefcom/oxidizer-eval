long long uu_env::parse_program_opt::h5dc288b3b7b61775(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned int v1;  // [sp-0x10]

    if (!a0->field_99)
    {
        ::0x4cb260::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&v0, "cannot specify --null (-0) with command", 39);
        v1 = 125;
        return alloc::boxed::Box$LT$T$GT$::new::ha5ed2421d13baa8b(&v0);
    }
    ::0x4cb320::alloc::vec::Vec$LT$T$C$A$GT$::push::h98294152d1093a7c(&a0->padding_0[72], a1, a2);
    return 0;
}
