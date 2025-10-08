long long fish::reader::get_quote(unsigned int *a0, unsigned long long a1, unsigned long a2)
{
    void* v1;  // rdx
    unsigned int v2;  // ebp
    unsigned long v3;  // rdx

    if (!a1)
        return 0x110000;
    v1 = 0;
    do
    {
        v2 = *((int *)((char *)a0 + 0x4 * v1));
        if (v2 != 34 && v2 != 39)
        {
            if (v2 != 92)
            {
                v1 += 1;
                continue;
            }
            else
            {
                if (v1 + 1 == a1)
                    break;
                v1 += 2;
                if ((char)__CFADD__(v1, 2))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e0f60); /* do not return */
            }
        }
        else
        {
            if (!((char)fish::tokenizer::quote_end(a0, a1, v1, v2) & 1))
            {
                return v2;
            }
            else if (v3 <= a2)
            {
                v1 = v3 + 1;
                if ((char)_ccall(4, 24, v3 + 1, 0, (unsigned long long)(char)(v3 < a2)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e0f78); /* do not return */
            }
            else
            {
                return v2;
            }
        }
    } while (v1 < a1);
    return 0x110000;
}
