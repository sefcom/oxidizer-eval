long long uu_join::Repr$LT$Sep$GT$::print_format::h5c02f8d83de19c05(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x48]
    unsigned long long v6;  // rbp
    void* v8;  // rax
    unsigned long long v10;  // r15
    unsigned long long v12;  // rbx

    v0 = a0[1];
    while (true)
    {
        v6 = 0;
        if (v6 >= a0[2])
            return 0;
        if (v6)
        {
            v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, 1, 0);
            if (v8)
                return v8;
        }
        v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, v10, v12);
        if (v8)
            return v8;
    }
}
