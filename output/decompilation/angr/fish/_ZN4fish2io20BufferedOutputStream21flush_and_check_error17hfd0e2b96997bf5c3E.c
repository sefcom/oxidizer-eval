long long fish::io::BufferedOutputStream::flush_and_check_error(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if ((char)a0.discarded())
        return 122;
    return 0;
}
