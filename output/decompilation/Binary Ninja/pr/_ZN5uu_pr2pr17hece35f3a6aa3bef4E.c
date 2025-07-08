
  int128_t* uu_pr::pr::hece35f3a6aa3bef4(int128_t* arg1, int64_t arg2, uint64_t arg3, int128_t* arg4)

{
    int64_t var_a8;
    uu_pr::open::h24aeb0fb8cb9559f(&var_a8, arg2, arg3);
    int64_t rax = var_a8;
    int64_t var_a0;
    int64_t var_98;
    
    if (rax != -0x7ffffffffffffffb)
    {
        *arg1 = rax;
        *(arg1 + 8) = var_a0;
        arg1[1] = var_98;
        int64_t var_90;
        *(arg1 + 0x18) = var_90;
    }
    else
    {
        void var_68;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4057256a729ecd8e(&var_68, 
            0x10000, var_a0, var_98);
        int64_t* rax_1 = uu_pr::read_stream_and_create_pages::h80b16bcd0c28d18c(arg4, &var_68);
        
        while (true)
        {
            int64_t var_88;
            _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6d483c89323907f(&var_88, rax_1);
            int64_t var_80;
            
            if (var_80 == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h7107bd53cebb0db5(rax_1);
                *(arg1 + 8) = 0;
                *arg1 = -0x7ffffffffffffffb;
                break;
            }
            
            int64_t rcx_1 = var_88;
            int128_t var_c8 = var_80;
            int64_t var_70;
            int64_t var_b8_1 = var_70;
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = uu_pr::print_page::h6e73dbc2020375d5(*var_c8[8], var_70, arg4, rcx_1 + 1);
            
            if (rax_2)
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&var_a8, rdx_3, rdx_3);
                int128_t zmm0_2 = var_a8;
                arg1[1] = var_98;
                *arg1 = zmm0_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_c8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h7107bd53cebb0db5(rax_1);
                return arg1;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&var_c8);
        }
    }
    return arg1;
}
