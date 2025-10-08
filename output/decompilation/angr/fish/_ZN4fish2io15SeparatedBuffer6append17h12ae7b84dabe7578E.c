long long fish::io::SeparatedBuffer::append(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x51]
    char v1;  // [bp-0x50]
    unsigned long long v3;  // rax
    unsigned long long v4;  // r13

    v3 = a0.try_add_size(a2);
    if (!(char)v3)
        return v3;
    v0 = v3;
    if (!a3)
    {
        v4 = a0[2];
        if (!(char)a0[1].last_inferred(v4))
            goto LABEL_13d1c26;
        if (!v4)
            core::option::unwrap_failed(&g_14db680); /* do not return */
        a0[1] + v4 * 32 - 32.spec_extend(a1, a2 + a1);
    }
    else
    {
LABEL_13d1c26:
        v1.to_vec(a1, a2);
        a0.push(&v1);
    }
    return v0;
}
