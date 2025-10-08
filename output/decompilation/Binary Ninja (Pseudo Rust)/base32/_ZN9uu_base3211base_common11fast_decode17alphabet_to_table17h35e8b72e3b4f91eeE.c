
  fn uu_base32::base_common::fast_decode::alphabet_to_table::h35e8b72e3b4f91ee(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: i32) -> i64

{
    let mut rsi: *mut i128;
    let mut s: i128;
    
    if arg4 == 0
    {
        __builtin_memset(&s, 1, 0x100);
        let mut var_130: i64 = 0;
        let var_128_1: i64 = 2;
        let var_120_1: i16 = 0xd0a;
        let mut rax_2: i8;
        let mut rdx: i8;
        rax_2 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h722d476f1ff7331c(&var_130);
        
        if (rax_2 & 1) != 0
        {
            let mut rax_4: i8;
            
            do
            {
                let rax_3: u64 = rdx;
                
                if *(&s).byte_offset(rax_3) == 0
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: table[us]asser…");
                    /* no return */
                }
                
                *(&s).byte_offset(rax_3) = 0;
                rax_4 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h722d476f1ff7331c(&var_130);
            } while (rax_4 & 1) != 0;
        }
        
        rsi = &s;
    }
    else
    {
        __builtin_memset(&s, 0, 0x100);
        
        if arg3 != 0
        {
            let mut rax_1: i64 = 0;
            
            do
            {
                let rcx: u64 = *arg2.byte_offset(rax_1);
                
                if *(&s).byte_offset(rcx) != 0
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: !table[us]asse…");
                    /* no return */
                }
                
                *(&s).byte_offset(rcx) = 1;
                rax_1 += 1;
            } while arg3 != rax_1;
        }
        
        rsi = &s;
    }
    memcpy(arg1, rsi, 0x100)
}
