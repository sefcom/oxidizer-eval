undefined8 *
_ZN5uu_dd14bufferedoutput14BufferedOutput5flush17hf0f2f33e15e5593bE
          (undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _ZN5uu_dd6Output12write_blocks17h78b56ae9a3f355f3E
            (&local_78,param_2 + 0x18,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (local_78 == 0) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (local_60 != 0) {
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h92e74c7f2e34bccfE(1);
      pcVar1 = (code *)swi(3);
      puVar2 = (undefined8 *)(*pcVar1)();
      return puVar2;
    }
    uVar3 = 0;
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h92e74c7f2e34bccfE(0);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hb073313df60fa3f3E(&local_78,param_2,0,local_68);
    _ZN4core3ptr55drop_in_place_LT_alloc__vec__drain__Drain_LT_u8_GT__GT_17h9f8a61b78eca9047E
              (&local_78);
    param_1[3] = 0;
    param_1[2] = local_68;
    param_1[4] = CONCAT44(uStack_44,local_48);
    param_1[5] = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    param_1[1] = local_70;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return param_1;
}