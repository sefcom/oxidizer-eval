void fish::common::exit_without_destructors(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    _exit(a0); /* do not return */
}
