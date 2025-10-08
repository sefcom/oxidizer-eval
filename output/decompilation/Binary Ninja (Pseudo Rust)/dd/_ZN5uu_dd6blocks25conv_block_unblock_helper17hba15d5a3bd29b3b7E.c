
  fn uu_dd::blocks::conv_block_unblock_helper::hba15d5a3bd29b3b7(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: *mut c_void) -> i64

{
    let mut var_100: i64;
    let mut var_d0: ();
    let mut r14_2: i64;
    
    match *arg3
    {
        0 =>
        {
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                arg2, *arg3.byte_offset(8));
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(arg1, &var_d0)
        }
        1 =>
        {
            r14_2 = arg2[1];
            uu_dd::blocks::block::h2c05bb6e2c97f889(&var_100, r14_2, arg2[2], *arg3.byte_offset(8), 
                arg3[1], arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he81304021c716c84(&var_d0, &var_100);
            let var_b0_3: i64 = 0;
            let var_90_2: i64 = 0;
            core::iter::traits::iterator::Iterator::collect::h7019e372b1b15c9d(arg1, &var_d0);
            /* tailcall */
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(*arg2, 
                r14_2)
        }
        2 =>
        {
            r14_2 = arg2[1];
            uu_dd::blocks::unblock::h97938cdacee81528(arg1, r14_2, arg2[2], *arg3.byte_offset(8));
            /* tailcall */
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(*arg2, 
                r14_2)
        }
        3 =>
        {
            r14_2 = arg2[1];
            let mut var_58: ();
            uu_dd::blocks::block::h2c05bb6e2c97f889(&var_58, r14_2, arg2[2], *arg3.byte_offset(8), 
                arg3[1], arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he81304021c716c84(&var_d0, &var_58);
            let var_b0_2: i64 = *arg3.byte_offset(0x10);
            let var_a8_1: i64 = 0;
            let var_80_1: i64 = 0;
            core::iter::traits::iterator::Iterator::collect::h59e13cd0bf71a218(arg1, &var_d0);
            /* tailcall */
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(*arg2, 
                r14_2)
        }
        4 =>
        {
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                arg2, *arg3.byte_offset(0x10));
            let mut var_e8: i64;
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(&var_e8, &var_d0);
            let var_e0: i64;
            let var_d8: i64;
            uu_dd::blocks::block::h2c05bb6e2c97f889(&var_100, var_e0, var_d8, *arg3.byte_offset(8), 
                arg3[1], arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he81304021c716c84(&var_d0, &var_100);
            let var_b0_1: i64 = 0;
            let var_90_1: i64 = 0;
            core::iter::traits::iterator::Iterator::collect::h7019e372b1b15c9d(arg1, &var_d0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(var_e8, 
                var_e0)
        }
        5 =>
        {
            r14_2 = arg2[1];
            let mut var_40: ();
            uu_dd::blocks::unblock::h97938cdacee81528(&var_40, r14_2, arg2[2], 
                *arg3.byte_offset(8));
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                &var_40, *arg3.byte_offset(0x10));
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(arg1, &var_d0);
            /* tailcall */
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(*arg2, 
                r14_2)
        }
        6 =>
        {
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                arg2, *arg3.byte_offset(0x10));
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(&var_100, &var_d0);
            let var_f8: i64;
            let var_f0: i64;
            uu_dd::blocks::unblock::h97938cdacee81528(arg1, var_f8, var_f0, *arg3.byte_offset(8));
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(var_100, 
                var_f8)
        }
    }
}
