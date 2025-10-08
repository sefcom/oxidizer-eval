long long fish::screen::line_shared_prefix(struct_1 *a0, struct_0 *a1)
{
    struct_1 *v0;  // [bp-0x40]
    struct_0 *v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    void* v4;  // rbx
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned long v7;  // rax
    unsigned long long *v8[3];  // r15
    void* v9;  // rbx
    void* v10;  // r14

    v0 = a0;
    v1 = a1;
    if (!a0->field_10.min(a1->field_10))
        return 0;
    v4 = 0;
    while (true)
    {
        v5 = a0.char_at(v4);
        if (v5 != (int)a1.char_at(v4))
            break;
        v6 = a0.color_at(v4);
        v7 = (int)a1.color_at(v4) ^ v6;
        if ((unsigned int)v7 >= 0x10000 || ((char)v7 & 1) || ((unsigned short)v7 & 0x100))
            break;
        v4 += 1;
        if (v3 == v4)
            return v3;
    }
    if (v4)
    {
        if (fish::fallback::fish_wcwidth(a0.char_at(v4)) > 0)
        {
            if (fish::fallback::fish_wcwidth(a1.char_at(v4)) > 0)
                return v4;
            v8 = &v1;
            if (v4 != 1)
                goto LABEL_140f94c;
        }
        else
        {
            v8 = &v0;
            if (v4 != 1)
            {
LABEL_140f94c:
                do
                {
                    v9 = v4;
                    v10 = v9 - 1;
                    if (fish::fallback::fish_wcwidth(*(v8).char_at(v10)) > 0 && fish::fallback::fish_wcwidth(*(v8).char_at(v9)) > 0)
                        return v9;
                    v4 = v10;
                } while (v4 > 1);
            }
        }
        return fish::fallback::fish_wcwidth(*(v8).char_at(1)) > 0;
    }
    return 0;
}
