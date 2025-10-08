
  fn tabby_index_cli::timer::TimerTree::open::h6d5d49cd0241cd55(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: i64;
    let mut rdx: i32;
    result = time::instant::Instant::now::h1af9d55c4dec67ac();
    arg1[2] = arg3;
    arg1[3] = arg4;
    arg1[4] = arg2;
    *arg1 = result;
    arg1[1] = rdx;
    arg1[5] = 0;
    result
}
