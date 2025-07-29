long long uu_dd::parseargs::get_ctable(char a0, char a1)
{
    if (a0 == 3)
    {
        if (a1 == 2)
        {
            return 0;
        }
        else if ((a1 & 1))
        {
            return &g_437cac;
        }
        else
        {
            return &g_437bac;
        }
    }
    else
    {
        if (a1 == 2)
        {
            return g_438634[a0] + (char *)&g_438634[0];
        }
        else if (a0 != 2)
        {
            if (a0 == 1)
            {
                if ((a1 & 1))
                    return &g_4383ac;
                return &g_4382ac;
            }
            else
            {
                if ((a1 & 1))
                    return &g_4381ac;
                return &g_4380ac;
            }
        }
        else
        {
            if ((a1 & 1))
                return &g_4380ac;
            return &g_4381ac;
        }
    }
}
