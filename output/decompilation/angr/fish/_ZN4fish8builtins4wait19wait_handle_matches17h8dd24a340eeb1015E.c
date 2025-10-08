long long fish::builtins::wait::wait_handle_matches(void* a0, struct_0 *a1)
{
    unsigned long v1;  // rax

    if (!*((long long *)a0))
    {
        v1 = a1->field_38;
        return v1 & 0xffffff00 | (unsigned int)v1 == (int)a0[8];
    }
    return *((long long *)a0).equal((long long)a0[8], a1->field_18, a1->field_20);
}
