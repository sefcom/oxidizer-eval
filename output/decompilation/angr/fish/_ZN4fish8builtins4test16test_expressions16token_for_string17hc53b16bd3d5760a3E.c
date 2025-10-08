long long fish::builtins::test::test_expressions::token_for_string(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = once_cell::sync::OnceCell<T>::get_or_try_init().get_inner(a0, a1);
    if (!v3)
        return 0;
    return *((short *)&(&v3->field_10)[1]) * 0x100 | v3->field_10;
}
