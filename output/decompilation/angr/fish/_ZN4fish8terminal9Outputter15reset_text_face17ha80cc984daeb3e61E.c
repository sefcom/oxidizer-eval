long long fish::terminal::Outputter::reset_text_face(struct_0 *a0)
{
    char v0;  // [bp-0x20]
    unsigned long long v2;  // rax

    v0 = 0;
    v2 = a0.write_command(&v0);
    a0->field_20 = 0;
    a0->field_24 = 773;
    a0->field_29 = 3;
    *((unsigned int *)&(&a0->padding_2a)[1]) = 0;
    return v2;
}
