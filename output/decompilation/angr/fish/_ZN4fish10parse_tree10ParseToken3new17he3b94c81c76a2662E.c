long long fish::parse_tree::ParseToken::new(struct_0 *a0, char a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    0.unwrap(&g_14dd4a0);
    a0->field_9 = a1;
    a0->field_8 = 0;
    *((unsigned int *)&(&a0->field_9)[1]) = 0;
    *((char *)&a0->field_a + 2) = 0;
    a0->field_0 = 4294967295;
    return a0;
}
