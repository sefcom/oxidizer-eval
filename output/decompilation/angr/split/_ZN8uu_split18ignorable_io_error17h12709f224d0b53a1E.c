char uu_split::ignorable_io_error(unsigned long long a0, unsigned long a1)
{
    unsigned long v1;  // cc_ndep

    return (char)amd64g_calculate_condition(1, 8, 0, a1, v1) & (char)a0.kind() == 11;
}
