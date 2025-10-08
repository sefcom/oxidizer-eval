long long fd::output::print_entry_uncolorized(unsigned long long a0, void* a1, struct_0 *a2)
{
    unsigned long long v1;  // rax

    if (!a2->field_1e5 && (char)(((0 ^ a2->field_168) & (0 ^ -(a2->field_168))) >> 63))
    {
        v1 = a0.write_all(a1.stripped_path(a2->field_1e7), a2);
        if (!v1)
            return fd::output::print_trailing_slash(a0, a1, *((long long *)&a2->field_b8), a2->field_c0, 0);
        return v1;
    }
    return fd::output::print_entry_uncolorized_base(a0, a1, a2);
}
