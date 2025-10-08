
  fn uu_df::get_all_filesystems::ha7950162b929c2f8(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    if *arg2.byte_offset(0x52) != 0
    {
        sync();
    }
    
    let mut var_1b8: i64 = 0;
    let var_1b0: *mut c_void = 8;
    let var_1a8: i64 = 0;
    let mut var_160: i64;
    uucore::features::fsext::read_fs_list::h6f122f433e9b10c6(&var_160);
    let rdx: i64 = var_160;
    let var_158: i64;
    let var_150: i64;
    
    if -(rdx) != -0x8000000000000000
    {
        let mut var_178: i64 = rdx;
        let var_170_1: i64 = var_158;
        let var_168_1: i64 = var_150;
        let mut var_1a0: i128;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4e6a242ff752ace5(&var_1a0, &var_178);
        let mut i: i64;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h04f884ed303dea1c(&i, &var_1a0);
        
        if i != -0x8000000000000000
        {
            do
            {
                memcpy(&var_160, &i, 0x98);
                let rax_3: i8 = uu_df::is_included::h2cb576fb785b9846(&var_160, arg2);
                let mut rax_4: i8;
                
                if rax_3 != 0
                {
                    rax_4 = uu_df::is_best::h2e728b01e5cd47e3(var_1b0, var_1a8, &i);
                }
                
                if rax_3 == 0 || rax_4 == 0
                {
                    core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h0026f4350179d2b5(&i);
                }
                else
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h009a998fb78397fa(&var_1b8, &i);
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h04f884ed303dea1c(&i, &var_1a0);
            } while i != -0x8000000000000000;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uucore..features..fsext..MountInfo$GT$$GT$::h2cba2fcf95045450(&var_1a0);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h32af2e8d1bfd3746(&var_1a0, var_1b0, var_1a8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4e6a242ff752ace5(&var_160, &var_1a0);
        let var_140_1: *mut i64 = &var_1b8;
        let var_138_1: *mut c_void = arg2;
        core::iter::traits::iterator::Iterator::collect::h5024ba8280d3069a(&var_1a0, &var_160);
        let var_190: i64;
        arg1[2] = var_190;
        *arg1 = var_1a0;
    }
    else
    {
        arg1[1] = var_158;
        arg1[2] = var_150;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::h2845cb9837793921(&var_1b8);
    arg1
}
