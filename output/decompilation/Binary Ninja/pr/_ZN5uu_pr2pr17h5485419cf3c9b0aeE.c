
  int128_t* uu_pr::pr::h5485419cf3c9b0ae(int128_t* arg1, int64_t arg2, uint64_t arg3, int128_t* arg4)

{
    int64_t var_c8;
    uu_pr::open::hde771125822bcd7a(&var_c8, arg2, arg3);
    int64_t rax = var_c8;
    int64_t var_c0;
    int64_t var_b8;
    
    if (rax != -0x7ffffffffffffffb)
    {
        *arg1 = rax;
        *(arg1 + 8) = var_c0;
        arg1[1] = var_b8;
        int64_t var_b0;
        *(arg1 + 0x18) = var_b0;
    }
    else
    {
        void var_68;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hede0d348de07a176(&var_68, 
            var_c0, var_b8);
        int32_t* rax_1 = uu_pr::read_stream_and_create_pages::h546541715f29f024(arg4, &var_68);
        
        while (true)
        {
            int64_t var_88;
            _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h51eab1bbfc549aaf(&var_88, rax_1);
            int64_t var_80;
            
            if (var_80 == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hddd4d76a723283f5(rax_1, &data_6694e0);
                *(arg1 + 8) = 0;
                *arg1 = -0x7ffffffffffffffb;
                break;
            }
            
            int64_t rcx = var_88;
            int128_t var_a8 = var_80;
            int64_t var_70;
            int64_t var_98_1 = var_70;
            char rax_2;
            int64_t rdx_3;
            rax_2 = uu_pr::print_page::hc11615535955301d(*var_a8[8], var_70, arg4, rcx + 1);
            
            if (rax_2 & 1)
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_c8, rdx_3, rdx_3);
                int128_t zmm0_2 = var_c8;
                arg1[1] = var_b8;
                *arg1 = zmm0_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_a8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hddd4d76a723283f5(rax_1, &data_6694e0);
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_80);
        }
    }
    return arg1;
}
