
  int64_t just::line::Line::is_comment::h9a81c927aacfe8c9(int32_t* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    void* rax_1;
    int64_t rdx;
    rax_1 = just::line::Line::first::h712dd6f4cff55297(arg1, arg2);
    
    if (!rax_1)
        return 0;
    
    *var_18[4] = 0;
    char* rax_2;
    uint64_t rdx_1;
    rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x23, &*var_18[4]);
    return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_1, rdx, 
        rax_2, rdx_1);
}
