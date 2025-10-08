long long uu_cat::cat_handle(unsigned long long a0, unsigned long long a1, char a2[5], unsigned long long a3)
{
    if (a2[1])
    {
        return uu_cat::write_lines(a0, a1, a2, a3);
    }
    else if (a2[3])
    {
        return uu_cat::write_lines(a0, a1, a2, a3);
    }
    else if (a2[2])
    {
        return uu_cat::write_lines(a0, a1, a2, a3);
    }
    else if (a2[0])
    {
        return uu_cat::write_lines(a0, a1, a2, a3);
    }
    else if (a2[4])
    {
        return uu_cat::write_lines(a0, a1, a2, a3);
    }
    else
    {
        return uu_cat::write_fast();
    }
}
