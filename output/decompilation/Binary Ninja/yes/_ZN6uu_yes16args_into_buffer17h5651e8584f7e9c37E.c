
  char* uu_yes::args_into_buffer::h5651e8584f7e9c37(int64_t* arg1, int64_t* arg2)

{
    if (!*arg2)
    {
        int64_t rax_2;
        uint64_t rdx_3;
        rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h7c7f2adc9ed8f72a("y\n", 
            &data_413386[0x9b]);
        /* tailcall */
        return alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2642fa33805b0088(arg1, rax_2, rdx_3);
    }
    
    void var_58;
    core::iter::traits::iterator::Iterator::map::hb91a5a802183f65d(&var_58, arg2);
    void var_c0;
    itertools::free::intersperse::h6dfe3766eed6430b(&var_c0, &var_58, " y\n", 1);
    int64_t i;
    int64_t rdx;
    i = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbbc9ff9732d61faf(&var_c0);
    
    while (i)
    {
        int64_t rax;
        uint64_t rdx_2;
        rax = core::slice::iter::Iter$LT$T$GT$::make_slice::h7c7f2adc9ed8f72a(i, rdx + i);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2642fa33805b0088(arg1, rax, rdx_2);
        i = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbbc9ff9732d61faf(&var_c0);
    }
    
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h15e2c35668a0a643(arg1);
}
