long long uu_dd::read_helper::perform_swab::h674fb7c29172040e(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r12
    unsigned long long v6;  // r15
    unsigned long long v8;  // r12

    v4 = ::0x4d6030::core::iter::adapters::step_by::StepBy$LT$I$GT$::new::hccaf6edfe6d8c61d(&v0, a1, a2);
    v5 = *((long long *)&v1);
    if (!v5)
        return v4;
    v6 = *((long long *)&v0);
    do
    {
        v8 = v5;
        v4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::swap::ha9fdd20b56a47561(a0, a1, v6, v6 - 1);
        v6 += *((long long *)&v2) + 1;
        v5 = v8 - 1;
    } while (v8 != 1);
    return v4;
}
