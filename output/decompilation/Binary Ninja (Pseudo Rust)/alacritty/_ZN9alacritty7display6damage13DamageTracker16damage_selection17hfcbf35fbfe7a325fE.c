
  fn alacritty::display::damage::DamageTracker::damage_selection::hfcbf35fbfe7a325f(arg1: *mut c_void, arg2: *mut i64, arg3: i64) -> bool

{
    let mut rbx: i64 = arg3;
    let r15: *mut i128 = arg2;
    let mut result: bool = core::intrinsics::typed_swap_nonoverlapping::h0cea686fd98d21ae(
        arg1.byte_offset(0x88), arg2);
    
    if *arg1.byte_offset(0x48) == 0
    {
        result = *arg1.byte_offset(0xa8);
        
        if r15[2] != 2
        {
            if result == 2
            {
                'label_84a166:
                let mut var_80: ();
                core::iter::traits::iterator::Iterator::chain::h7fba6d8b5aa03e8e(&var_80, 
                    arg1.byte_offset(0x88), r15);
                let mut var_a8: i64;
                core::iter::adapters::chain::and_then_or_clear::h546794d3a53d3d0d(&var_a8, &var_80);
                let mut var_d0: ();
                let mut var_58: ();
                result = core::option::Option$LT$T$GT$::or_else::h367e921eb806fc58(&var_d0, 
                    &var_a8, &var_58);
                let i: i8;
                
                if i != 2
                {
                    let rax_1: i32 = *arg1.byte_offset(0xb0) - 1;
                    let rcx_2: i32 = rbx - rax_1;
                    let rbp_1: i64 = *arg1.byte_offset(0x20);
                    let r15_1: i64 = *arg1.byte_offset(0x28);
                    let r12_2: i64 = *arg1.byte_offset(0xb8) - 1;
                    let var_d8_1: i64 = rbx;
                    
                    do
                    {
                        let var_c8: i32;
                        let mut rax_3: i32 = -(var_c8);
                        
                        if rax_3 < 0
                        {
                            rax_3 = var_c8;
                        }
                        
                        let var_b8: i32;
                        
                        if var_b8 + rbx >= 0 && rax_3 >= rcx_2
                        {
                            let rbx_1: i64 =
                                core::cmp::Ord::max::h485505c56320f468(var_c8 + rbx, 0);
                            let rax_6: i64 =
                                core::cmp::Ord::clamp::heae1d66c53e20e24(var_b8 + rbx, rax_1);
                            var_a8 = rbx_1;
                            let var_a0_1: i64 = rax_6;
                            let var_98_1: i8 = 0;
                            let mut rax_7: i8;
                            let mut rdx_3: i64;
                            rax_7 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_a8);
                            
                            if (rax_7 & 1) != 0
                            {
                                let mut rax_10: i8;
                                
                                do
                                {
                                    if rdx_3 >= r15_1
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(
                                            rdx_3, r15_1);
                                        /* no return */
                                    }
                                    
                                    let rbx_2: i64 = rdx_3 * 3;
                                    *(rbp_1 + (rbx_2 << 3) + 8) =
                                        core::cmp::Ord::min::h7c13e9bfb8ea3862(
                                        *(rbp_1 + (rbx_2 << 3) + 8), 0);
                                    *(rbp_1 + (rbx_2 << 3) + 0x10) =
                                        core::cmp::Ord::max::h20b6d33cbe488162(
                                        *(rbp_1 + (rbx_2 << 3) + 0x10), r12_2);
                                    rax_10 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_a8);
                                } while (rax_10 & 1) != 0;
                            }
                            
                            rbx = var_d8_1;
                        }
                        
                        core::iter::adapters::chain::and_then_or_clear::h546794d3a53d3d0d(&var_a8, 
                            &var_80);
                        result = core::option::Option$LT$T$GT$::or_else::h367e921eb806fc58(&var_d0, 
                            &var_a8, &var_58);
                    } while i != 2;
                }
            }
            else
            {
                result = _$LT$alacritty_terminal..selection..SelectionRange$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd74a6e47199b0cab(r15, arg1.byte_offset(0x88));
                
                if result == 0
                {
                    goto 'label_84a166;
                }
            }
        }
        else if result != 2
        {
            goto 'label_84a166;
        }
    }
    
    result
}
