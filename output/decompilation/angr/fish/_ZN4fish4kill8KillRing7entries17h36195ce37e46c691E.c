long long fish::kill::KillRing::entries(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]

    v0.iter(a1);
    return a0.collect(&v0);
}
