long long uu_chcon::errors::Error::from_io1(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    int v1;  // [bp-0x28], Other Possible Types: char
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax

    v0 = 261993005058;
    v1.into(a1);
    a0->field_18 = "Getting security context.Invalid security context Error flushing stdout: ";
    a0->field_20 = 24;
    *((void*)&(&a0->padding_4)[1]) = v1;
    v4 = *((long long *)&v2);
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
    a0->field_28 = 261993005058;
    a0->field_0 = 17;
    return v4;
}
