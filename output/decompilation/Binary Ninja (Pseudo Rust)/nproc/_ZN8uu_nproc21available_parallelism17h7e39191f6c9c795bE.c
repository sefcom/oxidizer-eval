
  fn uu_nproc::available_parallelism::h7e39191f6c9c795b() -> i64

{
    let mut rax: i64;
    let mut result_1: i64;
    rax = std::thread::available_parallelism::h897bc36791d72018();
    let mut result: i64 = 1;
    
    if (rax & 1) == 0
    {
        result = result_1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..num..nonzero..NonZero$LT$usize$GT$$C$std..io..error..Error$GT$$GT$::h00169c12d9d675a9(rax, result_1);
    result
}
