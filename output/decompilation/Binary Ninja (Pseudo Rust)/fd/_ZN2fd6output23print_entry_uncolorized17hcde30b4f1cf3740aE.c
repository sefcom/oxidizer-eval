
  fn fd::output::print_entry_uncolorized::hcde30b4f1cf3740a(arg1: *mut i64, arg2: *mut i32, arg3: *mut c_void) -> i64

{
    if *arg3.byte_offset(0x1e5) != 0 || -(*arg3.byte_offset(0x168)) != -0x8000000000000000
    {
        /* tailcall */
        return fd::output::print_entry_uncolorized_base::h04738a32bb27dd9f(arg1, arg2, arg3);
    }
    
    let mut rax_4: i64;
    let mut rdx: u64;
    rax_4 =
        fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, *arg3.byte_offset(0x1e7));
    let result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::heb20d257c854b0bf(arg1, rax_4, rdx);
    
    if result == 0
    {
        /* tailcall */
        return fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1, arg2, 
            *arg3.byte_offset(0xb8), *arg3.byte_offset(0xc0), 0);
    }
    
    result
}
