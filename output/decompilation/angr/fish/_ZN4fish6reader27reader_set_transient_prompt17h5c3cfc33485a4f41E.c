long long fish::reader::reader_set_transient_prompt(unsigned long long a0, struct_1 *a1)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rax

    v1 = fish::reader::current_data();
    if (!v1)
        return v1;
    v2 = fish::reader::check_bool_var(a0, a1->field_18, "f", 21, 0);
    v1->field_4f8 = v2;
    return v2;
}
