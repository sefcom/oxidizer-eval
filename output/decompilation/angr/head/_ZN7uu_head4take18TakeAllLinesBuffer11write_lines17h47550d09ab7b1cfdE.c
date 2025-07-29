long long uu_head::take::TakeAllLinesBuffer::write_lines(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: uint128_t
    unsigned long v5;  // rdx
    void* v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax

    if (!a3)
    {
        v0 = &g_593600;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_593620); /* do not return */
    }
    else if (a1->field_20 >= a3)
    {
        v7 = a1.remaining_buffer();
        v3 = a4;
        v0 = v7;
        v1 = v7;
        v2 = v8 + v7;
        if (v0.advance_by(a3 - 1) || v0.next(&v3) != 1)
        {
            v0 = &g_593610;
            v1 = 1;
            v2 = 8;
            v3 = 0;
            core::panicking::panic_fmt(&v0, &g_593638); /* do not return */
        }
        v9 = v8 + 1;
        v10 = a1.write_bytes_exact(a2, v9);
        if (v10)
        {
            a0[1] = v10;
LABEL_4b1394:
            v12 = 1;
        }
        else
        {
            v6 = a1->field_20 - a3;
LABEL_4b13ad:
            a1->field_20 = v6;
            a0[1] = v9;
            a0[2] = a3;
            v12 = 0;
        }
        a0[0] = v12;
        return v12;
    }
    else if (a1.write_all(a2))
    {
        a0[1] = v5;
        goto LABEL_4b1394;
    }
    else
    {
        a3 = a1->field_20;
        v6 = 0;
        goto LABEL_4b13ad;
    }
}
