long long fish::builtins::wait::can_wait_on_job(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)a0.is_constructed())
    {
        return 0;
    }
    else if (a0.is_foreground())
    {
        return 0;
    }
    else
    {
        v1 = a0.is_stopped();
        return v1 & 0xffffffffffffff00 | (char)v1 ^ 1;
    }
}
