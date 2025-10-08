long long fish::screen::Screen::new(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = fish::terminal::Outputter::stdoutput();
    a0->padding_90[8].default();
    *((unsigned long long *)&a0->padding_90[40]) = v3;
    a0->field_0 = 0;
    a0->field_10 = 0;
    a0->field_18 = 8;
    a0->field_48 = 0;
    a0->field_20 = 0;
    a0->field_30 = 0;
    a0->field_50 = 8;
    *((uint128_t *)&(&a0->field_50)[1]) = 0;
    *((uint128_t *)((char *)&a0->field_58 + 8)) = 0;
    *((unsigned long long *)&a0->padding_78[8]) = 0x8000000000000000;
    *((unsigned int *)((char *)&a0->field_c8 + 8)) = 0;
    *((uint128_t *)&a0->field_c0) = 0;
    return a0;
}
