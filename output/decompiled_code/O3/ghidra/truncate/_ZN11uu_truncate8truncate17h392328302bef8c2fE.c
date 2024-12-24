undefined  [16] __rustcall
uu_truncate::truncate
          (byte param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5,
          undefined8 param_6)

{
  long *plVar1;
  undefined auVar2 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  long local_28;
  long lStack_20;
  long local_18;
  
  if (*param_3 == -0x8000000000000000) {
    if (*param_4 == -0x8000000000000000) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_truncate_src_truncate_rs_00216d70);
    }
    local_48 = *(undefined4 *)param_4;
    uStack_44 = *(undefined4 *)((long)param_4 + 4);
    uStack_40 = *(undefined4 *)(param_4 + 1);
    uStack_3c = *(undefined4 *)((long)param_4 + 0xc);
    local_38 = param_4[2];
                    /* try { // try from 001ae2ac to 001ae2c0 has its CatchHandler @ 001ae3a9 */
    auVar2 = truncate_size_only(param_4[1],local_38,param_5,param_6,param_1 ^ 1);
  }
  else {
    if (*param_4 != -0x8000000000000000) {
      local_18 = param_3[2];
      local_28 = *param_3;
      lStack_20 = param_3[1];
      local_48 = *(undefined4 *)param_4;
      uStack_44 = *(undefined4 *)((long)param_4 + 4);
      uStack_40 = *(undefined4 *)(param_4 + 1);
      uStack_3c = *(undefined4 *)((long)param_4 + 0xc);
      local_38 = param_4[2];
                    /* try { // try from 001ae32c to 001ae33a has its CatchHandler @ 001ae381 */
      auVar2 = truncate_reference_and_size(lStack_20,local_18,param_4[1]);
                    /* try { // try from 001ae33b to 001ae34a has its CatchHandler @ 001ae37c */
      core::ptr::drop_in_place<alloc::string::String>(&local_48);
      plVar1 = &local_28;
      goto LAB_001ae350;
    }
    local_48 = *(undefined4 *)param_3;
    uStack_44 = *(undefined4 *)((long)param_3 + 4);
    uStack_40 = *(undefined4 *)(param_3 + 1);
    uStack_3c = *(undefined4 *)((long)param_3 + 0xc);
    local_38 = param_3[2];
                    /* try { // try from 001ae2de to 001ae2f2 has its CatchHandler @ 001ae39a */
    auVar2 = truncate_reference_file_only(param_3[1],local_38,param_5,param_6,param_1 ^ 1);
  }
  plVar1 = (long *)&local_48;
LAB_001ae350:
  core::ptr::drop_in_place<alloc::string::String>(plVar1);
  return auVar2;
}