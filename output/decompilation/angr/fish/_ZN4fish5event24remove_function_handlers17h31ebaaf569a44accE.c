long long fish::event::remove_function_handlers(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0;
    v1 = a1;
    return fish::event::remove_handlers_if(&v0);
}
