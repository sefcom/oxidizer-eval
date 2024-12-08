long long uu_sort::ext_sort::sorter::hdd9f7bff153f3fef(unsigned long long a0, unsigned long long a1, char a2[133])
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long v2;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rsi

    v4 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(a0, a1, a2);
    v0 = v4;
    if (v0)
    {
        do
        {
            v1 = v4;
            uu_sort::sort_by::hc112b59814c98b5a(v1 + 24, a2, v1 + 48);
            v2 = std::sync::mpmc::Sender$LT$T$GT$::send::hae420f74e3c00907(a1, v1, v5);
            v6 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h50da15b09dd710c6(&v2);
            if (v2)
                return v6;
        } while ((v4 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(a0, v7, v5), v0 = v4, v0));
    }
    v6 = ::0x5779b0::core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h5c06c5f2ae37ad5a(&v0);
    return v6;
}
