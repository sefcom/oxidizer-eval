long long fd::cli::ensure_current_directory_exists()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (!(char)fd::filesystem::is_existing_directory("./cannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero typeTryFromIntErrorfatal runtime error: thread result panicked on drop, abort", 2))
    {
        v0 = &g_802130;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        return anyhow::__private::format_err(&v0);
    }
    return 0;
}
