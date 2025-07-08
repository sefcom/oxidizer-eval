
  fn uu_tail::backwards_thru_file::hcb0f9adbe7594d6a(arg1: *mut i32, arg2: i64, arg3: i8) -> *mut i128

{
    let mut var_58: ();
    uu_tail::chunks::ReverseChunks::new::hc0b2e059517a0fa7(&var_58, arg1);
    let var_38: i64 = 0;
    let mut var_98: *mut i128;
    let mut result: *mut i128 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc6ca612b237c00c8(&var_98, &var_58);
    let i: i64;
    
    if i != -0x8000000000000000
    {
        let mut r13_1: i64 = 0;
        
        do
        {
            let rdx: *mut i128 = var_98;
            let mut var_b8: i128 = i;
            let rcx_1: i64 = *var_b8[8];
            let var_80: i64;
            let var_a8_1: i64 = var_80;
            let mut var_d0: i64 = rcx_1;
            let var_c0_1: i64 = 0;
            
            if rdx == 0 && var_80 != 0 && *(var_80 + rcx_1 - 1) == arg3
            {
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h57eb2a97e4f62b20(&var_d0);
            }
            
            let var_68_1: i64 = var_c0_1;
            let mut var_78: i64 = var_d0;
            let var_70_1: i64 = rcx_1 + var_80;
            
            loop
            {
                let mut rax_4: i64;
                let mut rdx_1: *mut i8;
                rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h57eb2a97e4f62b20(&var_78);
                
                if rdx_1 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(
                        &var_b8);
                    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc6ca612b237c00c8(&var_98, &var_58);
                    break;
                }
                
                if *rdx_1 == arg3
                {
                    r13_1 += 1;
                    
                    if r13_1 >= arg2
                    {
                        let mut rax_6: i64;
                        let mut rdx_3: i64;
                        rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 2, rax_4 + 1);
                        core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_6, rdx_3);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&var_b8);
                    }
                }
            }
        } while i != -0x8000000000000000;
    }
    
    result
}
