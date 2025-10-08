long long uu_du::get_time_secs(struct_1 *a0, char a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    if (!a1)
    {
        v5 = a2->field_70;
        a0->field_8 = v5;
        a0->field_0 = 5;
        return v5;
    }
    else if (a1 == 1)
    {
        v4 = a2->field_78;
        a0->field_8 = v4;
        a0->field_0 = 5;
        return v4;
    }
    else
    {
        v0 = 3;
        if (!(a2->field_30 & 1))
        {
            a0->field_10 = *((int128_t *)&v2);
            a0->field_0 = 3;
            a0->field_8 = v1;
            return 3;
        }
        a0->field_8 = a2->field_38;
        a0->field_0 = 5;
        return (unsigned long long)core::ptr::drop_in_place<uu_du::DuError>(&v0);
    }
}
