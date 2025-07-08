
  int64_t uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(void* arg1, int64_t arg2)

{
    int64_t result = uu_dd::progress::ReadStat::report::hd53d51fed1f91d80(arg1 + 0x10, arg2);
    
    if (!result)
    {
        result = uu_dd::progress::WriteStat::report::h421ce38315c3961a(arg1 + 0x30, arg2);
        
        if (!result)
        {
            int32_t rax = *(arg1 + 0x28);
            
            if (!rax)
                return 0;
            
            void** const var_50;
            
            if (rax != 1)
            {
                int32_t var_54 = rax;
                int32_t* var_20 = &var_54;
                uint64_t (* var_18_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09;
                var_50 = &data_5622e8;
                int64_t var_48_2 = 2;
                int64_t var_30_1 = 0;
                int32_t** var_40_2 = &var_20;
                int64_t var_38_1 = 1;
            }
            else
            {
                var_50 = &data_5622d8;
                int64_t var_48_1 = 1;
                int64_t var_40_1 = 8;
                int64_t var_38;
                var_38 = {0};
            }
            
            return _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_50);
        }
    }
    
    return result;
}
