
  int64_t uu_sort::check::reader::h7e571c894e062be1(int64_t arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, void* arg5)

{
    int64_t var_e8 = arg1;
    int64_t var_d8 = 0;
    int64_t var_d0 = 1;
    int64_t var_c8 = 0;
    int64_t var_c0 = arg3;
    uint64_t r13 = *(arg5 + 0x99);
    int64_t result;
    
    while (true)
    {
        int64_t var_a8;
        int64_t r8 = _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75521e5ebc43ed35(&var_a8, &var_c0);
        
        if (var_a8 != -0x8000000000000000)
        {
            void* var_100_1 = arg5;
            uint64_t var_108_1 = r13;
            void var_e9;
            int64_t result_1;
            uu_sort::chunks::read::h4da7a75b34a6d647(&result_1, arg4, &var_a8, 0, r8, &var_d8, 
                &var_e8, &var_e9);
            result = result_1;
            
            if (result)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                    &var_d8);
                break;
            }
            
            void* var_b0;
            
            if (var_b0)
                continue;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&var_d8);
        result = 0;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(var_e8, arg2);
    return result;
}
