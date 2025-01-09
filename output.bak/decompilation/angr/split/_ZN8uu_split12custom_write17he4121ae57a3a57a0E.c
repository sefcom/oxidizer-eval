long long uu_split::custom_write::he4121ae57a3a57a0(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v2;  // rdx

    if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::hb07c88488005409a(a2, a0, a1))
    {
        return 0;
    }
    else if ((char)uu_split::ignorable_io_error::h1fd98bb79e2f8f89(v2, a3))
    {
        ::0x4c87b0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56();
        return 0;
    }
    else
    {
        return 1;
    }
}
