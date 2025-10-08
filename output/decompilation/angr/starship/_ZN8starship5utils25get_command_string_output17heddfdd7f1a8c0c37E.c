void starship::utils::get_command_string_output(struct_1 *a0, struct_0 *a1)
{
    if (a1->field_10)
    {
        a0->field_10 = a1->field_10;
        a0->field_0 = a1->field_0;
        core::ptr::drop_in_place<alloc::string::String>(&(&a1->field_10)[1]);
    }
    else
    {
        a0->field_10 = *((long long *)((char *)&a1->field_18 + 8));
        a0->field_0 = *((int128_t *)&(&a1->field_10)[1]);
        core::ptr::drop_in_place<alloc::string::String>(a1);
    }
    return;
}
