long long uu_touch::datetime_to_filetime(unsigned int a0[2])
{
    unsigned int v1;  // eax

    v1 = a0[0].num_days_from_ce();
    return (v1 - 719163) * 86400 + a0[1];
}
