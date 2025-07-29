long long uu_more::Pager::update_display(unsigned long a0, char a1, char a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rdx
    unsigned long long v6;  // rdx

    v0 = v2;
    if ((a1 & 1))
    {
        if (!a0 + 192.execute() && !v3.execute(2))
            return 0;
    }
    else
    {
        if (!(a2 & 1))
        {
            return 0;
        }
        else if (!a0 + 192.execute(0) && !v4.execute())
        {
            return 0;
        }
    }
    return v6.from();
}
