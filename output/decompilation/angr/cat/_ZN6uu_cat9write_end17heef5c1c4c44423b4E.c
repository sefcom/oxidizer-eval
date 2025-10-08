long long uu_cat::write_end(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, char a4)
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdx

    if (!(a4 & 1))
    {
        v1 = a1;
        v2 = a2;
        v3 = a0;
        if (!(a3 & 1))
            return uu_cat::write_to_end(a1, a2, a0);
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
