
  int64_t uu_dd::Dest::truncate::h9dbaec5663a323cc(char* arg1)

{
    if (*arg1 != 1)
        return 0;
    
    char rax;
    int64_t result;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
        &arg1[4]);
    
    if (!(rax & 1))
        /* tailcall */
        return std::fs::File::set_len::h8625c3bc8a96431d(&arg1[4], result);
    
    return result;
}
