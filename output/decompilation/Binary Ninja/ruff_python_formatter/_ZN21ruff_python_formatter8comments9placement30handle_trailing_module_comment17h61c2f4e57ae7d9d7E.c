
  void ruff_python_formatter::comments::placement::handle_trailing_module_comment::h61c2f4e57ae7d9d7(int64_t* arg1, void* arg2, int128_t* arg3)

{
    if (arg3[1] != 0x5e || arg3[2] != 0x5e)
    {
        *(arg1 + 0x40) = arg3[4];
        int128_t zmm0 = *arg3;
        int128_t zmm1 = arg3[1];
        int128_t zmm2 = arg3[2];
        *(arg1 + 0x30) = arg3[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = zmm0;
        return;
    }
    
    int64_t rax = *(arg2 + 0x10);
    
    if (!rax)
    {
        char rax_6 = *(arg3 + 0x48);
        *(arg1 + 8) = *arg3;
        arg1[3] = arg3[4];
        arg1[4] = 0;
        *(arg1 + 0x21) = rax_6;
        *arg1 = 0x5e;
        return;
    }
    
    char rbx = *(arg3 + 0x48);
    int64_t rax_4;
    int64_t rdx;
    rax_4 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d((rax << 7) + *(arg2 + 8) - 0x80);
    arg1[1] = rax_4;
    arg1[2] = rdx;
    arg1[3] = arg3[4];
    arg1[4] = 0;
    *(arg1 + 0x21) = rbx;
    *arg1 = 0x5f;
}
