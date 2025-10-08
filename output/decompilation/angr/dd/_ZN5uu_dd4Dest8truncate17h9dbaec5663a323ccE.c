long long uu_dd::Dest::truncate(char *a0)
{
    unsigned long v1;  // rdx

    if (*(a0) != 1)
    {
        return 0;
    }
    else if (((char)a0 + 4.stream_position() & 1))
    {
        return v1;
    }
    else
    {
        return a0 + 4.set_len(v1);
    }
}
