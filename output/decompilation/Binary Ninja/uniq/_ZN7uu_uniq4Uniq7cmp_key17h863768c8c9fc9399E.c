
  uint64_t uu_uniq::Uniq::cmp_key::h863768c8c9fc9399(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4)

{
    int64_t var_48;
    uu_uniq::Uniq::skip_fields::habc1c899824c43e1(&var_48, *arg1, arg1[1], arg2, arg3, arg1);
    int64_t rcx_1 = 0;
    
    if (arg1[2])
        rcx_1 = arg1[3];
    
    int64_t var_38;
    void* const r12_1 = var_38 - rcx_1;
    
    if (var_38 < rcx_1)
        r12_1 = nullptr;
    
    char* r13 = 1;
    void* var_40;
    
    if (var_38 > rcx_1)
        r13 = var_40 + rcx_1;
    
    int32_t var_78;
    int32_t zmm0[0x4] = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, r13, r12_1);
    int32_t rax;
    
    if (var_78 != 1)
    {
        char* var_70;
        void* var_68;
        void* r13_2 = var_68 + var_70;
        int64_t rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_70, r13_2, zmm0);
        int64_t rdi_4 = rax_1;
        
        if (arg1[4])
            rdi_4 = arg1[5];
        
        int64_t rax_2 = core::cmp::Ord::min::h32762a5a9ea48191(rdi_4, rax_1);
        char* var_60 = var_70;
        
        if (!*(arg1 + 0x34))
            rax = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::hb84b773afb965e5b(arg4, 
                &var_60, &data_4f5738);
        else
        {
            int64_t var_68_1 = rax_2;
            var_78 = var_60;
            void* var_70_2 = r13_2;
            rax = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::hb84b773afb965e5b(arg4, 
                &var_78, &data_4f5770);
        }
    }
    else
    {
        var_78 = r13;
        void* var_70_1 = r12_1 + r13;
        rax = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::hb84b773afb965e5b(arg4, 
            &var_78, &data_4f57a8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(var_48, var_40);
    return rax;
}
