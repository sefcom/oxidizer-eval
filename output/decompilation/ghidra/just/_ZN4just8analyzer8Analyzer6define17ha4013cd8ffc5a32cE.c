void _ZN4just8analyzer8Analyzer6define17ha4013cd8ffc5a32cE
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5,char param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined auVar8 [16];
  undefined8 local_160;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined auStack_128 [16];
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined local_88 [88];
  
  uVar2 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_3);
  lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h93f8c431b210ac17E
                    (param_2,uVar2);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    local_160 = *(undefined8 *)(lVar3 + 0x18);
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                      (uVar2,local_160,param_4,param_5);
    if ((param_6 == '\0') || (cVar1 == '\0')) {
      uVar4 = *(ulong *)(lVar3 + 0x50);
      uVar5 = param_4;
      uVar6 = param_5;
      puVar7 = param_3;
      if ((ulong)param_3[6] < uVar4) {
        uVar4 = param_3[6];
        uVar5 = uVar2;
        uVar6 = local_160;
        uVar2 = param_4;
        puVar7 = (undefined8 *)(lVar3 + 0x20);
        local_160 = param_5;
      }
      local_98 = puVar7[8];
      local_d8 = *(undefined4 *)puVar7;
      uStack_d4 = *(undefined4 *)((long)puVar7 + 4);
      uStack_d0 = *(undefined4 *)(puVar7 + 1);
      uStack_cc = *(undefined4 *)((long)puVar7 + 0xc);
      local_c8 = *(undefined4 *)(puVar7 + 2);
      uStack_c4 = *(undefined4 *)((long)puVar7 + 0x14);
      uStack_c0 = *(undefined4 *)(puVar7 + 3);
      uStack_bc = *(undefined4 *)((long)puVar7 + 0x1c);
      local_b8 = *(undefined4 *)(puVar7 + 4);
      uStack_b4 = *(undefined4 *)((long)puVar7 + 0x24);
      uStack_b0 = *(undefined4 *)(puVar7 + 5);
      uStack_ac = *(undefined4 *)((long)puVar7 + 0x2c);
      local_a8 = *(undefined4 *)(puVar7 + 6);
      uStack_a4 = *(undefined4 *)((long)puVar7 + 0x34);
      uStack_a0 = *(undefined4 *)(puVar7 + 7);
      uStack_9c = *(undefined4 *)((long)puVar7 + 0x3c);
      auStack_128 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_3)
      ;
      local_130 = local_160;
      local_140 = 0x8000000000000030;
      local_138 = uVar2;
      uStack_118 = uVar5;
      local_110 = uVar6;
      uStack_108 = uVar4;
      _ZN4just5token5Token5error17h986494da066a4455E(param_1,&local_d8,&local_140);
      return;
    }
  }
  auVar8 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_3);
  local_130 = *param_3;
  auStack_128._0_8_ = param_3[1];
  auStack_128._8_8_ = param_3[2];
  uStack_118 = param_3[3];
  local_110 = param_3[4];
  uStack_108 = param_3[5];
  local_100 = *(undefined4 *)(param_3 + 6);
  uStack_fc = *(undefined4 *)((long)param_3 + 0x34);
  uStack_f8 = *(undefined4 *)(param_3 + 7);
  uStack_f4 = *(undefined4 *)((long)param_3 + 0x3c);
  local_f0 = param_3[8];
  local_140 = param_4;
  local_138 = param_5;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h96cc7913af61e6ffE
            (local_88,param_2,auVar8._0_8_,auVar8._8_8_,&local_140);
  *(undefined *)(param_1 + 0x48) = 0x25;
  return;
}