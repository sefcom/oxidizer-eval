
  uint64_t uu_more::Pager::draw_lines::hf362fbee6ca4fba8(void* arg1, int64_t arg2)

{
    if (!crossterm::command::write_command_ansi::h092cdb5fcd9c0436(arg2) &&
        !_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2))
    {
        uint64_t result = uu_more::Pager::load_visible_lines::hab6b7f963f4c8df4(arg1);
        
        if (!result)
        {
            int64_t rax_1 = *(arg1 + 0x20);
            
            if (!rax_1)
                return 0;
            
            int64_t r12_1 = *(arg1 + 0x18);
            int64_t i_1 = rax_1 * 0x18;
            int64_t i;
            
            do
            {
                int64_t var_90 = r12_1;
                int64_t* var_70 = &var_90;
                int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb390d762ea379179;
                char const (** const var_60)[0x86] = &data_525308;
                int64_t var_58_1 = 1;
                int64_t var_40_1 = 0;
                int64_t** var_50_1 = &var_70;
                int64_t var_48_1 = 1;
                void var_88;
                core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_88, &var_60);
                int64_t var_80;
                uint64_t var_78;
                
                if (_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(arg2, var_80, var_78))
                {
                    uint64_t result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(
                        &var_88);
                    result = result_1;
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_88);
                r12_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
                result = 0;
            } while (i != 0x18);
        }
        
        return result;
    }
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
