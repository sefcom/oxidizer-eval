void _ZN4just17execution_context16ExecutionContext7tempdir17h39cbfc80d5808fcaE
               (undefined *param_1,long *param_2,undefined8 param_3)

{
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8;
  undefined7 uStack_f7;
  undefined4 local_c0 [2];
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined local_88 [112];
  
  local_98 = 6;
  local_a8 = 1;
  local_a0 = 0;
  local_90 = 0;
  local_c0[0] = 0;
  local_b8 = "just-";
  local_b0 = 5;
  _ZN3std4path4Path4join17h509d33a3bbf89c2cE
            (local_88,*(undefined8 *)(param_2[3] + 0x20),*(undefined8 *)(param_2[3] + 0x28),
             *param_2 + 0xf0);
  _ZN8tempfile7Builder10tempdir_in17h93ae886201734d83E(&local_108,local_c0,local_88);
  if (local_f8 == '\x02') {
    _ZN4just17execution_context16ExecutionContext7tempdir28__u7b__u7b_closure_u7d__u7d_17h73d903d964048742E
              (param_1,param_3,local_108);
  }
  else {
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_f7,local_f8);
    *(undefined8 *)(param_1 + 8) = local_108;
    *(undefined8 *)(param_1 + 0x10) = uStack_100;
    *param_1 = 0x38;
  }
  return;
}