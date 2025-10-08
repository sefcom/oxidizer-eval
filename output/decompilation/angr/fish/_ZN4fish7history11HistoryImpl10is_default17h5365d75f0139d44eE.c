long long fish::history::HistoryImpl::is_default(unsigned long long a0, unsigned long long a1)
{
    return a0.equal(a1, "f", 4);
}
