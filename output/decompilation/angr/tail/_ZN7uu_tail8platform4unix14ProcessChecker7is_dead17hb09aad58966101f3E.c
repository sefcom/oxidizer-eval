long long uu_tail::platform::unix::ProcessChecker::is_dead(unsigned int a0)
{
    if (!kill(a0, 0))
        return 0;
    return (int)uu_tail::platform::unix::get_errno() != 1;
}
