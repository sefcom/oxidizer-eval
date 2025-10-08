long long fish::ast::Traversal::new(struct_1 *a0, unsigned long a1, unsigned long a2)
{
    struct_0 *v1;  // rax

    v1 = 8.alloc_impl(24, 0);
    if (!v1)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v1->field_0 = 0;
    v1->field_8 = a1;
    v1->field_10 = a2;
    a0->field_0 = 1;
    a0->field_8 = v1;
    a0->field_10 = 1;
    return a0;
}
