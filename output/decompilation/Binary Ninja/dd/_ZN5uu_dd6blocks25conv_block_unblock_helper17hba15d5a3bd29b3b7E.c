
  int64_t uu_dd::blocks::conv_block_unblock_helper::hba15d5a3bd29b3b7(int64_t* arg1, int64_t* arg2, char* arg3, void* arg4)

{
    int64_t var_100;
    void var_d0;
    int64_t r14_2;
    
    switch (*arg3)
    {
        case 0:
        {
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                arg2, *(arg3 + 8));
            return core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(arg1, 
                &var_d0);
            break;
        }
        case 1:
        {
            r14_2 = arg2[1];
            uu_dd::blocks::block::h2c05bb6e2c97f889(&var_100, r14_2, arg2[2], *(arg3 + 8), arg3[1], 
                arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he81304021c716c84(&var_d0, &var_100);
            int64_t var_b0_3 = 0;
            int64_t var_90_2 = 0;
            core::iter::traits::iterator::Iterator::collect::h7019e372b1b15c9d(arg1, &var_d0);
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                *arg2, r14_2);
        }
        case 2:
        {
            r14_2 = arg2[1];
            uu_dd::blocks::unblock::h97938cdacee81528(arg1, r14_2, arg2[2], *(arg3 + 8));
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                *arg2, r14_2);
        }
        case 3:
        {
            r14_2 = arg2[1];
            void var_58;
            uu_dd::blocks::block::h2c05bb6e2c97f889(&var_58, r14_2, arg2[2], *(arg3 + 8), arg3[1], 
                arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he81304021c716c84(&var_d0, &var_58);
            int64_t var_b0_2 = *(arg3 + 0x10);
            int64_t var_a8_1 = 0;
            int64_t var_80_1 = 0;
            core::iter::traits::iterator::Iterator::collect::h59e13cd0bf71a218(arg1, &var_d0);
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                *arg2, r14_2);
        }
        case 4:
        {
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                arg2, *(arg3 + 0x10));
            int64_t var_e8;
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(&var_e8, &var_d0);
            int64_t var_e0;
            int64_t var_d8;
            uu_dd::blocks::block::h2c05bb6e2c97f889(&var_100, var_e0, var_d8, *(arg3 + 8), arg3[1], 
                arg4);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he81304021c716c84(&var_d0, &var_100);
            int64_t var_b0_1 = 0;
            int64_t var_90_1 = 0;
            core::iter::traits::iterator::Iterator::collect::h7019e372b1b15c9d(arg1, &var_d0);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                var_e8, var_e0);
            break;
        }
        case 5:
        {
            r14_2 = arg2[1];
            void var_40;
            uu_dd::blocks::unblock::h97938cdacee81528(&var_40, r14_2, arg2[2], *(arg3 + 8));
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                &var_40, *(arg3 + 0x10));
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(arg1, &var_d0);
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                *arg2, r14_2);
        }
        case 6:
        {
            uu_dd::blocks::conv_block_unblock_helper::apply_conversion::h823ff6ddf1248870(&var_d0, 
                arg2, *(arg3 + 0x10));
            core::iter::traits::iterator::Iterator::collect::h0fd540a0beae9b68(&var_100, &var_d0);
            int64_t var_f8;
            int64_t var_f0;
            uu_dd::blocks::unblock::h97938cdacee81528(arg1, var_f8, var_f0, *(arg3 + 8));
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                var_100, var_f8);
            break;
        }
    }
}
