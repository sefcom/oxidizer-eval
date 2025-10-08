long long uu_split::custom_write(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v1;  // rdx

    if (!((char)a2.write(a0, a1) & 1))
    {
        return 0;
    }
    else if (uu_split::ignorable_io_error(v1, a3))
    {
        core::ptr::drop_in_place<std::io::error::Error>(&vvar_37{reg 32});
        return 0;
    }
    else
    {
        return 1;
    }
}
