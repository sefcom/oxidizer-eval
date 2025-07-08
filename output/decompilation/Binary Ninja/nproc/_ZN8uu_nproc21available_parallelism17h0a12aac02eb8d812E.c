
  int64_t uu_nproc::available_parallelism::h0a12aac02eb8d812()

{
    int64_t rax;
    int64_t result_1;
    rax = std::thread::available_parallelism::he1b307f401d49c64();
    int64_t result = 1;
    
    if (!rax)
        result = result_1;
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::h5f94e414ce99af65(rax, result_1);
    return result;
}
