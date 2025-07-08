
  int64_t uu_head::head_backwards_file::h247adaae7248d021(int32_t* arg1, int64_t* arg2)

{
    int32_t var_d0;
    std::fs::File::metadata::he899a18112e6f19e(&var_d0, arg1);
    
    if (var_d0 == 2)
    {
        int64_t result;
        return result;
    }
    
    char rax_1 = uu_head::is_seekable::h10276630579ab154(arg1);
    int64_t rcx = 0x200;
    int64_t var_78;
    
    if (var_78 < 0x20000001)
        rcx = var_78;
    
    if (!var_78)
        rcx = 0x200;
    
    int64_t var_80;
    
    if (rax_1 && var_80 > rcx)
        /* tailcall */
        return uu_head::head_backwards_on_seekable_file::h9ab8f833488ebf97(arg1, arg2);
    
    /* tailcall */
    return uu_head::head_backwards_without_seek_file::h3a18ae91fc5190c0(arg1, arg2);
}
