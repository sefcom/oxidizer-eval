
  fn uu_wc::is_stdin_small_file::hda862548f32829d1() -> u64

{
    std::io::stdio::stdin::h7215cc131abb55d8();
    let mut var_bc: i32 = 0;
    let mut var_b8: i64;
    std::fs::File::metadata::he899a18112e6f19e(&var_b8, &var_bc);
    let rdi_1: i64 = var_b8;
    let mut rbx: i64;
    
    if rdi_1 != 2
    {
        let var_80: i32;
        let mut rax_1: i32;
        rax_1 = (0xf000 & var_80) == 0x8000;
        let var_68: i64;
        rbx = var_68 < 0xa00001;
        rbx &= rax_1;
    }
    else
    {
        rbx = 0;
    }
    
    let var_b0: i64;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(rdi_1, var_b0);
    rbx
}
