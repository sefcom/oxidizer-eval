long long uu_cat::write_end(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, char a4)
{
    if (!(a4 & 1))
    {
        if (!(a3 & 1))
            goto LABEL_0x49f010;
        return uu_cat::write_tab_to_end(a1, a2, a0);
    }
    else if ((a3 & 1))
    {
        return uu_cat::write_nonprint_to_end(a1, a2, a0, "^I^?unknown filetype: ", 2);
    }
    else
    {
        return uu_cat::write_nonprint_to_end(a1, a2, a0, "\t^I^?unknown filetype: ", 1);
    }
}
