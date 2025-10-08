void _ZN9alacritty5input22Processor_LT_T_C_A_GT_16on_mouse_release17hac8a1c7846717501E
               (long param_1,ulong param_2)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  
  pbVar1 = *(byte **)(param_1 + 0x28);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (pbVar1);
  if ((*pbVar1 & 4) == 0) {
    cVar3 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                      (*(undefined8 *)(param_1 + 8));
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00559e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_001f2b90 + *(int *)(&DAT_001f2b90 + (param_2 & 0xffff) * 4)))();
      return;
    }
  }
  lVar2 = *(long *)(param_1 + 0x30);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7display17hd691c8f83dd13719E
            (lVar2);
  local_158 = *(undefined4 *)(lVar2 + 0x728);
  uStack_154 = *(undefined4 *)(lVar2 + 0x72c);
  uStack_150 = *(undefined4 *)(lVar2 + 0x730);
  uStack_14c = *(undefined4 *)(lVar2 + 0x734);
  local_148 = *(undefined4 *)(lVar2 + 0x738);
  uStack_144 = *(undefined4 *)(lVar2 + 0x73c);
  uStack_140 = *(undefined4 *)(lVar2 + 0x740);
  uStack_13c = *(undefined4 *)(lVar2 + 0x744);
  local_138 = *(undefined4 *)(lVar2 + 0x748);
  uStack_134 = *(undefined4 *)(lVar2 + 0x74c);
  uStack_130 = *(undefined4 *)(lVar2 + 0x750);
  uStack_12c = *(undefined4 *)(lVar2 + 0x754);
  local_128 = *(undefined8 *)(lVar2 + 0x758);
  *(undefined *)(lVar2 + 0x758) = 2;
  puVar7 = &local_158;
  if ((char)local_128 == '\x02') {
    puVar7 = (undefined4 *)(undefined *)0x0;
  }
  lVar4 = _ZN4core6option15Option_LT_T_GT_6filter17h0f01ff3529478ed4E(puVar7,param_2 & 0xffffffff);
  if (lVar4 != 0) {
                    /* try { // try from 00559e6d to 00559e77 has its CatchHandler @ 00559f60 */
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12trigger_hint17h4f3e94a68883926cE
              (param_1,lVar4);
  }
  local_e8 = local_128;
  local_f8 = local_138;
  uStack_f4 = uStack_134;
  uStack_f0 = uStack_130;
  uStack_ec = uStack_12c;
  local_108 = local_148;
  uStack_104 = uStack_144;
  uStack_100 = uStack_140;
  uStack_fc = uStack_13c;
  local_118 = local_158;
  uStack_114 = uStack_154;
  uStack_110 = uStack_150;
  uStack_10c = uStack_14c;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7display17hd691c8f83dd13719E
            (lVar2);
                    /* try { // try from 00559eae to 00559eb5 has its CatchHandler @ 00559f73 */
  _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__display__hint__HintMatch_GT__GT_17ha95ebafd6b78edefE
            ((undefined4 *)(lVar2 + 0x728));
  *(undefined8 *)(lVar2 + 0x758) = local_e8;
  *(undefined4 *)(lVar2 + 0x748) = local_f8;
  *(undefined4 *)(lVar2 + 0x74c) = uStack_f4;
  *(undefined4 *)(lVar2 + 0x750) = uStack_f0;
  *(undefined4 *)(lVar2 + 0x754) = uStack_ec;
  *(undefined4 *)(lVar2 + 0x738) = local_108;
  *(undefined4 *)(lVar2 + 0x73c) = uStack_104;
  *(undefined4 *)(lVar2 + 0x740) = uStack_100;
  *(undefined4 *)(lVar2 + 0x744) = uStack_fc;
  *(undefined4 *)(lVar2 + 0x728) = local_118;
  *(undefined4 *)(lVar2 + 0x72c) = uStack_114;
  *(undefined4 *)(lVar2 + 0x730) = uStack_110;
  *(undefined4 *)(lVar2 + 0x734) = uStack_10c;
  uVar5 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                    (lVar2);
  uVar6 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (uVar5);
  _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE(&local_118,uVar5,uVar6,0);
  _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
            (&local_118);
  if ((ushort)param_2 < 2) {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_14copy_selection17h4e46574a1c8d7956E
              (param_1,1);
  }
  return;
}