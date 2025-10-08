long long fish::reader::querying_allowed()
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]

    if (!fish::future_feature_flags::test(8))
    {
        return 0;
    }
    else if (!(char)fish::screen::is_dumb())
    {
        std::env::var_os(&v0, "MC_TMPDIRReturning %lu pending input eventsassertion failed: isatty(inputfd)initial query", 9);
        if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
        {
            core::ptr::drop_in_place<std::env::VarError>(v0, *((long long *)&v1));
            return 0;
        }
        core::ptr::drop_in_place<std::env::VarError>(0x8000000000000000, *((long long *)&v1));
        return fish::nix::isatty(1);
    }
    else
    {
        return 0;
    }
}
