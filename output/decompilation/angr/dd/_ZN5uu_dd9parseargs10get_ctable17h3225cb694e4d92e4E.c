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
            return &g_4213c2;
        }
        else
        {
            return &g_4212c2;
        }
    }
    else
    {
        if (a1 == 2)
        {
            return g_4234c4[a0] + (char *)&g_4234c4[0];
        }
        else if (a0)
        {
            if (a0 == 1)
            {
                if ((a1 & 1))
                    return &g_421ac2;
                return &g_4219c2;
            }
            else
            {
                if ((a1 & 1))
                    return &g_4217c2;
                return &g_4218c2;
            }
        }
        else
        {
            if ((a1 & 1))
                return &g_4218c2;
            return &g_4217c2;
        }
    }
}
