long long hx::main()
{
    char v0;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x8]

    hx::main_impl(&v0);
    if (v0 != 1)
        std::process::exit(v1); /* do not return */
    return *((long long *)&v2);
}
