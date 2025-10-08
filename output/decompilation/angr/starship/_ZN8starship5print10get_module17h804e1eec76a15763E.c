long long starship::print::get_module(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x68]

    starship::modules::handle(&v0, a1, a2, a3);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        *(a0) = 0x8000000000000000;
    else
        starship::print::get_module::{{closure}}(a0, &v0, a2);
    return a0;
}
