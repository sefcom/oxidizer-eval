
  fn uu_head::parse::parse_obsolete::hee0b1fdae7af2962(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> *mut i64

{
    let var_38: i64 = 0;
    let mut var_48: *mut i8 = arg2;
    let var_40: *mut c_void = &arg2[arg3];
    let mut rax_1: i64;
    let mut rdx: i32;
    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
    let mut rdx_2: i32;
    
    if rdx == 0x2d
    {
        rdx_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48) - 0x30;
    }
    
    if rdx != 0x2d || rdx_2 > 9
    {
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        let mut rax_2: i64;
        let mut r13_1: i32;
        
        do
        {
            let mut rdx_3: i32;
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
            
            if rdx_3 == 0x110000
            {
                r13_1 = 0;
                rax_2 = arg3;
                break;
            }
            
            r13_1 = rdx_3;
        } while r13_1 - 0x30 < 0xa;
        
        let mut rax_3: *mut c_void;
        let mut rdx_5: i64;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1 + 1, rax_2, arg2, arg3);
        
        if rax_3 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_1 + 1, rax_2);
            /* no return */
        }
        
        uu_head::parse::process_num_block::hda0983907d92f9a0(arg1, rax_3, rdx_5, r13_1, &var_48);
    }
    
    arg1
}
