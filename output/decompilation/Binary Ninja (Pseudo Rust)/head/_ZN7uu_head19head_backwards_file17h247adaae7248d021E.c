
  fn uu_head::head_backwards_file::h247adaae7248d021(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut var_d0: i32;
    std::fs::File::metadata::he899a18112e6f19e(&var_d0, arg1);
    
    if var_d0 == 2
    {
        let result: i64;
        return result;
    }
    
    let rax_1: i8 = uu_head::is_seekable::h10276630579ab154(arg1);
    let mut rcx: i64 = 0x200;
    let var_78: i64;
    
    if var_78 < 0x20000001
    {
        rcx = var_78;
    }
    
    if var_78 == 0
    {
        rcx = 0x200;
    }
    
    let var_80: i64;
    
    if rax_1 != 0 && var_80 > rcx
    {
        /* tailcall */
        return uu_head::head_backwards_on_seekable_file::h9ab8f833488ebf97(arg1, arg2);
    }
    
    /* tailcall */
    uu_head::head_backwards_without_seek_file::h3a18ae91fc5190c0(arg1, arg2)
}
