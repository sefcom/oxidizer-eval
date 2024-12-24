void __rustcall uu_ls::parse_width(char *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if (param_2 == 0) {
    std::env::var_os(&local_20,&DAT_00134f37,7);
    if (CONCAT44(uStack_1c,local_20) == -0x8000000000000000) {
      uVar1 = terminal_size::unix::terminal_size();
      local_58._2_2_ = 0x50;
      if ((short)uVar1 != 0) {
        local_58._2_2_ = (short)((uint)uVar1 >> 0x10);
      }
    }
    else {
      uStack_48 = (undefined4)local_10;
      uStack_44 = (undefined4)((ulong)local_10 >> 0x20);
      local_58 = local_20;
      uStack_54 = uStack_1c;
      uStack_50 = uStack_18;
      uStack_4c = uStack_14;
      local_58._2_2_ = parse_width::___closure__(&local_58);
    }
  }
  else {
    parse_width::___closure__
              (&local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    if ((char)local_58 != '\a') {
      *(undefined4 *)(param_1 + 0x34) = local_24;
      *(undefined8 *)(param_1 + 0x24) = local_34;
      *(undefined8 *)(param_1 + 0x2c) = uStack_2c;
      *(ulong *)(param_1 + 0x14) = CONCAT44(uStack_40,uStack_44);
      *(undefined8 *)(param_1 + 0x1c) = uStack_3c;
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_50,uStack_54);
      *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_48,uStack_4c);
      *param_1 = (char)local_58;
      param_1[1] = local_58._1_1_;
      *(undefined2 *)(param_1 + 2) = local_58._2_2_;
      return;
    }
  }
  *(undefined2 *)(param_1 + 2) = local_58._2_2_;
  *param_1 = '\a';
  return;
}