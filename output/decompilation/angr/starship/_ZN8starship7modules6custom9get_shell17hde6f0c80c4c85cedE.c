double starship::modules::custom::get_shell(long long a0, long long a1, long long a2)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    int v3;  // xmm0
    unsigned long v4;  // xmm0lq

    if (a2)
    {
        v3 = *(a1);
        *((unsigned long long *)a0) = 0x8000000000000000;
        a0[8] = v3;
        *((uint128_t **)&a0[24]) = a1 + 1;
        *((unsigned long *)&a0[32]) = a2 - 1;
        return (unsigned long long)v3;
    }
    v0.get_env("STARSHIP_SHELLsrc/bug_report.rs", 14);
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        core::ptr::drop_in_place<regex::error::Error>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((char **)&a0[8]) = "shError creating command with STARSHIP_SHELL, falling back to fallback shell: Failed to run command with given shell or STARSHIP_SHELL env variable:: Executing custom command  timed out.You can set command_timeout in your config to a higher value or set ignore_timeout to true for this module to allow longer-running commands to keep executing.";
        *((unsigned long long *)&a0[16]) = 2;
    }
    else
    {
        *((long long *)&a0[16]) = *((long long *)&v1);
        v4 = (unsigned long long)v0;
        *(a0) = v0;
    }
    *((unsigned long long *)&a0[24]) = 8;
    *((unsigned long long *)&a0[32]) = 0;
    return v4;
}
