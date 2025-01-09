void __rustcall
uu_pr::read_stream_and_create_pages(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_80;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x4c);
  uVar2 = 1;
  if (*(long *)(param_1 + 0x36) != -0x8000000000000000) {
    uVar2 = *(undefined8 *)(param_1 + 0x3e);
  }
  local_a8 = lines_to_read_for_page(param_1);
  local_c8 = param_2[6];
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_e8 = *(undefined4 *)(param_2 + 2);
  uStack_e4 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_e0 = *(undefined4 *)(param_2 + 3);
  uStack_dc = *(undefined4 *)((long)param_2 + 0x1c);
  local_d8 = *(undefined4 *)(param_2 + 4);
  uStack_d4 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_d0 = *(undefined4 *)(param_2 + 5);
  uStack_cc = *(undefined4 *)((long)param_2 + 0x2c);
  local_140 = 1;
  local_138 = 0;
  local_118 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  local_b8 = uVar2;
  local_b0 = param_3;
  local_58 = uVar1;
  local_38 = uVar1;
  ::alloc::boxed::Box<T>::new(&local_140);
  return;
}