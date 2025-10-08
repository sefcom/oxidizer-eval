long long fish::builtins::ulimit::get_desc(unsigned int a0)
{
    unsigned long long v1[2];  // rax
    unsigned long long *v2;  // rsi

    v1 = once_cell::sync::OnceCell<T>::get_or_try_init();
    if (v1[1])
    {
        v2 = 0;
        do
        {
            if (*((int *)(16 + v1[0] + (char *)v2)) == a0)
                return *((long long *)(v1[0] + (char *)v2));
            v2 += 4;
        } while (v1[1] * 32 != v2);
    }
    core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14d5098); /* do not return */
}
