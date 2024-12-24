long __rustcall
uu_dd::finalize(undefined8 param_1,undefined4 *param_2,ulong *param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 *param_7,char param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulong local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_98 [12];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  undefined local_48;
  
                    /* try { // try from 001d8a8f to 001d8acf has its CatchHandler @ 001d8bde */
  local_128 = param_4;
  local_120 = param_5;
  BlockWriter::flush(&local_f8,param_1);
  if (CONCAT44(uStack_f4,local_f8) == 0) {
    local_108 = local_d8;
    uStack_104 = uStack_d4;
    uStack_100 = uStack_d0;
    uStack_fc = uStack_cc;
    lVar3 = BlockWriter::sync(param_1);
    if (lVar3 == 0) {
      if (param_8 != '\0') {
                    /* try { // try from 001d8b07 to 001d8ba0 has its CatchHandler @ 001d8bde */
        BlockWriter::truncate(param_1);
      }
      local_118 = *(undefined4 *)(param_3 + 2);
      uStack_114 = *(undefined4 *)((long)param_3 + 0x14);
      uStack_110 = *(undefined4 *)(param_3 + 3);
      uStack_10c = *(undefined4 *)((long)param_3 + 0x1c);
      uVar1 = *param_3;
      uVar2 = param_3[1];
      local_98 = std::time::Instant::elapsed(&local_128);
      local_68 = uVar1 + local_e8;
      local_60 = uVar2 + local_e0 + (ulong)CARRY8(uVar1,local_e8);
      local_58 = CONCAT44(uStack_114,local_118) + CONCAT44(uStack_104,local_108);
      lStack_50 = CONCAT44(uStack_10c,uStack_110) + CONCAT44(uStack_fc,uStack_100);
      local_88 = *param_2;
      uStack_84 = param_2[1];
      uStack_80 = param_2[2];
      uStack_7c = param_2[3];
      local_78 = param_2[4];
      uStack_74 = param_2[5];
      uStack_70 = param_2[6];
      uStack_6c = param_2[7];
      local_48 = 2;
      std::sync::mpmc::Sender<T>::send(&local_f8,param_6,local_98);
      local_e8 = *(ulong *)(param_7 + 4);
      local_f8 = *param_7;
      uStack_f4 = param_7[1];
      uStack_f0 = param_7[2];
      uStack_ec = param_7[3];
                    /* try { // try from 001d8bb3 to 001d8bc7 has its CatchHandler @ 001d8bd7 */
      auVar4 = std::thread::JoinInner<T>::join(&local_f8);
      core::result::Result<T,E>::expect(auVar4._0_8_,auVar4._8_8_);
      core::ptr::drop_in_place<uu_dd::BlockWriter>(param_1);
      return 0;
    }
  }
  else {
    lVar3 = CONCAT44(uStack_ec,uStack_f0);
  }
                    /* try { // try from 001d8ad8 to 001d8adf has its CatchHandler @ 001d8bd9 */
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(param_7);
  core::ptr::drop_in_place<uu_dd::BlockWriter>(param_1);
  return lVar3;
}