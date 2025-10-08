long long fish::wait_handle::WaitHandleStore::get_by_pid(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]
    unsigned long long *v2;  // rax

    v0 = a1;
    v2 = a0.peek(&v0);
    if (!v2)
        return 0;
    *(v2).inc_strong();
    return *(v2);
}
