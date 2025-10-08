long long forc_crypto::args::read_content_filepath_or_stdin(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1[3];  // [bp-0x40]
    unsigned long v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x18]
    char v7;  // dl
    int v8;  // xmm0

    forc_crypto::args::checked_read_file(&v1, a1);
    if ((char)(((0 ^ v1[0]) & (0 ^ -(v1[0]))) >> 63))
    {
        v0 = std::io::stdio::stdin();
        forc_crypto::args::checked_read_stdin(&v3, a1, v0.lock(), v7 & 1);
        if (*((long long *)&v3) == 0x8000000000000000)
        {
            forc_crypto::args::read_as_binary(a0, a1);
        }
        else
        {
            a0->field_10 = *((long long *)&v4);
            v8 = v3;
LABEL_7f9135:
            *((void*)&a0->field_0) = v8;
        }
    }
    else
    {
        a0->field_10 = v2;
        v8 = v1;
        goto LABEL_7f9135;
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a1);
    return a0;
}
