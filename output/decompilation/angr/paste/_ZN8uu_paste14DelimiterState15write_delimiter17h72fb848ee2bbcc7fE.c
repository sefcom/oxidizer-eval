long long uu_paste::DelimiterState::write_delimiter(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    void* v2;  // rax
    unsigned long long v3;  // rax

    v1 = a0->field_0;
    if (!v1)
    {
        return v1;
    }
    else if ((unsigned int)v1 == 1)
    {
        return a1.append_elements(*((long long *)&a0->field_8), *((long long *)((char *)&a0[1].field_0 + 7)), &g_570218);
    }
    else
    {
        v2 = (char *)&a0[4].field_0 + 4.next();
        if (!v2)
            core::option::unwrap_failed(&g_570230); /* do not return */
        v3 = a1.append_elements(*((long long *)v2), (long long)v2[8], &g_570248);
        *((int128_t *)&a0->field_8) = *((int128_t *)v2);
        return v3;
    }
}
