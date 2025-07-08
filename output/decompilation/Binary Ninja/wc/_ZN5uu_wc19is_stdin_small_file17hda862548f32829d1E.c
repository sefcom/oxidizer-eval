
  uint64_t uu_wc::is_stdin_small_file::hda862548f32829d1()

{
    std::io::stdio::stdin::h7215cc131abb55d8();
    int32_t var_bc = 0;
    int64_t var_b8;
    std::fs::File::metadata::he899a18112e6f19e(&var_b8, &var_bc);
    int64_t rdi_1 = var_b8;
    int64_t rbx;
    
    if (rdi_1 != 2)
    {
        int32_t var_80;
        int32_t rax_1;
        rax_1 = (0xf000 & var_80) == 0x8000;
        int64_t var_68;
        rbx = var_68 < 0xa00001;
        rbx &= rax_1;
    }
    else
        rbx = 0;
    
    int64_t var_b0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(rdi_1, var_b0);
    return rbx;
}
