long long fish::trace::trace_if_enabled(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    v1 = fish::trace::trace_enabled(a0);
    if (!(char)v1)
        return v1;
    return (unsigned long long)fish::trace::trace_argv(a0, a1, a2);
}
