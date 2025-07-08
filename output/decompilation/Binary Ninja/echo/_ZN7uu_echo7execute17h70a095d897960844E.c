
  int128_t* uu_echo::execute::h70a095d897960844(int64_t* arg1, char arg2, char arg3, int128_t* arg4)

{
    int128_t var_48 = arg4[3];
    int128_t var_58 = arg4[2];
    int128_t var_68 = arg4[1];
    int128_t var_78 = *arg4;
    int64_t var_38 = 0;
    void** rax;
    void* i;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbcfbc49f81d31fad(&var_78);
    
    if (i)
    {
        if (!arg3)
        {
            do
            {
                int64_t r12_1 = *(i + 8);
                uint64_t r13_2 = *(i + 0x10);
                
                if (rax && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, " ", 1))
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, r12_1, r13_2))
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                
                rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbcfbc49f81d31fad(&var_78);
            } while (i);
        }
        else
        {
            do
            {
                int64_t r13_1 = *(i + 8);
                int64_t rbp_1 = *(i + 0x10);
                
                if (rax)
                {
                    rax = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, " ", 1);
                    
                    if (rax)
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                
                char var_88;
                uu_echo::print_escaped::hfb2c9877aef23019(&var_88, r13_1, rbp_1, arg1, rax);
                
                if (var_88)
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                
                char var_87;
                
                if (var_87)
                    return nullptr;
                
                rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbcfbc49f81d31fad(&var_78);
            } while (i);
        }
    }
    
    if (arg2 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, &data_41b420, 1))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    
    return nullptr;
}
