
  int64_t uu_sort::check::reader::he5a33cd1f4d4c531(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, int64_t* arg5, void* arg6)

{
    int64_t var_108 = arg1;
    int64_t var_e8 = 0;
    int64_t var_e0 = 1;
    int64_t var_d8 = 0;
    int64_t result = 0;
    uint64_t r15 = *(arg6 + 0x99);
    int64_t var_c8;
    
    do
    {
        int64_t var_c0;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8677ff4d20c1e78d(&var_c0, arg3);
        
        if (0 + -(var_c0))
            break;
        
        void* var_110_1 = arg6;
        int64_t result_2;
        uu_sort::chunks::read::he8360ac327e09de7(&result_2, arg4, arg5, &var_c0, &var_e8, &var_108, 
            r15);
        int64_t result_1 = result_2;
        
        if (result_1)
        {
            int64_t var_f8 = var_c8;
            result = result_1;
            break;
        }
    } while (var_c8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(&var_e8);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcc69def0910ab351(var_108, arg2);
    return result;
}
