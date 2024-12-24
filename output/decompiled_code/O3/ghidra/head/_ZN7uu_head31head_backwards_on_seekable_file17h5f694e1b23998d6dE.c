undefined8 __rustcall uu_head::head_backwards_on_seekable_file(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulong local_78;
  
  if (*param_2 == 1) {
    auVar4 = find_nth_line_from_end(param_1,param_2[1],*(undefined *)((long)param_2 + 0x2b));
    if (auVar4._0_8_ != 0) {
      return auVar4._8_8_;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_c8,0x10000,param_1);
                    /* try { // try from 001ba26c to 001ba276 has its CatchHandler @ 001ba2e1 */
    uVar2 = read_n_bytes(&local_c8,auVar4._8_8_);
  }
  else {
    if ((int)*param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_head_src_head_rs_0022d718);
    }
    uVar1 = param_2[1];
    std::fs::File::metadata(&local_c8,param_1);
    if (local_c8 == 2) {
      return local_c0;
    }
    lVar3 = local_78 - uVar1;
    if (local_78 < uVar1 || lVar3 == 0) {
      return 0;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_c8,0x10000,param_1);
                    /* try { // try from 001ba296 to 001ba2a0 has its CatchHandler @ 001ba2df */
    uVar2 = read_n_bytes(&local_c8,lVar3);
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_std::fs::File>>
            (CONCAT44(uStack_c4,local_c8),local_c0);
  return uVar2;
}