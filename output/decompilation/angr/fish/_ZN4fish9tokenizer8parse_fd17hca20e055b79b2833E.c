long long fish::tokenizer::parse_fd(unsigned long long a0, unsigned long a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    if (!a1)
        core::panicking::panic("assertion failed: !s.is_empty()assertion failed: c.is_ascii_digit()", 31, &g_14e3f78); /* do not return */
    v0.collect(a0, a0 + a1 * 4);
    core::str::converts::from_utf8(&v3, v1, v2);
    v6 = core::num::<impl i32>::from_ascii_radix(v3.unwrap(&g_14e3f90), v5);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return -(0 < ((char)v6 & 1)) | (unsigned int)(v6 >> 32);
}
