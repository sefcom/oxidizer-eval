void __rustcall
uu_tr::operation::Sequence::parse_char_range
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  byte bStack_20;
  byte bStack_1f;
  undefined6 uStack_1e;
  char *local_18;
  undefined8 local_10;
  
  local_18 = "-\' are in reverse collating sequence order";
  local_10 = 1;
  nom::sequence::separated_pair::___closure__(&local_38,&local_18,param_2,param_3);
  if (local_38 == 3) {
    uVar2 = 0x800000000000000b;
    uVar1 = (uint)bStack_20 * 0x100 + 1 + (uint)bStack_1f * 0x10000;
    if (bStack_1f < bStack_20) {
      uVar2 = 0x800000000000000a;
      uVar1 = (uint)bStack_1f;
    }
    param_1[1] = uStack_30;
    param_1[2] = uStack_28;
    param_1[3] = uVar2;
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)((long)param_1 + 0x24) = (uint)bStack_20;
    uVar2 = 0;
  }
  else {
    param_1[3] = uStack_28;
    param_1[4] = CONCAT62(uStack_1e,CONCAT11(bStack_1f,bStack_20));
    param_1[1] = CONCAT44(uStack_34,local_38);
    param_1[2] = uStack_30;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}