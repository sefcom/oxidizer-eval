long long fish::tokenizer::comment_end(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // cc_op
    unsigned long long v2;  // cc_dep1
    unsigned long long v3;  // cc_dep2
    unsigned long long v4;  // cc_ndep
    unsigned long long v5;  // cc_ndep
    unsigned long long v6;  // rbx
    unsigned int v7;  // eax
    unsigned long long v11;  // cc_ndep

    while (true)
    {
        v5 = _ccall(v1, v2, v3, v4);
        v6 = a2 + 1;
        if ((char)_ccall(4, 24, a2 + 1, 0, _ccall(v1, v2, v3, v4)))
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14e3ea0); /* do not return */
        }
        else if (v6 != a1)
        {
            v7 = a0.char_at(a1, v6);
            v1 = 7;
            v2 = v7;
            v3 = 10;
            a2 = v6;
            v11 = v5;
            if (v7 == 10)
                return v6;
        }
        else
        {
            return a1;
        }
    }
}
