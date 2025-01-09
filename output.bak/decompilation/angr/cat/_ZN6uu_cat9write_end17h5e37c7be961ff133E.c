long long uu_cat::write_end::h5e37c7be961ff133(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, char a4)
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // r8

    if (!a4)
    {
        if (!a3)
            goto LABEL_0x4b0bc0;
        return uu_cat::write_tab_to_end::h72aa057f554663f6(a1, a2, a0);
    }
    if (a3)
    {
        v1 = "^I";
        v2 = 2;
    }
    else
    {
        v1 = "\t";
        v2 = 1;
    }
    return uu_cat::write_nonprint_to_end::h8a88ce313d35316b(a1, a2, a0, v1, v2);
}
