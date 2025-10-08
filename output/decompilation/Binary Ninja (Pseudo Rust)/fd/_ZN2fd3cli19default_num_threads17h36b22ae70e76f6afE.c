
  fn fd::cli::default_num_threads::h36b22ae70e76f6af() -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::available_parallelism::h897bc36791d72018();
    let mut rdi: i64 = rdx;
    let mut var_10: i64 = rax;
    let var_8: i64 = rdx;
    
    if (rax & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::h2435fb8218d4e37d(&var_10);
        rdi = 1;
    }
    
    /* tailcall */
    core::cmp::Ord::min::h37f98c03afb9f14c(rdi, 0x40)
}
