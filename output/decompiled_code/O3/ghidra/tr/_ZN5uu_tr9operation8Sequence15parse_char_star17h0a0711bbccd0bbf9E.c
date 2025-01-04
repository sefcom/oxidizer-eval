void __rustcall
uu_tr::operation::Sequence::parse_char_star(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_48;
  undefined4 uStack_44;
  ulong uStack_40;
  ulong uStack_38;
  undefined uStack_30;
  undefined7 uStack_2f;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  local_28 = "[";
  local_20 = 1;
  local_18 = "*]";
  local_10 = 2;
  nom::sequence::delimited::___closure__(&local_48,&local_28,param_2,param_3);
  if (local_48 != 3) {
    param_1[3] = uStack_38;
    param_1[4] = CONCAT71(uStack_2f,uStack_30);
    param_1[1] = CONCAT44(uStack_44,local_48);
    param_1[2] = uStack_40;
  }
  else {
    param_1[1] = uStack_40;
    param_1[2] = uStack_38;
    param_1[3] = 0x800000000000000b;
    *(undefined *)(param_1 + 4) = 2;
    *(undefined *)((long)param_1 + 0x21) = uStack_30;
  }
  *param_1 = (ulong)(local_48 != 3);
  return;
}