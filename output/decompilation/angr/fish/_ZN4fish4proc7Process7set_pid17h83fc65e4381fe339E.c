void fish::proc::Process::set_pid(unsigned long a0, unsigned int a1)
{
    char v0;  // [bp-0x10], Other Possible Types: unsigned long
    char v1;  // [bp-0x8]
    void* v3;  // rdi

    v0.try_insert(a0 + 144, a1);
    v3 = 0;
    if (v0)
        v3 = *((int *)&v1);
    v3.expect("Process::set_pid() called more than once!Job was already constructed", 41, &g_14df2c8);
    return;
}
