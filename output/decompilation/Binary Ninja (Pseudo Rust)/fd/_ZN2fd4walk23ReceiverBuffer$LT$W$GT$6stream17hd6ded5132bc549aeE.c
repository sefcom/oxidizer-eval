
  fn fd::walk::ReceiverBuffer$LT$W$GT$::stream::hd6ded5132bc549ae(arg1: *mut c_void) -> u64

{
    *arg1.byte_offset(0x80) = 1;
    let var_2a8: i64 = *arg1.byte_offset(0x48);
    let mut var_2b8: i128 = *arg1.byte_offset(0x38);
    *arg1.byte_offset(0x38) = 0;
    *arg1.byte_offset(0x40) = 8;
    *arg1.byte_offset(0x48) = 0;
    let mut var_2d8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h01c6c359f5e6c82c(&var_2d8, &var_2b8);
    let mut var_2a0: i32;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha36a627f26c73204(&var_2a0, &var_2d8);
    let mut rbp_1: i32;
    
    if var_2a0 == 4
    {
        'label_5f83cc:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$fd..dir_entry..DirEntry$GT$$GT$::h8ba810fce92f87c7(&var_2d8);
        rbp_1 = fd::walk::ReceiverBuffer$LT$W$GT$::flush::h793374cb5c5836e2(arg1);
    }
    else
    {
        loop
        {
            let mut var_168: ();
            memcpy(&var_168, &var_2a0, 0x138);
            let rax_1: i32 =
                fd::walk::ReceiverBuffer$LT$W$GT$::print::hd2dc40990132b5db(arg1, &var_168);
            rbp_1 = rax_1;
            
            if rax_1 != 6
            {
                core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                    &var_168);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$fd..dir_entry..DirEntry$GT$$GT$::h8ba810fce92f87c7(&var_2d8);
                break;
            }
            
            core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(&var_168);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha36a627f26c73204(&var_2a0, &var_2d8);
            
            if var_2a0 == 4
            {
                goto 'label_5f83cc;
            }
        }
    }
    
    rbp_1
}
