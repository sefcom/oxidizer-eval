
  fn uu_cut::cut_fields_newline_char_delim::h70d6109e474d67d6(arg1: i64, arg2: *mut *mut c_void, arg3: *mut c_void, arg4: *mut i128, arg5: i64, arg6: i8, arg7: i64, arg8: i64) -> u64

{
    let mut r12: *mut i128 = arg4;
    let mut var_68: i8;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h435dadcf49ddd50a(&var_68, 
        arg1);
    let var_38: i8 = arg6;
    let mut var_80: ();
    core::iter::traits::iterator::Iterator::collect::h5e3bf8182d4c8696(&var_80, &var_68);
    let mut result: u64;
    
    if arg5 == 0
    {
        'label_469491:
        var_68 = arg6;
        
        if std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, &var_68, 1) == 0
        {
            result = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
    }
    else
    {
        let mut r13_1: i8 = 0;
        let mut result_1: u64;
        
        loop
        {
            var_68 = *r12;
            let var_58_1: i8 = 0;
            let mut rax_5: i8;
            let mut rdx: i64;
            rax_5 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h72e3f57276e63282(&var_68);
            let var_70: i64;
            
            if (rax_5 & 1) != 0 && rdx - 1 < var_70
            {
                let mut i: i64;
                
                if (r13_1 & 1) != 0
                {
                    i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, arg7, arg8);
                }
                
                if (r13_1 & 1) == 0 || i == 0
                {
                    let var_78: i64;
                    let rax_8: *mut c_void = var_78 + (rdx - 1) * 0x18;
                    let mut rax_12: *mut c_void;
                    
                    for i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, *rax_8.byte_offset(8), *rax_8.byte_offset(0x10)); i == 0; 
                        i = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, *rax_12.byte_offset(8), *rax_12.byte_offset(0x10))
                    {
                        let mut rax_9: i8;
                        let mut rdx_3: i64;
                        rax_9 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h72e3f57276e63282(&var_68);
                        r13_1 = 1;
                        
                        if (rax_9 & 1) == 0
                        {
                            goto 'label_469380;
                        }
                        
                        if rdx_3 - 1 >= var_70
                        {
                            goto 'label_469380;
                        }
                        
                        if std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$alloc..boxed..Box$LT$W$GT$$GT$::write_all::h6c830cee343393ea(arg2, arg3, arg7, arg8) != 0
                        {
                            break;
                        }
                        
                        rax_12 = var_78 + (rdx_3 - 1) * 0x18;
                    }
                }
                
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                break;
            }
            
            'label_469380:
            r12 = &r12[1];
            
            if r12 == &r12[arg5]
            {
                goto 'label_469491;
            }
        }
        
        result = result_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::h0974e020fc7d8766(&var_80);
    result
}
