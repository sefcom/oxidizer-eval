
  int64_t fd::output::print_entry::hc890df4f63d95a00(int64_t* arg1, int32_t* arg2, void* arg3)

{
    uint64_t r12;
    uint64_t var_20 = r12;
    void** const var_98;
    int64_t var_80;
    int64_t rbp;
    
    if (*(arg3 + 0x1e8))
    {
        r12 = arg2;
        char* rax_1;
        uint64_t rdx;
        rax_1 = fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg2);
        int64_t var_40;
        fd::hyperlink::PathUrl::new::hdbaee58768b6d289(&var_40, rax_1, rdx);
        bool o_1 = 0 + -(var_40);
        rbp = !o_1;
        
        if (!o_1)
        {
            int64_t var_30;
            int64_t var_58_1 = var_30;
            int128_t var_68 = var_40;
            int128_t* var_50 = &var_68;
            int64_t (* var_48_1)(void* arg1, int64_t* arg2) = _$LT$fd..hyperlink..PathUrl$u20$as$u20$core..fmt..Display$GT$::fmt::h26ba7c628c69def1;
            var_98 = &data_8024f0;
            int64_t var_90_1 = 2;
            int64_t var_78_1 = 0;
            int128_t** var_88_1 = &var_50;
            var_80 = 1;
            int64_t rax_3 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_98);
            core::ptr::drop_in_place$LT$fd..hyperlink..PathUrl$GT$::h2d976cf0ed371e6c(var_68, 
                *var_68[8]);
            
            if (rax_3)
                return rax_3;
        }
        
        arg2 = r12;
        
        if (*(arg3 + 0x30) == 2)
            goto label_5f698e;
        
        goto label_5f69ba;
    }
    
    rbp = 0;
    int64_t rax_4;
    
    if (*(arg3 + 0x30) != 2)
    {
        label_5f69ba:
        rax_4 = fd::output::print_entry_format::h055b3d4dd7dc026a(arg1, arg2, arg3, arg3 + 0x30);
        
        if (rax_4)
            return rax_4;
    }
    else
    {
        label_5f698e:
        
        if (!(0 + -(*(arg3 + 0xc8))))
        {
            rax_4 = fd::output::print_entry_colorized::hba02dea0711b7802(arg1, arg2, arg3, 
                arg3 + 0xc8, r12);
            
            if (rax_4)
                return rax_4;
        }
        else
        {
            rax_4 = fd::output::print_entry_uncolorized::hcde30b4f1cf3740a(arg1, arg2, arg3);
            
            if (rax_4)
                return rax_4;
        }
    }
    
    if (rbp)
    {
        var_98 = &data_802510;
        int64_t var_90_2 = 1;
        int64_t var_88_2 = 8;
        var_80 = {0};
        rax_4 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_98);
        
        if (rax_4)
            return rax_4;
    }
    
    void** rax_5;
    
    if (!*(arg3 + 0x1e2))
        rax_5 = &data_802530;
    else
        rax_5 = &data_802520;
    
    var_98 = rax_5;
    int64_t var_90_3 = 1;
    int64_t var_88_3 = 8;
    var_80 = {0};
    return std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_98);
}
