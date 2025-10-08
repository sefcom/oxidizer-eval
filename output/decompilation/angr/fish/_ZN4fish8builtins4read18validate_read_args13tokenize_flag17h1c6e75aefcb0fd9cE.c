long long fish::builtins::read::validate_read_args::tokenize_flag(char a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (a0 == 1)
        return "-";
    v2 = a0;
    if ((unsigned int)v2 != 2)
    {
        v0 = v2;
        fish::builtins::read::validate_read_args::tokenize_flag::panic_cold_explicit(); /* do not return */
    }
    return "-";
}
