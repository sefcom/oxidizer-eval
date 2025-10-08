long long fish::history::HistoryImpl::timestamp_now(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned int v4;  // edx

    v0 = std::time::SystemTime::now();
    v1 = v4;
    v2.duration_since(&v0, 0, 0);
    v2.duration_since(a0 + 112, 0, 0);
    if ((v2 & 1))
    {
        if (!(v2 & 1))
            return v0;
    }
    else
    {
        if ((v2 & 1))
            return v0;
    }
    v0.add_assign(1, 0);
    return v0;
}
