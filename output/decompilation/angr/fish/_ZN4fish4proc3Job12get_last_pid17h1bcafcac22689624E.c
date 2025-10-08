long long fish::proc::Job::get_last_pid(unsigned long long a0[5])
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rax

    v1 = a0[3].fold(a0[4] * 224 + a0[3]);
    if (!v1)
        return 0;
    v2 = v1 + 144.get();
    if (!v2)
        return 0;
    return *(v2);
}
