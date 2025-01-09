void __rustcall
uu_sort::ext_sort::write
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
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
  
  _<uu_sort::merge::WriteableCompressedTmpFile_as_uu_sort::merge::WriteableTmpFile>::create
            (&local_108,param_3,param_4,param_5);
  local_90 = CONCAT44(uStack_104,local_108);
  uStack_88 = CONCAT44(uStack_fc,uStack_100);
  local_80 = CONCAT44(uStack_f4,local_f8);
  if (local_90 == -0x8000000000000000) {
    param_1[1] = uStack_88;
    param_1[2] = local_80;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_28 = local_a0;
    local_38 = local_b0;
    uStack_30 = uStack_a8;
    local_48 = (undefined4)local_c0;
    uStack_44 = local_c0._4_4_;
    uStack_40 = (undefined4)uStack_b8;
    uStack_3c = uStack_b8._4_4_;
    local_58 = local_d0;
    uStack_54 = uStack_cc;
    uStack_50 = (undefined4)uStack_c8;
    uStack_4c = uStack_c8._4_4_;
    uStack_68 = local_e0;
    uStack_64 = uStack_dc;
    uStack_60 = uStack_d8;
    uStack_5c = uStack_d4;
    uStack_78 = uStack_f0;
    uStack_74 = uStack_ec;
    uStack_70 = uStack_e8;
    uStack_6c = uStack_e4;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = _<uu_sort::merge::WriteableCompressedTmpFile_as_uu_sort::merge::WriteableTmpFile>::
            as_write(&local_90);
                    /* try { // try from 00268d3a to 00268d4b has its CatchHandler @ 00268dbd */
    write_lines(uVar1,uVar2,uVar3,param_6);
    uStack_a8 = uStack_30;
    local_a0 = local_28;
    uStack_b8 = CONCAT44(uStack_3c,uStack_40);
    local_b0 = local_38;
    uStack_c8 = CONCAT44(uStack_4c,uStack_50);
    local_c0 = CONCAT44(uStack_44,local_48);
    uStack_d8 = uStack_60;
    uStack_d4 = uStack_5c;
    local_d0 = local_58;
    uStack_cc = uStack_54;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    local_e0 = uStack_68;
    uStack_dc = uStack_64;
    local_f8 = (undefined4)local_80;
    uStack_f4 = local_80._4_4_;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    local_108 = (undefined4)local_90;
    uStack_104 = local_90._4_4_;
    uStack_100 = (undefined4)uStack_88;
    uStack_fc = uStack_88._4_4_;
    _<uu_sort::merge::WriteableCompressedTmpFile_as_uu_sort::merge::WriteableTmpFile>::
    finished_writing(param_1,&local_108);
  }
  return;
}