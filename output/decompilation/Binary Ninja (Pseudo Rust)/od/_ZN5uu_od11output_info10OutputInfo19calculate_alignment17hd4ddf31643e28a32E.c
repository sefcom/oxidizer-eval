
  fn uu_od::output_info::OutputInfo::calculate_alignment::hd4ddf31643e28a32(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64) -> u64

{
    let mut s: *mut c_void;
    
    if arg3 >= 9
    {
        let mut var_90: i64 = arg3 << 3;
        let mut var_48: *mut i64 = &var_90;
        let var_40: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_38: *const i8 = "@";
        let var_30: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        s = &data_502560;
        let var_80: i64 = 3;
        let var_68: i64 = 0;
        let var_78: *mut *mut i64 = &var_48;
        let var_70: i64 = 2;
        core::panicking::panic_fmt::h96f341d36638c225(&s);
        /* no return */
    }
    
    __builtin_memset(&s, 0, 0x40);
    let mut result: u64 = _$LT$uu_od..parse_formats..ParsedFormatterItemInfo$u20$as$u20$uu_od..output_info..TypeSizeInfo$GT$::byte_size::hae6e2cf52c2547bf(arg2);
    
    if result == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    let mut result_2: u64 = result;
    
    if result <= arg3
    {
        let mut rax_1: u16 = arg3;
        let temp2_1: i8 = result_2;
        let temp1_1: u8 = rax_1 % temp2_1;
        rax_1 = rax_1 / temp2_1;
        *rax_1[1] = temp1_1;
        let mut result_1: u64 = rax_1;
        let mut r14_1: i64 = arg4 - _$LT$uu_od..parse_formats..ParsedFormatterItemInfo$u20$as$u20$uu_od..output_info..TypeSizeInfo$GT$::print_width::h4208d9448b3500d1(arg2) * result_1;
        let mut cond:0_1: bool;
        
        do
        {
            let mut rax_5: u64;
            
            if r14_1 >> 0x20 == 0
            {
                rax_5 = COMBINE(0, r14_1) / result_1;
            }
            else
            {
                rax_5 = COMBINE(0, r14_1) / result_1;
            }
            
            let mut i_1: i64 = result_1 + 0;
            let mut rdi_2: i64 = 0;
            let mut i: i64;
            
            do
            {
                if rdi_2 > 7
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_2, 8);
                    /* no return */
                }
                
                (&s)[rdi_2] += rax_5;
                r14_1 -= rax_5;
                rdi_2 += result_2;
                i = i_1;
                i_1 -= 1;
            } while i != 1;
            result = result_1 >> 1;
            result_2 *= 2;
            cond:0_1 = result_1 >= 2;
            result_1 = result;
        } while cond:0_1;
    }
    
    let zmm0: i128 = s;
    __builtin_memset(&arg1[1], 0, 0x30);
    *arg1 = zmm0;
    result
}
