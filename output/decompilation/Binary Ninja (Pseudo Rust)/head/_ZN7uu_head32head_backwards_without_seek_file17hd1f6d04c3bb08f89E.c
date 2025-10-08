
  fn uu_head::head_backwards_without_seek_file::hd1f6d04c3bb08f89(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let rax_3: i64 = *arg2;
    
    if rax_3 == 1
    {
        /* tailcall */
        return uu_head::read_but_last_n_lines::hca44822cc706d375(arg1, arg2[1], 
            *arg2.byte_offset(0x2b));
    }
    
    if rax_3 == 3
    {
        /* tailcall */
        return uu_head::read_but_last_n_bytes::hc9aa98861e356a8a(arg1, arg2[1]);
    }
    
    let var_8: i64 = rax_3;
    core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
    /* no return */
}
