long long starship::modules::os::get_version(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax

    v1 = a1.filter();
    if (!v1)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    return a0.spec_to_string(v1);
}
