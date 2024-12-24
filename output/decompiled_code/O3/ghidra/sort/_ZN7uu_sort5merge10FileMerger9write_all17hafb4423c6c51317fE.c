undefined  [16] __rustcall
uu_sort::merge::FileMerger::write_all(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined auStack_a8 [48];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
                    /* try { // try from 00231a70 to 00231a7a has its CatchHandler @ 00231af5 */
  Output::into_write(auStack_a8,param_3);
  local_28 = *(undefined8 *)(param_1 + 0x14);
  uStack_20 = *(undefined8 *)(param_1 + 0x16);
  local_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x12);
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = param_1[4];
  uStack_64 = param_1[5];
  uStack_60 = param_1[6];
  uStack_5c = param_1[7];
  local_58 = param_1[8];
  uStack_54 = param_1[9];
  uStack_50 = param_1[10];
  uStack_4c = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_44 = param_1[0xd];
  uStack_40 = param_1[0xe];
  uStack_3c = param_1[0xf];
                    /* try { // try from 00231ab9 to 00231ac8 has its CatchHandler @ 00231ae8 */
  auVar1 = write_all_to(&local_78,param_2,auStack_a8);
  core::ptr::
  drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn_std::io::Write>>>
            (auStack_a8);
  return auVar1;
}