
  int128_t* uu_uname::UNameOutput::display::hd46e899639185bb3(int128_t* arg1, int64_t* arg2)

{
    int64_t* rax = arg2;
    
    if (0 + -(*arg2))
        rax = nullptr;
    
    void* rcx = &arg2[3];
    
    if (0 + -(arg2[3]))
        rcx = nullptr;
    
    int64_t var_a8 = 0;
    void* rdi = &arg2[6];
    
    if (0 + -(arg2[6]))
        rdi = nullptr;
    
    void* r8 = &arg2[9];
    
    if (0 + -(arg2[9]))
        r8 = nullptr;
    
    void* r9 = &arg2[0xc];
    
    if (0 + -(arg2[0xc]))
        r9 = nullptr;
    
    int64_t var_a0 = 1;
    void* r10 = &arg2[0xf];
    
    if (0 + -(arg2[0xf]))
        r10 = nullptr;
    
    void* r11 = &arg2[0x12];
    
    if (0 + -(arg2[0x12]))
        r11 = nullptr;
    
    void* r14 = &arg2[0x15];
    
    if (0 + -(arg2[0x15]))
        r14 = nullptr;
    
    int64_t var_98 = 0;
    int64_t var_90 = 1;
    int64_t var_88 = 0;
    int64_t var_80 = 8;
    int64_t* var_78 = rax;
    void* var_70 = rcx;
    void* var_68 = rdi;
    void* var_60 = r8;
    void* var_58 = r9;
    void* var_50 = r10;
    void* var_48 = r11;
    void* var_40 = r14;
    int64_t var_38 = 0;
    int64_t var_28 = 0;
    
    while (true)
    {
        void* rax_1 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h235ca32fda697424(&var_90);
        
        if (!rax_1)
            break;
        
        int64_t rsi = *(rax_1 + 8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb3f89bf696acadb6(&var_a8, rsi, *(rax_1 + 0x10) + rsi);
        alloc::string::String::push::h0ede46164189e411(&var_a8);
    }
    
    arg1[1] = var_98;
    *arg1 = var_a8;
    return arg1;
}
