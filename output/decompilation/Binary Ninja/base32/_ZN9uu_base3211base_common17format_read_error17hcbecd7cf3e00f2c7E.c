
  int128_t* uu_base32::base_common::format_read_error::hcbecd7cf3e00f2c7(int128_t* arg1, char arg2)

{
    char var_c1 = arg2;
    void var_88;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb7887b3b8ddd86ea(&var_88, 
        &var_c1);
    void* var_78;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h56ba07e370b94402(var_78, 1, 1);
    int64_t var_a8 = rax;
    int64_t var_a0 = rdx;
    int64_t var_98 = 0;
    int64_t* var_80;
    int64_t* var_c0 = var_80;
    void* var_b8 = var_78 + var_80;
    int64_t var_b0 = 0;
    int64_t rax_2;
    int32_t i;
    rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_c0);
    char const (** const var_70)[0xd];
    
    if (i != 0x110000)
    {
        do
        {
            if (rax_2)
                alloc::string::String::push::h0ede46164189e411(&var_a8, i);
            else
            {
                void var_3c;
                core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_3c, i);
                core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_70, &var_3c);
                
                while (true)
                {
                    int32_t rax_4 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h38e379bedf5f54dc(&var_70);
                    
                    if (rax_4 == 0x110000)
                        break;
                    
                    alloc::string::String::push::h0ede46164189e411(&var_a8, rax_4);
                }
            }
            
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_c0);
        } while (i != 0x110000);
    }
    
    var_c0 = &var_a8;
    int64_t (* var_b8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_70 = &data_50e428;
    int64_t var_68 = 1;
    int64_t var_50 = 0;
    int64_t** var_60 = &var_c0;
    int64_t var_58 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(arg1, &var_70);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h84a2aefedc93f8cf(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h84a2aefedc93f8cf(&var_88);
    return arg1;
}
