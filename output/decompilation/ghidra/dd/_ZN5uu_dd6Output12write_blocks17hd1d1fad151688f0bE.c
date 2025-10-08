void _ZN5uu_dd6Output12write_blocks17hd1d1fad151688f0bE
               (undefined8 *param_1,long param_2,undefined **param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined **local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = *(long *)(*(long *)(param_2 + 0x10) + 0x78);
  if (local_50 == 0) {
    local_60 = &PTR_s_chunk_size_must_be_non_zero_0023d1a0;
    local_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_002466a0)
              (&local_60,&PTR_DAT_0023de08);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_60 = param_3;
  local_58 = param_4;
  lVar3 = _ZN93__LT_core__slice__iter__Chunks_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2d70f533d6737a69E
                    (&local_60);
  if (lVar3 == 0) {
    lVar5 = 0;
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = 0;
    lVar5 = 0;
    do {
      auVar8 = _ZN5uu_dd6Output11write_block17ha48c1850e6d52037E(param_2,lVar3);
      uVar4 = auVar8._8_8_;
      if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        param_1[1] = uVar4;
        *param_1 = 1;
        return;
      }
      uVar1 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x78);
      lVar7 = lVar7 + (ulong)(uVar4 < uVar1);
      lVar6 = lVar6 + (ulong)(uVar1 <= uVar4);
      lVar5 = lVar5 + uVar4;
      lVar3 = _ZN93__LT_core__slice__iter__Chunks_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2d70f533d6737a69E
                        (&local_60);
    } while (lVar3 != 0);
  }
  param_1[2] = lVar5;
  param_1[3] = 0;
  param_1[4] = lVar6;
  param_1[5] = lVar7;
  *param_1 = 0;
  return;
}