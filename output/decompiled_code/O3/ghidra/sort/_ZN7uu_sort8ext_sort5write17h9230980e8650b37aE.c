void __rustcall
uu_sort::ext_sort::write
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _<uu_sort::merge::WriteablePlainTmpFile_as_uu_sort::merge::WriteableTmpFile>::create
            (&local_98,param_3,param_4,param_5);
  local_58 = CONCAT44(uStack_94,local_98);
  uStack_50 = CONCAT44(uStack_8c,uStack_90);
  local_48 = CONCAT44(uStack_84,local_88);
  if (local_58 == -0x8000000000000000) {
    param_1[1] = uStack_50;
    param_1[2] = local_48;
    *param_1 = 0x8000000000000000;
  }
  else {
    uStack_30 = local_70;
    uStack_2c = uStack_6c;
    uStack_28 = (undefined4)uStack_68;
    uStack_24 = uStack_68._4_4_;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    uStack_38 = uStack_78;
    uStack_34 = uStack_74;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = _<uu_sort::merge::WriteablePlainTmpFile_as_uu_sort::merge::WriteableTmpFile>::as_write
                      (&local_58);
                    /* try { // try from 0027a954 to 0027a965 has its CatchHandler @ 0027a9a4 */
    write_lines(uVar1,uVar2,uVar3,param_6);
    uStack_68 = CONCAT44(uStack_24,uStack_28);
    uStack_78 = uStack_38;
    uStack_74 = uStack_34;
    local_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    _<uu_sort::merge::WriteablePlainTmpFile_as_uu_sort::merge::WriteableTmpFile>::finished_writing
              (param_1,&local_98);
  }
  return;
}