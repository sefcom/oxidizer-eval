long long fish::path::path_get_data(unsigned long long *a0)
{
    struct_0 *v1;  // rax

    v1 = fish::path::get_data_directory();
    if (v1->field_18)
        *(a0) = 0x8000000000000000;
    else
        fish::builtins::fish_indent::fish_indent::{{closure}}(a0, v1->field_8, v1->field_10);
    return a0;
}
