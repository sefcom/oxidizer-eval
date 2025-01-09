long __rustcall uu_head::head_backwards_without_seek_file(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_38,0x10000,param_1);
  if (*param_2 == 1) {
    lVar1 = read_but_last_n_lines(&local_38,param_2[1],*(undefined *)((long)param_2 + 0x2b));
  }
  else {
    if ((int)*param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_head_src_head_rs_0022cef0);
    }
                    /* try { // try from 001b9fea to 001ba04d has its CatchHandler @ 001ba04e */
    lVar1 = read_but_last_n_bytes(&local_38,param_2[1]);
  }
  if (lVar1 == 0) {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&std::fs::File>>
              (local_38,local_30);
    lVar1 = 0;
  }
  else {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&std::fs::File>>
              (local_38,local_30);
  }
  return lVar1;
}