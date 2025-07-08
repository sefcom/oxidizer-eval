
  fn uu_pr::read_stream_and_create_pages::h80b16bcd0c28d18c(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let r12: i64 = arg1[0x13];
    let mut r13: i64 = 1;
    
    if *arg1.byte_offset(0xd8) != -0x8000000000000000
    {
        r13 = *arg1.byte_offset(0xf8);
    }
    
    let rax: i64 = uu_pr::lines_to_read_for_page::hb2ad53ca8343fd2c(arg1);
    let var_c8: i64 = arg2[3];
    let var_d8: i128 = arg2[2];
    let var_e8: i128 = arg2[1];
    let var_f8: i128 = *arg2;
    let mut var_140: i64 = 1;
    let var_138: i64 = 0;
    let var_118: i64 = 0;
    let var_c0: i64 = 0;
    let var_b8: i64 = r13;
    let rdx: i64;
    let var_b0: i64 = rdx;
    let var_a8: i64 = rax;
    let var_a0: i64 = 0;
    let var_80: i64 = 0;
    let var_60: i64 = 0;
    let var_58: i64 = r12;
    let var_50: i8 = 0;
    let var_30: i8 = 0;
    let var_48: i128 = *arg1;
    let var_38: i64 = r12;
    alloc::boxed::Box$LT$T$GT$::new::hf465b4a863622154(&var_140)
}
