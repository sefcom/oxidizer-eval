long long bat::printer::InteractivePrinter::highlight_regions_for_line(struct_2 *a0, unsigned long long a1[64], unsigned long long a2, unsigned long long a3)
{
    struct_0 *v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char v1;  // [bp-0x70]
    struct_0 *v2;  // [bp-0x68]
    struct_0 *v3;  // [bp-0x60]
    int v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    char v6;  // [bp-0x38]
    struct_0 *v8;  // rax
    unsigned long long v9;  // 4096
    unsigned long long v11;  // cc_ndep
    unsigned long long v12;  // rdx
    unsigned long long v13;  // 4096
    struct_0 *v15;  // r12

    if ((char)(((0 ^ a1[37]) & (0 ^ -(a1[37]))) >> 63))
    {
        v8 = 8.alloc_impl(32, 0);
        if (!v8)
            alloc::alloc::handle_alloc_error(8, 32); /* do not return */
        v0 = 18410573989437996927;
        v1 = 0;
        v8->field_0 = *((int128_t *)&v0);
        v8->field_10 = a2;
        v8->field_18 = a3;
        a0->field_8 = 1;
        a0->field_10 = v8;
        a0->field_18 = 1;
        a0->field_0 = 13;
        return v8;
    }
    else
    {
        if (a3 < 16385)
            v9 = a2;
        else
            v9 = "\nWriting metadata to folder  ... okay\n";
        v12 = v9;
        if ((char)_ccall(2, 8, a3, 16385, v11))
            v13 = a3;
        else
            v13 = 1;
        (char)v0.highlight_line(&a1[37], v12, v13, a1[63]);
        v15 = *((long long *)&v1);
        if (v0 != 9223372036854775818)
        {
            *((long long *)((char *)&a0->field_38 + 8)) = *((long long *)&v6);
            *((void*)((char *)&a0->field_28 + 8)) = v5;
            *((void*)&(&a0->field_20)[1]) = v4;
            a0->field_0 = 2;
            a0->field_8 = v0;
            a0->field_10 = v15;
            a0->field_18 = v2;
            a0->field_20 = v3;
            return v3;
        }
        if (a3 > 0x4000)
        {
            if (v3)
            {
                v2->field_10 = a2;
                v2->field_18 = a3;
            }
            else
            {
                core::panicking::panic_bounds_check(0, 0, &g_aceac0); /* do not return */
            }
        }
        a0->field_8 = v15;
        a0->field_10 = v2;
        a0->field_18 = v3;
        a0->field_0 = 13;
        return v3;
    }
}
