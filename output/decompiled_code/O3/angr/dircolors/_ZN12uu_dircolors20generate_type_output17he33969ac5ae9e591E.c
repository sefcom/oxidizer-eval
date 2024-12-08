long long uu_dircolors::generate_type_output::he33969ac5ae9e591(struct_0 *a0, char *a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x10]

    if (*(a1) != 2)
    {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h187a7612959338c9(&v0, &anon.82c3ed8cdb07ba982e54791b0c97d0cf.114.llvm.541762227079851447, &anon.82c3ed8cdb07ba982e54791b0c97d0cf.248.llvm.541762227079851447);
        alloc::str::join_generic_copy::h6ffcfe4aaf63a968(&v3, *((long long *)&v1), *((long long *)&v2), ":", 1);
    }
    else
    {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hc71c9cbb11c13c3f(&v0, &anon.82c3ed8cdb07ba982e54791b0c97d0cf.114.llvm.541762227079851447, &anon.82c3ed8cdb07ba982e54791b0c97d0cf.248.llvm.541762227079851447);
        alloc::str::join_generic_copy::h6ffcfe4aaf63a968(&v3, *((long long *)&v1), *((long long *)&v2), "\n", 1);
    }
    a0->field_10 = *((long long *)&v4);
    a0->field_0 = *((int128_t *)&v3);
    ::0x4bacb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::he0f9b716babc4360(&v0);
    return a0;
}
