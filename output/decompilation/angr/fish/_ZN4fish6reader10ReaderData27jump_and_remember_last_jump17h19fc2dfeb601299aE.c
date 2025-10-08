long long fish::reader::ReaderData::jump_and_remember_last_jump(struct_0 *a0, unsigned int a1, char a2, unsigned int a3, unsigned int a4, char a5)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned int *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned int *v4;  // rax

    a0->field_840 = a4;
    a0->field_84e = a1;
    a0->field_84f = a2;
    v4 = 4.alloc_impl(4, 0);
    if (!v4)
        alloc::alloc::handle_alloc_error(4, 4); /* do not return */
    *(v4) = a4;
    v0 = 1;
    v1 = v4;
    v2 = 1;
    return a0.jump(a1, a2, a3, &v0, a5);
}
