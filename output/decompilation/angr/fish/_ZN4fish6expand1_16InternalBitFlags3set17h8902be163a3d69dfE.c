long long fish::expand::_::InternalBitFlags::set(unsigned short *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v1;  // eax

    v1 = *(a0);
    *(a0) = (!a2 ? ~(a1) & v1 : v1 | a1);
    return (!a2 ? ~(a1) & v1 : v1 | a1);
}
