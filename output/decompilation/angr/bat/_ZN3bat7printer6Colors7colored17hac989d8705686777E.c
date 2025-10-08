long long bat::printer::Colors::colored(struct_0 *a0, char a1, unsigned int a2, char a3)
{
    unsigned long long v1;  // rax

    v1 = 60946;
    if ((a1 & 1))
        v1 = bat::terminal::to_ansi_color(a2, a3);
    a0->field_8 = 0;
    a0->field_0 = 0;
    *((unsigned int *)&(&a0->field_8)[1]) = v1;
    *((unsigned int *)((char *)&a0->field_9 + 1)) = 21;
    *((unsigned long long *)((char *)&a0->field_d + 1)) = 0;
    *((char *)&a0->field_11 + 1) = 0;
    *((unsigned int *)((char *)&a0->field_11 + 2)) = v1;
    *((unsigned int *)((char *)&a0->field_11 + 6)) = 21;
    (&a0->field_19)[2] = 1;
    *((unsigned long long *)&(&a0->field_19)[3]) = 0;
    *((unsigned long long *)((char *)&a0->field_1e + 3)) = 90194313237;
    *((unsigned long long *)((char *)&a0->field_23 + 3)) = 0;
    *((char *)&a0->field_2b + 3) = 0;
    *((unsigned long long *)((char *)&a0->field_2b + 4)) = 90194313220;
    *((unsigned long long *)((char *)&a0->field_33 + 4)) = 0;
    (&a0->field_3b)[4] = 0;
    *((unsigned long long *)&(&a0->field_3b)[5]) = 90194313218;
    *((unsigned long long *)((char *)&a0->field_3c + 5)) = 0;
    *((char *)&a0->field_44 + 5) = 0;
    *((unsigned long long *)((char *)&a0->field_44 + 6)) = 90194313222;
    *((unsigned long long *)&(&a0->field_4c)[6]) = 0;
    *((char *)&a0->field_4d + 6) = 0;
    *((unsigned int *)((char *)&a0->field_4d + 7)) = v1;
    *((unsigned int *)((char *)&a0->field_55 + 3)) = 21;
    return v1;
}
