
  void* alacritty::display::hint::HintState::keyboard_input::h750f6bfcd850de91(void** arg1, void* arg2, void* arg3, int32_t arg4)

{
    int32_t var_6c = arg4;
    uint64_t rax = arg4 - 3;
    
    if (rax <= 0x1c)
        switch (rax)
        {
            case 0:
            case 0x18:
            {
                alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(arg2);
                break;
            }
            case 5:
            case 0x1c:
            {
                int64_t rax_3 = *(arg2 + 0x58);
                
                if (rax_3)
                    *(arg2 + 0x58) = rax_3 - 1;
                break;
            }
        }
    
    void* result =
        alacritty::display::hint::HintState::update_matches::h4cd609f91e40cc38(arg2, arg3);
    
    if (!*(arg2 + 0x60))
        arg1[6] = 2;
    else
    {
        int64_t rax_5 = *(arg2 + 0x38);
        int64_t rcx = *(arg2 + 0x40);
        int64_t var_60 = rax_5;
        int64_t var_58_1 = rax_5 + rcx * 0x18;
        int64_t var_50_1 = 0;
        void* rdx;
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::try_rfold::h57c7db848373ad09(&var_60, &var_6c);
        
        if (!rdx)
            arg1[6] = 2;
        else if (*(rdx + 0x10) != 1)
        {
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h7f64891ed476e2fe(arg2 + 0x48, arg4);
            arg1[6] = 2;
        }
        else
        {
            int64_t rsi_2 = *(arg2 + 0x28);
            
            if (result >= rsi_2)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(result, rsi_2);
                /* no return */
            }
            
            int64_t var_48;
            _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e74ac01ef9f7a4d(&var_48, result * 0x28 + *(arg2 + 0x20));
            alloc::rc::RcInnerPtr::inc_strong::h04231d05a40329cb(*(arg2 + 0x60));
            void* r12_1 = *(arg2 + 0x60);
            void* var_68_1 = r12_1;
            
            if (!*(r12_1 + 0xe9))
                alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(arg2);
            else
                *(arg2 + 0x58) = 0;
            
            int64_t r15_2 = var_48;
            int32_t var_40;
            void* rax_6 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg3 + 0x28, var_40);
            int64_t rsi_8 = *(rax_6 + 0x10);
            
            if (r15_2 >= rsi_8)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_2, rsi_8);
                /* no return */
            }
            
            result = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(
                *(*(rax_6 + 8) + r15_2 * 0x18));
            *(arg1 + 0x10) = var_48;
            int128_t var_38;
            *(arg1 + 0x20) = var_38;
            int64_t var_28;
            arg1[6] = var_28;
            *arg1 = result;
            arg1[1] = r12_1;
        }
    }
    
    return result;
}
