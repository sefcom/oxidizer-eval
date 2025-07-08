
  int64_t* uu_tail::chunks::BytesChunk::fill::h462ffdeafb1fcc09(int64_t* arg1, char* arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_2;
    int64_t rdx;
    rax_2 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h8b00b44a935690a1(arg3, arg2, 0x2000);
    
    if (!rax_2)
    {
        *(arg2 + 0x2000) = rdx;
        
        if (!rdx)
            *arg1 = {0};
        else
        {
            arg1[1] = 1;
            arg1[2] = rdx;
            *arg1 = 0;
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[2] = &data_5bec10;
        *arg1 = 1;
    }
    
    return arg1;
}
