long long starship_battery::errors::Error::not_found(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    v1 = a0.into(a1, a2);
    a0->field_18 = 3;
    return v1;
}
