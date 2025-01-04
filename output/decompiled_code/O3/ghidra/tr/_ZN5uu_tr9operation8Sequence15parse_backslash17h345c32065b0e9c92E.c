void __rustcall
uu_tr::operation::Sequence::parse_backslash
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined uStack_20;
  undefined7 uStack_1f;
  char *local_18;
  undefined8 local_10;
  
  local_18 = "\\";
  local_10 = 1;
  nom::sequence::preceded::___closure__(&local_38,&local_18,param_2,param_3);
  if (local_38 == 3) {
    switch(uStack_20) {
    case 0x61:
      uStack_20 = 7;
      break;
    case 0x62:
      uStack_20 = 8;
      break;
    case 0x66:
      uStack_20 = 0xc;
      break;
    case 0x6e:
      uStack_20 = 10;
      break;
    case 0x72:
      uStack_20 = 0xd;
      break;
    case 0x74:
      uStack_20 = 9;
      break;
    case 0x76:
      uStack_20 = 0xb;
    }
    param_1[1] = uStack_30;
    param_1[2] = local_28;
    *(undefined *)(param_1 + 3) = uStack_20;
    *param_1 = 3;
  }
  else {
    param_1[2] = local_28;
    param_1[3] = CONCAT71(uStack_1f,uStack_20);
    *param_1 = CONCAT44(uStack_34,local_38);
    param_1[1] = uStack_30;
  }
  return;
}