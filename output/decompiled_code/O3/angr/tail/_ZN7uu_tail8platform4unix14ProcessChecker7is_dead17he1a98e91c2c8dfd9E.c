long long uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(unsigned int *a0)
{
    if (kill(*(a0), 0))
        return (unsigned int)(-0x100 | (int)uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() != 1);
    return 0;
}
