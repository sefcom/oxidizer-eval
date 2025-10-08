long long fish::proc::Job::get_pgid(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return a0.group().get_pgid();
}
