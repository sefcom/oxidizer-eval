long long uu_join::get_and_parse_field_number(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    struct_0 *v2;  // rax
    void* v3;  // rsi
    unsigned long long v4;  // rdx

    v0.try_get_one(a1, a2, 1);
    v2 = a2.unwrap(1, &v0);
    if (v2)
    {
        v3 = v2->field_8;
        v4 = v2->field_10;
    }
    else
    {
        v3 = 0;
    }
    return uu_join::parse_field_number_option(a0, v3, v4);
}
