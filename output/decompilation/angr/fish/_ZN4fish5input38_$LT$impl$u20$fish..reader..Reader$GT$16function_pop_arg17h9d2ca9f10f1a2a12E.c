long long fish::input::<impl fish::reader::Reader>::function_pop_arg(unsigned long long a0[173])
{
    unsigned long long v1;  // rax

    v1 = a0[172];
    if (!v1)
        return 0x110000;
    a0[172] = v1 - 1;
    return *((int *)(a0[171] + v1 * 4 - 4));
}
