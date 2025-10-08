long long linera_summary::summary_options::SummaryOptions::workflows(unsigned long long a0, unsigned long long a1[5])
{
    void* v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned short v3;  // [bp-0x18]

    v2.into_searcher(44, a1[3], a1[4]);
    v0 = 0;
    v1 = a1[4];
    v3 = 1;
    a0.collect(&v0);
    return a0;
}
