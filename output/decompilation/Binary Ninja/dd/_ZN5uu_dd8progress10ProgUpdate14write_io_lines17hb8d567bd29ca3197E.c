
  void* uu_dd::progress::ProgUpdate::write_io_lines::hb8d567bd29ca3197(void* arg1, int64_t arg2)

{
    void* result = uu_dd::progress::ReadStat::report::hbca14eda554cb06a(arg1 + 0x10, arg2);
    
    if (!result)
    {
        result = uu_dd::progress::WriteStat::report::hc78063a235cbbca9(arg1 + 0x30, arg2);
        
        if (!result)
        {
            int32_t rax = *(arg1 + 0x28);
            
            if (!rax)
                return 0;
            
            char const (** const var_50)[0xbe];
            
            if (rax != 1)
            {
                int32_t var_54 = rax;
                int32_t* var_20 = &var_54;
                uint64_t (* var_18_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_50 = &data_53d970;
                int64_t var_48_1 = 2;
                int64_t var_30_1 = 0;
                int32_t** var_40_1 = &var_20;
                int64_t var_38_1 = 1;
            }
            else
            {
                var_50 = &data_53d960;
                int64_t var_48 = 1;
                int64_t var_40 = 8;
                int64_t var_38;
                var_38 = {0};
            }
            
            return _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_50);
        }
    }
    
    return result;
}
