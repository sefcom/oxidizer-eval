long long uu_paste::InputSource::read_until(struct_0 *a0, struct_2 *a1, char a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long v5;  // rax
    struct_1 *v6;  // rdi
    char v7;  // dl
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx

    if (a1->field_0)
    {
        v3 = std::io::read_until(a1, a2, a3);
        if (((char)v3 & 1))
        {
            v5 = v4.from();
            a0->field_0 = v5;
            a0->field_8 = v4;
            return v5;
        }
    }
    else
    {
        v6 = a1->field_8;
        if (v6->field_10 > 9223372036854775806)
        {
            a0->field_0 = uu_paste::InputSource::read_until::{{closure}}();
            a0->field_8 = &g_4decf0;
            return &g_4decf0;
        }
        v6->field_10 = v6->field_10 + 1;
        v0 = v6 + 1.lock();
        v1 = v7 & 1;
        if (((char)v0.read_until(a2, a3) & 1))
        {
            a0->field_0 = v8.from();
            a0->field_8 = v8;
            core::ptr::drop_in_place<std::io::stdio::StdinLock>(v0, *((int *)&v1));
            return (unsigned long long)core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(&v6->field_10);
        }
        core::ptr::drop_in_place<std::io::stdio::StdinLock>(v0, *((int *)&v1));
        v3 = (unsigned long long)core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(&v6->field_10);
    }
    a0->field_8 = v9;
    a0->field_0 = 0;
    return v3;
}
