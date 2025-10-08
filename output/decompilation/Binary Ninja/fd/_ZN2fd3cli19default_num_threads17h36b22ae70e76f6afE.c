
  int64_t fd::cli::default_num_threads::h36b22ae70e76f6af()

{
    int64_t rax;
    int64_t rdx;
    rax = std::thread::available_parallelism::h897bc36791d72018();
    int64_t rdi = rdx;
    int64_t var_10 = rax;
    int64_t var_8 = rdx;
    
    if (rax & 1)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::h2435fb8218d4e37d(&var_10);
        rdi = 1;
    }
    
    /* tailcall */
    return core::cmp::Ord::min::h37f98c03afb9f14c(rdi, 0x40);
}
