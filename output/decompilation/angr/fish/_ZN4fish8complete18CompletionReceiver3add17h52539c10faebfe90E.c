char fish::complete::CompletionReceiver::add(unsigned long long a0[4], unsigned long long a1)
{
    char v0;  // [bp-0x58]

    if (a0[2] < a0[3])
    {
        v0.into(a1);
        a0.push(&v0, &g_14d5a98);
    }
    else
    {
        core::ptr::drop_in_place<fish::complete::Completion>(a1);
    }
    return a0[2] < a0[3];
}
