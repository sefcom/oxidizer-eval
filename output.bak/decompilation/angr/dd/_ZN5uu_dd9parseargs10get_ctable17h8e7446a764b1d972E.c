long long uu_dd::parseargs::get_ctable::h8e7446a764b1d972(unsigned long a0, char a1)
{
    if ((char)a0 != 3)
    {
        if (a1 == 2)
        {
            return g_423928[a0 & 255] + (char *)&g_423928[0];
        }
        else if ((char)a0 == 2)
        {
            if ((a1 & 1))
                return &g_423525;
            return &g_423625;
        }
        else
        {
            if ((unsigned int)a0 != 1)
            {
                if ((a1 & 1))
                    return &g_423625;
                return &g_423525;
            }
            else
            {
                if ((a1 & 1))
                    return &g_423825;
                return &g_423725;
            }
        }
    }
    else
    {
        if (a1 == 2)
        {
            return 0;
        }
        else if ((a1 & 1))
        {
            return &g_423125;
        }
        else
        {
            return &g_423025;
        }
    }
}
