
  int64_t uu_base32::base_common::has_padding::h3e2f3a909ac9db29(int64_t* arg1, int64_t* arg2)

{
    int64_t var_40 = 0;
    int64_t var_38 = 1;
    int64_t var_30 = 0;
    char rax;
    int64_t rdx;
    rax = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read_to_end::hd8f810175cb4bfc2(arg2, &var_40);
    
    if (!(rax & 1))
    {
        int64_t var_28 = var_38;
        int64_t var_20_1 = var_30 + var_38;
        char* rax_3 =
            core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::h2387cf2e21b80bfa(
            &var_28);
        int64_t rbp;
        
        if (!rax_3)
            rbp = 0;
        else
            rbp = *rax_3 == 0x3d;
        
        if (!(std::io::impls::_$LT$impl$u20$std..io..Seek$u20$for$u20$alloc..boxed..Box$LT$S$GT$$GT$::seek::h142f78e4c13e1959(*arg2, arg2[1]) & 1))
        {
            arg1[1] = rbp;
            *arg1 = 0;
        }
        else
        {
            uint64_t rax_1;
            void** const rdx_1;
            rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            *arg1 = rax_1;
            arg1[1] = rdx_1;
        }
    }
    else
    {
        *arg1 =
            uu_base32::base_common::has_padding::_$u7b$$u7b$closure$u7d$$u7d$::h20d01a94b6b724f4(
            rdx);
        arg1[1] = &data_50cea8;
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h03d8193b11b81dcc(var_40, 
        var_38);
}
