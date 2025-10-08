
  fn ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range::h83d85426b5e834db(arg1: *mut c_void) -> i64

{
    let rax: i32 = *arg1.byte_offset(8);
    let rcx: i32 = *arg1.byte_offset(0xc);
    
    if rax != 0
    {
        if rcx == 0
        {
            let rax_4: i32 =
                ruff_python_formatter::comments::map::PartIndex::incremented::h562ab003bd12ba22(
                rax);
            *arg1.byte_offset(0xc) = rax_4;
            return rax_4;
        }
        
        /* tailcall */
        return ruff_python_formatter::comments::map::PartIndex::increment::h40e90174e8270a0a(arg1.
            byte_offset(0xc));
    }
    
    if rcx != 0
    {
        core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
        /* no return */
    }
    
    let rax_2: i32 = *arg1.byte_offset(4);
    *arg1.byte_offset(8) = rax_2;
    let rax_3: i32 =
        ruff_python_formatter::comments::map::PartIndex::incremented::h562ab003bd12ba22(rax_2);
    *arg1.byte_offset(0xc) = rax_3;
    rax_3
}
