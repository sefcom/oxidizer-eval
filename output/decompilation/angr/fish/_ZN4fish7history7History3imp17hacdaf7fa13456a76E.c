long long fish::history::History::imp(unsigned long long a0)
{
    char v0;  // [bp-0x20]

    v0.lock(a0);
    return v0.unwrap();
}
