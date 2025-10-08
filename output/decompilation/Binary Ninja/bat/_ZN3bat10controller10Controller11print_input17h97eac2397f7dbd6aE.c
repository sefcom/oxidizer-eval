
  int64_t bat::controller::Controller::print_input::h97eac2397f7dbd6a(char* arg1, void** arg2, int128_t* arg3, int64_t arg4, int64_t* arg5, char arg6)

{
    int64_t result_2;
    bat::input::Input::open::h6e316d3a9e9c7871(&result_2, arg3, arg5);
    int64_t result = result_2;
    int128_t var_568;
    int128_t var_558;
    int128_t var_548;
    int128_t var_538;
    int128_t var_528;
    
    if (result == 2)
    {
        *(arg1 + 0x40) = var_528;
        *(arg1 + 0x30) = var_538;
        *(arg1 + 0x20) = var_548;
        *(arg1 + 0x10) = var_558;
        *arg1 = var_568;
        return result;
    }
    
    int64_t var_4a8;
    int64_t var_578_1 = var_4a8;
    int128_t var_4c8;
    int128_t var_598_1 = var_4c8;
    int128_t var_4d8;
    int128_t var_5a8_1 = var_4d8;
    int128_t var_4e8;
    int128_t var_5b8_1 = var_4e8;
    int128_t var_4f8;
    int128_t var_5c8_1 = var_4f8;
    int128_t var_508;
    int128_t var_5d8_1 = var_508;
    int128_t var_518;
    int128_t var_5e8_1 = var_518;
    int128_t var_638_1 = var_568;
    int128_t var_628_1 = var_558;
    int128_t var_618_1 = var_548;
    int128_t var_608_1 = var_538;
    int128_t var_5f8_1 = var_528;
    int64_t result_1 = result;
    void* r12_1 = *arg2;
    int64_t var_678;
    
    if (!(0 + -(*(r12_1 + 0x90))))
    {
        if (!*(r12_1 + 0x123))
        {
            if (bat::style::StyleComponents::changes::h3017c14c66493a5a(r12_1 + 0xc0))
                goto label_8378c3;
            
            goto label_837952;
        }
        
        label_837952:
        var_678 = 0;
        uint64_t r12_2;
        int64_t* r13_1;
        
        if (!*(r12_1 + 0x123))
        {
            label_8379cb:
            bat::printer::InteractivePrinter::new::h3075e4c9ed50f526(&result_2, r12_1, arg2[1], 
                &result_1, &var_678);
            int64_t result_4 = result_2;
            
            if (result_4 != -0x8000000000000000)
            {
                void var_278;
                memcpy(&var_278, &var_518, 0x248);
                int64_t result_5 = result_4;
                int128_t var_2c8_1 = var_568;
                int128_t var_2b8_1 = var_558;
                int128_t var_2a8_1 = var_548;
                int128_t var_298_1 = var_538;
                int128_t var_288_1 = var_528;
                r12_2 = alloc::boxed::Box$LT$T$GT$::new::h574a8dd6a77286bc(&result_5);
                r13_1 = &data_ace320;
                bat::controller::Controller::print_file::hf96ad44d7a2ebb76(arg1, arg2, r12_2, 
                    r13_1, arg4, &result_1, arg6 ^ 1, &var_678);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h82d9a51932ef5499(r12_2, r13_1);
            }
            else
            {
                *(arg1 + 0x40) = var_528;
                *(arg1 + 0x30) = var_538;
                *(arg1 + 0x20) = var_548;
                *(arg1 + 0x10) = var_558;
                *arg1 = var_568;
            }
        }
        else
        {
            label_83796e:
            r12_2 = alloc::boxed::Box$LT$T$GT$::new::hb162ef197d91647c(r12_1);
            r13_1 = &data_ace358;
            bat::controller::Controller::print_file::hf96ad44d7a2ebb76(arg1, arg2, r12_2, r13_1, 
                arg4, &result_1, arg6 ^ 1, &var_678);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h82d9a51932ef5499(r12_2, r13_1);
        }
        int64_t var_670;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..map..HashMap$LT$u32$C$bat..diff..LineChange$GT$$GT$$GT$::h59836b20c3c51515(var_678, var_670);
    }
    else
    {
        label_8378c3:
        int128_t var_4b8;
        
        if (var_4b8 <= -0x7fffffffffffffff)
        {
            if (*(r12_1 + 0x90) != -0x8000000000000000)
                goto label_837952;
            
            *arg1 = 0xd;
        }
        else
        {
            bat::diff::get_git_diff::h667532c9f3b17451(&result_2, *var_4b8[8]);
            int64_t result_3;
            
            if (*(r12_1 + 0x90) == -0x8000000000000000)
                result_3 = result_2;
            
            if (*(r12_1 + 0x90) != -0x8000000000000000 || !result_3 || var_558)
            {
                int128_t var_658_1 = var_558;
                int128_t var_668_1 = var_568;
                var_678 = result_2;
                
                if (*(r12_1 + 0x123))
                    goto label_83796e;
                
                goto label_8379cb;
            }
            
            *arg1 = 0xd;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..map..HashMap$LT$u32$C$bat..diff..LineChange$GT$$GT$$GT$::h59836b20c3c51515(result_3, var_568);
        }
    }
    return core::ptr::drop_in_place$LT$bat..input..OpenedInput$GT$::h606eb83b30f2e745(&result_1);
}
