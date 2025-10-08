char fish::proc::Job::is_foreground(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return a0.group().is_foreground();
}
