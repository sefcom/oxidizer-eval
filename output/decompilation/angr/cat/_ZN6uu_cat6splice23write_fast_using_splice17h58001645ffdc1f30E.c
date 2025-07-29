long long uu_cat::splice::write_fast_using_splice(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbx
    unsigned int v7;  // eax
    struct_0 *v8;  // rcx

    v5 = uucore::features::pipes::pipe();
    if ((unsigned int)v5 == -1)
    {
        a0->field_0 = 9223372036854775809;
        *((unsigned int *)&a0->field_8) = v1;
        return 9223372036854775809;
    }
    v0 = v5;
    v1 = v5 >> 32;
    do
    {
        nix::fcntl::splice(&v2, a1, 0, &v1, 0, 0x20000, 0);
        if (((char)v2 & 1))
        {
            a0->field_8 = 1;
            v8 = a0;
            a0->field_0 = 9223372036854775814;
            core::ptr::drop_in_place<std::fs::File>(v1);
            return core::ptr::drop_in_place<std::fs::File>(v0);
        }
        if (!*((long long *)&v3))
        {
            v8 = a0;
            a0->field_8 = 0;
            v8->field_0 = 9223372036854775814;
            core::ptr::drop_in_place<std::fs::File>(v1);
            return core::ptr::drop_in_place<std::fs::File>(v0);
        }
    } while ((int)uucore::features::pipes::splice_exact(&v0, a2, v6) == 134);
    v7 = uu_cat::splice::copy_exact(&v0, a2, v6);
    if (v7 != 134)
    {
        a0->field_0 = 9223372036854775809;
        *((unsigned int *)&a0->field_8) = v7;
        core::ptr::drop_in_place<std::fs::File>(v1);
        return core::ptr::drop_in_place<std::fs::File>(v0);
    }
    a0->field_8 = 1;
    a0->field_0 = 9223372036854775814;
    core::ptr::drop_in_place<std::fs::File>(v1);
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
