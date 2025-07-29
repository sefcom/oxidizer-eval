char uu_env::native_int_str::get_single_native_int_value(unsigned int *a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    unsigned long v3;  // rax

    v0 = v3;
    v1 = 0;
    return ::0x4bd660::core::char::methods::encode_utf8_raw(*(a0), &v1) == 1;
}
