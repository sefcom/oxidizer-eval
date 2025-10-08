void fish::text_face::parse_text_face(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    int v3;  // [bp-0x38], Other Possible Types: char
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x20]

    v3.chain(a1, a1 + a2 * 24);
    v0.collect(&v3);
    fish::text_face::parse_text_face_and_options(&v3, v1, v2, 0);
    if (v5 != 2)
        core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14e2c70); /* do not return */
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v0, v1);
    return;
}
