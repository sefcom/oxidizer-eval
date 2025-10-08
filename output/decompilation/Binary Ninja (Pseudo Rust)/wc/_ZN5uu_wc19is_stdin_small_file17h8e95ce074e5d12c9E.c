
  fn uu_wc::is_stdin_small_file::h8e95ce074e5d12c9() -> u64

{
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    let mut var_bc: i32 = 0;
    let mut var_b8: i64;
    std::fs::File::metadata::h5e84e533705f8c98(&var_b8, &var_bc);
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
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h92f497ce60e154e1(rdi_1, var_b0);
    rbx
}
