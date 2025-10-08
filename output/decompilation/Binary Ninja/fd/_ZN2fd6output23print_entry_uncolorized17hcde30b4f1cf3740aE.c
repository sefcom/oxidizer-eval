
  int64_t fd::output::print_entry_uncolorized::hcde30b4f1cf3740a(int64_t* arg1, int32_t* arg2, void* arg3)

{
    if (*(arg3 + 0x1e5) || -(*(arg3 + 0x168)) != -0x8000000000000000)
        /* tailcall */
        return fd::output::print_entry_uncolorized_base::h04738a32bb27dd9f(arg1, arg2, arg3);
    
    int64_t rax_4;
    uint64_t rdx;
    rax_4 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, *(arg3 + 0x1e7));
    int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::heb20d257c854b0bf(arg1, rax_4, rdx);
    
    if (!result)
        /* tailcall */
        return fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1, arg2, *(arg3 + 0xb8), 
            *(arg3 + 0xc0), 0);
    
    return result;
}
