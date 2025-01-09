undefined8 * __rustcall
uu_split::platform::unix::instantiate_current_writer
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined local_58;
  undefined uStack_57;
  undefined uStack_56;
  undefined uStack_55;
  undefined uStack_54;
  undefined uStack_53;
  undefined2 uStack_52;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c [3];
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_40 = param_3;
  local_38 = param_4;
  if (*param_2 == -0x8000000000000000) {
    if (param_5 == '\0') {
      local_60 = 0x1b600000000;
      local_58 = 0;
      uStack_57 = 0;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      uStack_56 = 1;
      std::fs::OpenOptions::open(&local_78,&local_60,param_3,param_4);
      if (local_78 == 0) goto LAB_001d606c;
      uVar1 = instantiate_current_writer::___closure__(&local_40,CONCAT44(uStack_6c,uStack_70));
    }
    else {
      local_60 = 0x1b600000000;
      local_58 = 0;
      uStack_56 = 0;
      uStack_53 = 0;
      uStack_57 = 1;
      uStack_54 = 1;
      uStack_55 = 1;
      std::fs::OpenOptions::open(&local_78,&local_60,param_3,param_4);
      if (local_78 == 0) {
LAB_001d606c:
        uVar1 = ::alloc::boxed::Box<T>::new(uStack_74);
        ppuVar2 = &PTR_drop_in_place<std_fs_File>_00248d80;
        goto LAB_001d607c;
      }
      uVar1 = instantiate_current_writer::___closure__(&local_40,CONCAT44(uStack_6c,uStack_70));
    }
LAB_001d6030:
    param_1[1] = uVar1;
    *param_1 = 0x8000000000000000;
  }
  else {
    FilterWriter::new(&local_60,param_2[1],param_2[2],param_3,param_4);
    if ((int)local_60 != 0) {
      uVar1 = CONCAT26(uStack_52,
                       CONCAT15(uStack_53,
                                CONCAT14(uStack_54,
                                         CONCAT13(uStack_55,
                                                  CONCAT12(uStack_56,CONCAT11(uStack_57,local_58))))
                               ));
      goto LAB_001d6030;
    }
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_2c[0] = local_60._4_4_;
    local_20 = local_50;
    uStack_1c = uStack_4c;
    uStack_18 = uStack_48;
    uStack_14 = uStack_44;
    uVar1 = ::alloc::boxed::Box<T>::new(local_2c);
    ppuVar2 = &PTR_drop_in_place<uu_split_platform_unix_FilterWriter>_00248dd0;
LAB_001d607c:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(param_1,0x2000,uVar1,ppuVar2);
  }
  return param_1;
}