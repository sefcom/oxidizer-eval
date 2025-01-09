long long uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(struct_0 *a0, unsigned long a1, unsigned long a2, void* a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x28]

    ::0x50d9d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v0, a4, a5);
    a0->field_c0 = *((long long *)&v1);
    a0->field_b0 = *((int128_t *)&v0);
    a0->field_c8 = a1;
    a0->field_d0 = a2;
    memcpy(a0, a3, 176);
    return a0;
}
