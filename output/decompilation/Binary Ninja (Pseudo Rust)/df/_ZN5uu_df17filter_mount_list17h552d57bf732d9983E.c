
  fn uu_df::filter_mount_list::h552d57bf732d9983(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_238: i64 = 0;
    let var_230: i64 = 8;
    let var_228: i64 = 0;
    let mut var_218: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h16be972b538517f1(&var_218, arg2);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14b8b80e40a53bcb(&i, &var_218);
    
    if i != -0x8000000000000000
    {
        do
        {
            let mut var_160: ();
            memcpy(&var_160, &i, 0x98);
            let rax_2: i8 = uu_df::is_included::h21d348ae8506351c(&var_160, arg3);
            let mut rax_3: i8;
            
            if rax_2 != 0
            {
                rax_3 = uu_df::is_best::h69ca5df66aadf4f9(var_230, var_228, &var_160);
            }
            
            if rax_2 == 0 || rax_3 == 0
            {
                core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h9090e8568995f329(&var_160);
            }
            else
            {
                let mut var_c8: ();
                memcpy(&var_c8, &var_160, 0x98);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h46faf1ede3681934(&var_238, &var_c8);
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14b8b80e40a53bcb(&i, &var_218);
        } while i != -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uucore..features..fsext..MountInfo$GT$$GT$::he45d9cf3c868e21d(&var_218);
    arg1[1] = var_228;
    *arg1 = var_238;
    arg1
}
