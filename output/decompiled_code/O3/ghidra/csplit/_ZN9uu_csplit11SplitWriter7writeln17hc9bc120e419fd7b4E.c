long __rustcall uu_csplit::SplitWriter::writeln(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (*param_1 == -0x8000000000000000) {
      local_48 = &PTR_s_trying_to_write_to_a_split_that_w_003e2b90;
      local_40 = 1;
      local_38 = 8;
      local_30 = 0;
      uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_48,&PTR_s_src_uu_csplit_src_csplit_rs_003e2ba0);
    }
    lVar1 = param_1[2];
    if (param_3 < (ulong)(*param_1 - lVar1)) {
      (*(code *)PTR_memcpy_00420660)(param_1[1] + lVar1,param_2,param_3);
      lVar1 = lVar1 + param_3;
      param_1[2] = lVar1;
    }
    else {
      lVar1 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_1,param_2,param_3);
      if (lVar1 != 0) {
        return lVar1;
      }
      lVar1 = param_1[2];
    }
    if ((ulong)(*param_1 - lVar1) < 2) {
      lVar1 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_1,"\n",1);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
    else {
      *(undefined *)(param_1[1] + lVar1) = 10;
      param_1[2] = lVar1 + 1;
    }
    param_1[6] = param_1[6] + param_3 + 1;
  }
  return 0;
}