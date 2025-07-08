
  fn uu_nproc::available_parallelism::h0a12aac02eb8d812() -> i64

{
    let mut rax: i64;
    let mut result_1: i64;
    rax = std::thread::available_parallelism::he1b307f401d49c64();
    let mut result: i64 = 1;
    
    if rax == 0
    {
        result = result_1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::h5f94e414ce99af65(rax, result_1);
    result
}
