
  uint64_t alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(int64_t* arg1, void* arg2, void* arg3)

{
    if (!*(arg2 + 0x48))
    {
        void var_88;
        alacritty_terminal::term::TermDamageIterator::new::h9c507061ce1d7d92(&var_88, 
            *(arg2 + 0x20), *(arg2 + 0x28), 0);
        int64_t var_a8 = 2;
        void* var_70_1 = arg3;
        *(arg2 + 0x40);
        void var_68;
        core::iter::traits::iterator::Iterator::chain::hff1f0321ff3c8de1(&var_68, &var_a8, 
            *(arg2 + 0x38));
        return core::iter::traits::iterator::Iterator::collect::h56adc802e5caf7e3(arg1, &var_68);
    }
    
    uint64_t result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 0x10, 0);
    
    if (!result)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *result = 0;
    *(result + 8) = *(arg3 + 0x10);
    *arg1 = 1;
    arg1[1] = result;
    arg1[2] = 1;
    return result;
}
