long long uu_fmt::parasplit::FileLines::compute_indent(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    void* v4;  // rax
    unsigned int v5;  // edx
    void* v6;  // r12
    void* v7;  // rbx
    struct_0 *v8;  // 4096
    unsigned int v9;  // ebp
    unsigned long long v10;  // cc_ndep
    struct_0 *v11;  // r15
    unsigned int v12;  // ebp
    struct_0 *v14;  // r15
    unsigned int v15;  // edi
    unsigned long v16;  // rcx

    v0 = a2;
    v1 = a3 + a2;
    v2 = 0;
    v4 = v0.next();
    if (v5 == 0x110000)
    {
        v6 = 0;
        v4 = 0;
        v7 = 0;
    }
    else
    {
        v7 = 0;
        v6 = 0;
        v8 = a1;
        do
        {
            v11 = v8;
            v12 = v9;
            if (v4 == a4)
            {
                v7 = v6;
                if ((char)_ccall(2, 8, v4, a4, v10))
                    goto LABEL_462be7;
            }
            else
            {
                v7 = v7;
                if ((char)_ccall(2, 8, v4, a4, v10))
                    goto LABEL_462be7;
            }
            v14 = v11;
            v15 = 32;
            if (v12 == 32)
            {
LABEL_462bc0:
                v11 = v14;
                v6 += uu_fmt::parasplit::char_width(v15);
            }
            else
            {
                if (v12 - 9 >= 5)
                {
                    if (v12 < 128)
                        goto LABEL_462c72;
                    v14 = a1;
                    v15 = v12;
                    if (((int)::0x45f200::core::unicode::unicode_data::white_space::lookup(v15) & 255))
                        goto LABEL_462bc0;
                    goto LABEL_462c72;
                }
LABEL_462be7:
                v14 = v11;
                v15 = v12;
                if (v15 == 9)
                {
                    v16 = v11->field_40;
                    if (!v16)
                        core::panicking::panic_const::panic_const_div_by_zero(&g_4f04c0); /* do not return */
                    v10 = _ccall(19, 0, 0, v10);
                    v6 = v16 * ((!(v6 | v16) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v6) % (v16 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v6) / (v16 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v6) % v16) CONCAT (unsigned long long)((0 CONCAT v6) / v16)) + 1);
                }
            }
            v4 = v0.next();
            v9 = v5;
            v8 = v11;
        } while (v9 != 0x110000);
        v4 = 0;
LABEL_462c72:
    }
    a0[0] = v4;
    a0[1] = v7;
    a0[2] = v6;
    return v4;
}
