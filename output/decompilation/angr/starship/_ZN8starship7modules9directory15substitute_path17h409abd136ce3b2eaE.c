long long starship::modules::directory::substitute_path(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long a3)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    int v5;  // [bp-0x38]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax
    unsigned long long v9[2];  // rdx
    int v10;  // xmm0

    v2 = a1->field_10;
    v3 = a2;
    v4 = a3 * 48 + a2;
    if (v3.next())
    {
        do
        {
            alloc::str::<impl str>::replace(&v5, v1, v2, v8, v9[0], v9[1]);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v2 = *((long long *)&v6);
            v0 = v5;
            v8 = v3.next();
        } while (v8);
    }
    a0->field_10 = v2;
    *((void*)&a0->field_0) = v10;
    return v2;
}
