double fish::tinyexpr::npr()
{
    unsigned long v1;  // xmm1lq
    unsigned long v2;  // xmm0lq

    fish::tinyexpr::ncr();
    fish::tinyexpr::fac();
    return (unsigned long long)(MulV(v1, v2));
}
