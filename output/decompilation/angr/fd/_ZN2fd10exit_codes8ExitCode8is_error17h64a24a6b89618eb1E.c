long long fd::exit_codes::ExitCode::is_error(char a0)
{
    unsigned long v1;  // rax

    v1 = (a0 - 2 < 4 ? a0 - 2 : 1);
    if ((unsigned int)(v1 - 2) < 2)
    {
        return v1 & 0xffffff00 | 1;
    }
    else if (!(unsigned int)v1)
    {
        return 0;
    }
    else
    {
        return v1 & 0xffffff00 | !(a0 & 1);
    }
}
