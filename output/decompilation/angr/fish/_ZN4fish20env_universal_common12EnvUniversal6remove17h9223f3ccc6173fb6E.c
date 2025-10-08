char fish::env_universal_common::EnvUniversal::remove(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x28]
    unsigned long long v7;  // r12
    unsigned long v8;  // cc_ndep

    v0.remove(&a0->padding_0[40], a1, a2);
    v7 = *((long long *)&v0);
    if (v7)
    {
        if ((v1 & 1))
        {
            if (!((char)_ccall(4, 24, a0->field_88 + 1, 0, _ccall(17, (unsigned long long)(v1 & 1), 0, v8))))
                a0->field_88 = a0->field_88 + 1;
            else
                core::panicking::panic_const::panic_const_add_overflow(&g_14d7290); /* do not return */
        }
        v4.to_vec(a1, a2);
        v3 = *((long long *)&v5);
        memcpy(&v2, &v4, 16);
        a0->padding_0[88].insert(&v2);
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
    }
    else
    {
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
    }
    return v7;
}
