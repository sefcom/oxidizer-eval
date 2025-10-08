void _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_11key_release17h4e004f4cf113a66bE
               (undefined8 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined auVar4 [16];
  char local_d8 [2];
  short local_d6;
  undefined local_c0 [24];
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
  undefined8 uStack_30;
  
  if ((((param_3 & 0x90000) == 0x80000) &&
      (cVar2 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13search_active17hab11a215551a244eE
                         (param_1[0xd]), cVar2 == '\0')) &&
     (lVar1 = param_1[6],
     _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7display17hd691c8f83dd13719E
               (lVar1), *(long *)(lVar1 + 0x478) == 0)) {
    if (*(char *)(param_2 + 0x10) == '\x1a') {
      auVar4 = ZEXT816(1);
    }
    else {
                    /* try { // try from 00556e29 to 00556e60 has its CatchHandler @ 00556f44 */
      auVar4 = _ZN8smol_str4Repr6as_str17ha71f0b13e811ba13E(param_2 + 0x10);
    }
    cVar2 = _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_12alt_send_esc17h03648dcc30b21fedE
                      (param_1[5],*param_2,*(undefined2 *)((long)param_2 + 2),auVar4._0_8_,
                       auVar4._8_8_);
    uVar3 = param_4 & 0x824;
    if (cVar2 != '\0') {
      uVar3 = param_4;
    }
    (*(code *)PTR__ZN5winit8keyboard3Key6as_ref17ha61159f0166fa8fbE_009dfee0)(local_d8,param_2);
    if (((local_d8[0] != '\x1f') || (((local_d6 != 0xe && (local_d6 != 0xf)) && (local_d6 != 0x19)))
        ) || ((param_3 & 0x200000) != 0)) {
      local_38 = *(undefined8 *)(param_2 + 0x1c);
      uStack_30 = *(undefined8 *)(param_2 + 0x1e);
      local_48 = *(undefined8 *)(param_2 + 0x18);
      uStack_40 = *(undefined8 *)(param_2 + 0x1a);
      local_58 = *(undefined8 *)(param_2 + 0x14);
      uStack_50 = *(undefined8 *)(param_2 + 0x16);
      local_68 = *(undefined8 *)(param_2 + 0x10);
      uStack_60 = *(undefined8 *)(param_2 + 0x12);
      local_a8 = *param_2;
      uStack_a4 = param_2[1];
      uStack_a0 = param_2[2];
      uStack_9c = param_2[3];
      local_98 = param_2[4];
      uStack_94 = param_2[5];
      uStack_90 = param_2[6];
      uStack_8c = param_2[7];
      local_88 = param_2[8];
      uStack_84 = param_2[9];
      uStack_80 = param_2[10];
      uStack_7c = param_2[0xb];
      local_78 = param_2[0xc];
      uStack_74 = param_2[0xd];
      uStack_70 = param_2[0xe];
      uStack_6c = param_2[0xf];
                    /* try { // try from 00556ec3 to 00556ed6 has its CatchHandler @ 00556f37 */
      _ZN9alacritty5input8keyboard14build_sequence17hb59ed84f2bd9b92aE
                (local_c0,&local_a8,uVar3,param_3);
                    /* try { // try from 00556ed7 to 00556ede has its CatchHandler @ 00556f22 */
      _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
                (local_d8);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12write_to_pty17h8c41aa14fceee80bE
                (*param_1,local_c0);
      return;
    }
                    /* try { // try from 00556f15 to 00556f1c has its CatchHandler @ 00556f44 */
    _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
              (local_d8);
  }
  _ZN4core3ptr43drop_in_place_LT_winit__event__KeyEvent_GT_17hd16fceb331fb972bE(param_2);
  return;
}