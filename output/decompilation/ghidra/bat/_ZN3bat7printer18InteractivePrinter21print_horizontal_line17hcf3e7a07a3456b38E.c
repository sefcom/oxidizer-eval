void _ZN3bat7printer18InteractivePrinter21print_horizontal_line17hcf3e7a07a3456b38E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 extraout_RDX;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78;
  undefined **local_70;
  undefined *local_68;
  undefined local_60 [24];
  undefined local_48 [16];
  undefined8 local_38;
  
  uVar1 = *(ulong *)(param_2 + 0x210);
  local_144 = param_4;
  if (uVar1 == 0) {
    _ZN3bat7printer18InteractivePrinter26print_horizontal_line_term17h3959d9ef5566c6a5E
              (&local_140,*(undefined8 *)(param_2 + 0x200),param_3,param_2 + 0x220);
    if ((char)local_140 != '\r') {
      param_1[8] = local_100;
      param_1[9] = uStack_f8;
      param_1[6] = CONCAT44(uStack_10c,local_110);
      param_1[7] = CONCAT44(uStack_104,uStack_108);
      param_1[4] = local_120;
      param_1[5] = uStack_118;
      param_1[2] = local_130;
      param_1[3] = uStack_128;
      *param_1 = local_140;
      param_1[1] = uStack_138;
      return;
    }
  }
  else {
    local_f0 = param_3;
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
              (local_60,&DAT_002a2c43,3,~uVar1 + *(long *)(*(long *)(param_2 + 0x200) + 0x100));
                    /* try { // try from 0053f063 to 0053f07a has its CatchHandler @ 0053f2ef */
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
              (&local_140,&DAT_002a2c43,3,uVar1);
    local_d8 = (undefined8 **)local_130;
    local_140 = &local_e8;
    uStack_138 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_130 = &local_144;
    uStack_128 = 
    PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00808038;
    uStack_118 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_b8 = &DAT_002a2cd0;
    uStack_b0 = 3;
    local_98 = 0;
    local_a0 = 3;
                    /* try { // try from 0053f100 to 0053f119 has its CatchHandler @ 0053f2cd */
    local_120 = local_60;
    local_a8 = &local_140;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
              (local_48,0,extraout_RDX,&local_b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_e8);
    local_78 = *(undefined *)(param_2 + 0x230);
    local_88 = *(undefined8 *)(param_2 + 0x220);
    uStack_80 = *(undefined8 *)(param_2 + 0x228);
    local_a8 = (undefined8 *)local_38;
    local_a0 = 0x8000000000000002;
    local_68 = 
    PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
    ;
    local_e8 = &DAT_007cea80;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_70;
    local_d0 = 1;
                    /* try { // try from 0053f1c3 to 0053f1d7 has its CatchHandler @ 0053f2a8 */
    local_70 = &local_b8;
    (*(code *)PTR__ZN3bat6output12OutputHandle9write_fmt17hec1e6f03d02f41b4E_00807b20)
              (&local_140,local_f0,&local_e8);
    if ((char)local_140 != '\r') {
      param_1[8] = local_100;
      param_1[9] = uStack_f8;
      *(undefined4 *)(param_1 + 6) = local_110;
      *(undefined4 *)((long)param_1 + 0x34) = uStack_10c;
      *(undefined4 *)(param_1 + 7) = uStack_108;
      *(undefined4 *)((long)param_1 + 0x3c) = uStack_104;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_120;
      *(undefined4 *)((long)param_1 + 0x24) = local_120._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_118;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_118._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_130;
      *(undefined4 *)((long)param_1 + 0x14) = local_130._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_128;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_128._4_4_;
      *(undefined4 *)param_1 = (undefined4)local_140;
      *(undefined4 *)((long)param_1 + 4) = local_140._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_138;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_138._4_4_;
      _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
                (&local_b8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_60);
      return;
    }
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
              (&local_b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_60);
  }
  *(undefined *)param_1 = 0xd;
  return;
}