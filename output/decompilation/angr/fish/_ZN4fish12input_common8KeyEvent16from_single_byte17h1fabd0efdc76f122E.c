long long fish::input_common::KeyEvent::from_single_byte(struct_0 *a0, unsigned int a1)
{
    unsigned long long v1;  // rax

    v1 = a1.from_single_byte();
    a0->field_0 = v1;
    a0->field_4 = v1 >> 32;
    *((unsigned long long *)&(&a0->field_4)[1]) = 0;
    *((unsigned int *)((char *)&a0->field_5 + 4)) = 0;
    return a0;
}
