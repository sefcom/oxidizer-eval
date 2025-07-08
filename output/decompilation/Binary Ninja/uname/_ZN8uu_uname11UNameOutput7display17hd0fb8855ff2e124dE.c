
  int128_t* uu_uname::UNameOutput::display::hd0fb8855ff2e124d(int128_t* arg1, void* arg2)

{
    void* const rcx = arg2;
    
    if (*arg2 == -0x8000000000000000)
        rcx = nullptr;
    
    void* rdx = arg2 + 0x18;
    
    if (*(arg2 + 0x18) == -0x8000000000000000)
        rdx = nullptr;
    
    int64_t var_a8 = 0;
    void* r8 = arg2 + 0x30;
    
    if (*(arg2 + 0x30) == -0x8000000000000000)
        r8 = nullptr;
    
    void* r9 = arg2 + 0x48;
    
    if (*(arg2 + 0x48) == -0x8000000000000000)
        r9 = nullptr;
    
    void* r10 = arg2 + 0x60;
    
    if (*(arg2 + 0x60) == -0x8000000000000000)
        r10 = nullptr;
    
    int64_t var_a0 = 1;
    void* r11 = arg2 + 0x78;
    
    if (*(arg2 + 0x78) == -0x8000000000000000)
        r11 = nullptr;
    
    void* r14 = arg2 + 0x90;
    
    if (*(arg2 + 0x90) == -0x8000000000000000)
        r14 = nullptr;
    
    void* r15 = arg2 + 0xa8;
    
    if (*(arg2 + 0xa8) == -0x8000000000000000)
        r15 = nullptr;
    
    int64_t var_98 = 0;
    int64_t var_90 = 1;
    void* const var_88 = rcx;
    void* var_80 = rdx;
    void* var_78 = r8;
    void* var_70 = r9;
    void* var_68 = r10;
    void* var_60 = r11;
    void* var_58 = r14;
    void* var_50 = r15;
    int64_t var_48 = 0;
    int64_t var_40 = 8;
    int64_t var_38 = 0;
    int64_t var_28 = 0;
    
    while (true)
    {
        void* rax_1 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he5291530aa6c89ad(&var_90);
        
        if (!rax_1)
            break;
        
        int64_t rdi_1 = *(rax_1 + 8);
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h8a021e817a756358(rdi_1, 
            *(rax_1 + 0x10) + rdi_1);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h7d7b704ad484e1bb(&var_a8, rax_2, rdx_1);
        alloc::string::String::push::h859ae11851fd8b8e(&var_a8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$core..array..iter..IntoIter$LT$core..option..Option$LT$$RF$alloc..string..String$GT$$C$8_usize$GT$$GT$$GT$::h58996adff40e52b0(&var_90);
    arg1[1] = var_98;
    *arg1 = var_a8;
    return arg1;
}
