long long starship::formatter::string_formatter::StringFormatter::raw(struct_2 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x28]
    struct_0 *v2;  // rax

    v2 = 8.alloc_impl(48, 0);
    if (!v2)
        alloc::alloc::handle_alloc_error(8, 48); /* do not return */
    v2->field_0 = 0x8000000000000000;
    v2->field_8 = 0x8000000000000000;
    v2->field_10 = a1;
    v2->field_18 = a2;
    v2->field_20 = *((int128_t *)&v0);
    a0->field_0 = 1;
    a0->field_8 = v2;
    a0->field_10 = 1;
    a0->field_18 = 0;
    *((unsigned long long *)&a0->padding_38[0]) = 0;
    *((uint128_t *)&(&a0->padding_20)[1]) = 0;
    return a0;
}
