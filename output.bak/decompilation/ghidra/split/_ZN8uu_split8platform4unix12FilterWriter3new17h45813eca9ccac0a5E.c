void __rustcall
uu_split::platform::unix::FilterWriter::new
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  long local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined local_130 [56];
  undefined local_f8 [224];
  
  WithEnvVarSet::new(local_130,param_4,param_5);
                    /* try { // try from 001d5b28 to 001d5b92 has its CatchHandler @ 001d5c64 */
  std::env::var(&local_150,&DAT_00121f80,5);
  if (local_150 == 0) {
    local_178 = local_138;
    local_188 = local_148;
    uStack_184 = uStack_144;
    uStack_180 = uStack_140;
    uStack_17c = uStack_13c;
  }
  else {
    local_158 = local_138;
    local_168 = local_148;
    uStack_164 = uStack_144;
    uStack_160 = uStack_140;
    uStack_15c = uStack_13c;
    new::___closure__(&local_188,&local_168);
  }
  std::process::Command::new(local_f8,&local_188);
                    /* try { // try from 001d5b93 to 001d5bd4 has its CatchHandler @ 001d5c69 */
  uVar1 = std::process::Command::arg(local_f8,&DAT_00121f85,2);
  uVar1 = std::process::Command::arg(uVar1,param_2,param_3);
  uVar1 = std::process::Command::stdin(uVar1,2);
  std::process::Command::spawn(&local_1a8,uVar1);
  if (local_1a8 == 0) {
                    /* try { // try from 001d5c16 to 001d5c22 has its CatchHandler @ 001d5c55 */
    core::ptr::drop_in_place<std::process::Command>(local_f8);
    uStack_1c0 = (undefined4)local_1a0;
    uStack_1bc = (undefined4)((ulong)local_1a0 >> 0x20);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_194,local_198);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_18c,uStack_190);
    param_1[1] = local_1a4;
    param_1[2] = uStack_1c0;
    param_1[3] = uStack_1bc;
    param_1[4] = local_198;
    *param_1 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 2) = local_1a0;
    *param_1 = 1;
                    /* try { // try from 001d5beb to 001d5bf7 has its CatchHandler @ 001d5c64 */
    core::ptr::drop_in_place<std::process::Command>(local_f8);
  }
  core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(local_130);
  return;
}