void _ZN5uu_df10filesystem10Filesystem3new17h176c4d07e180ea46E
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined local_1a8 [24];
  byte local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = param_2 + 0x60;
  if (*(long *)(param_2 + 0x70) == 0) {
    lVar2 = param_2 + 0x18;
  }
                    /* try { // try from 0016b47a to 0016b55e has its CatchHandler @ 0016b5e4 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0020a150
  )(local_1a8,lVar2);
  _ZN6uucore8features5fsext6statfs17h383ebb62e1d8f19aE(local_190,local_1a8);
  if ((local_190[0] & 1) != 0) {
    _ZN4core3ptr128drop_in_place_LT_core__result__Result_LT_libc__unix__linux_like__linux__gnu__b64__x86_64__statfs_C_alloc__string__String_GT__GT_17h4dda94d0d41dac03E
              (local_190);
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hac58f874263dbc4eE(param_3);
    _ZN4core3ptr55drop_in_place_LT_uucore__features__fsext__MountInfo_GT_17h0026f4350179d2b5E
              (param_2);
    return;
  }
  local_38 = local_118;
  local_48 = local_128;
  uStack_40 = uStack_120;
  local_58 = local_138;
  uStack_50 = uStack_130;
  local_68 = local_148;
  uStack_60 = uStack_140;
  local_78 = local_158;
  uStack_74 = uStack_154;
  uStack_70 = uStack_150;
  uStack_6c = uStack_14c;
  local_88 = local_168;
  uStack_84 = uStack_164;
  uStack_80 = uStack_160;
  uStack_7c = uStack_15c;
  local_98 = local_178;
  uStack_94 = uStack_174;
  uStack_90 = uStack_170;
  uStack_8c = uStack_16c;
  local_a8 = local_188;
  uStack_a4 = uStack_184;
  uStack_a0 = uStack_180;
  uStack_9c = uStack_17c;
  (*(code *)PTR__ZN6uucore8features5fsext7FsUsage3new17hb771c82a6e6cf300E_0020a190)
            (&local_1e0,&local_a8);
  puVar1 = PTR_memcpy_00209e88;
  (*(code *)PTR_memcpy_00209e88)(local_190,param_2,0x98);
  local_f8 = *param_3;
  uStack_f0 = param_3[1];
  local_e8 = param_3[2];
  local_e0 = local_1e0;
  uStack_dc = uStack_1dc;
  uStack_d8 = uStack_1d8;
  uStack_d4 = uStack_1d4;
  local_d0 = local_1d0;
  uStack_cc = uStack_1cc;
  uStack_c8 = uStack_1c8;
  uStack_c4 = uStack_1c4;
  local_c0 = local_1c0;
  uStack_bc = uStack_1bc;
  uStack_b8 = uStack_1b8;
  uStack_b4 = uStack_1b4;
  local_b0 = local_1b0;
  (*(code *)puVar1)(param_1,local_190,0xe8);
  return;
}