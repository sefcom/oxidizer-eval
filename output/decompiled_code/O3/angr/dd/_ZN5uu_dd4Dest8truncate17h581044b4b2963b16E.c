long long uu_dd::Dest::truncate::h581044b4b2963b16(char *a0)
{
    unsigned long v1;  // rdx

    if (*(a0) != 1)
    {
        return 0;
    }
    else if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0 + 4, 2))
    {
        return v1;
    }
    else
    {
        return std::fs::File::set_len::hd21acd2eeb028efb(a0 + 4, v1);
    }
}
