long long fish::nix::getrusage(uint128_t a0[9], unsigned int a1)
{
    char v0;  // [bp-0x98]

    if (getrusage(-(a1), &v0))
    {
        fish::wutil::perror("getrusageShould have null terminatorsrc/null_terminated_array.rssrc/operation_context.rssrc/pager.rs", 9);
        a0[8] = 0;
        a0[7] = 0;
        a0[6] = 0;
        a0[5] = 0;
        a0[4] = 0;
        a0[3] = 0;
        a0[2] = 0;
        a0[1] = 0;
        a0[0] = 0;
    }
    else
    {
        memcpy(a0, &v0, 144);
    }
    return a0;
}
