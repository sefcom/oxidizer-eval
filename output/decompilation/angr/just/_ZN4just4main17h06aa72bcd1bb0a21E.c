long long just::main()
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // edx

    std::env::args_os(&v0);
    v2 = just::run::run(&v0);
    if (((char)v2 & 1))
        std::process::exit(v3); /* do not return */
    return v2;
}
