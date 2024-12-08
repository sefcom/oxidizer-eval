long long uu_split::custom_write::h45337cac5f1cc259(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v2;  // rdx

    if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::h54890cb6b11bd8f1(a2, a0, a1))
    {
        return 0;
    }
    else if ((char)uu_split::ignorable_io_error::hf12a8318e09b01cb(v2, a3))
    {
        ::0x4c8880::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h424c02d48e02c0e3(v2);
        return 0;
    }
    else
    {
        return 1;
    }
}
