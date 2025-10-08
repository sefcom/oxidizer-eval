long long fish::builtins::fish_indent::PrettyPrinter::prettify(struct_0 *a0, void* a1)
{
    unsigned long v1;  // r15
    unsigned long long v3;  // rdx
    void* v4;  // rsi
    void* v5;  // rax

    v1 = a1 + 48;
    *((unsigned long long *)&a1[64]) = 0;
    *((long long *)&a1[168]) = (long long)a1[184] + 48;
    a1.prettify_traversal();
    a1.emit_gap_text_before((unsigned int)(long long)a1[152].new(0), v3, 0);
    v4 = (long long)a1[64];
    if ((long long)a1[64])
    {
        while ((char)(long long)a1[56].at_line_start(v4))
        {
            v1.pop();
            if (!(long long)a1[64])
                break;
        }
    }
    a1.emit_newline();
    v5 = *((long long *)(v1 + 16));
    a0->field_10 = v5;
    a0->field_0 = *((int128_t *)v1);
    *((unsigned long long *)&a1[48]) = 0;
    *((unsigned long long *)&a1[56]) = 4;
    *((unsigned long long *)&a1[64]) = 0;
    return v5;
}
