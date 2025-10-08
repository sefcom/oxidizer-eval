long long fish::input::input_function_get_code(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = fish::common::get_by_sorted_name(a0, a1);
    if (!v3)
        return 95;
    return v3->field_10;
}
