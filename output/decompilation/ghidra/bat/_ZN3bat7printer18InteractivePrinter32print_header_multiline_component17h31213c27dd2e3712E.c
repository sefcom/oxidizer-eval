void _ZN3bat7printer18InteractivePrinter32print_header_multiline_component17h31213c27dd2e3712E
               (undefined4 *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong local_168;
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulong local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined local_70;
  undefined4 local_6c;
  undefined local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x200) + 0x100);
  lVar5 = _ZN3bat7printer18InteractivePrinter34get_header_component_indent_length17hd64a2392c9e377f1E
                    (*(long *)(param_2 + 0x200),*(undefined8 *)(param_2 + 0x210));
  uVar7 = lVar1 - lVar5;
  uVar6 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                    (param_4,param_4 + param_5);
  if (uVar6 <= uVar7) {
    _ZN3bat7printer18InteractivePrinter34print_header_component_with_indent17hfbb93f37e32c0b2eE
              (param_1,param_2,param_3,param_4,param_5);
    return;
  }
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,2);
  uStack_c4 = 0x10020001;
  local_c0 = 0x10;
  local_b8 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_78 = 0;
  local_70 = 2;
  local_6c = 0x10020001;
  local_68 = 0x10;
  local_158 = param_1;
  local_150 = param_3;
  uStack_d8 = param_5;
  local_88 = param_5;
  local_80 = param_5;
  local_60 = param_4;
  local_58 = param_5;
  _ZN4core4iter6traits8iterator8Iterator7collect17h8d2a77f30e1e4d47E(&local_178,&local_110);
  if (uVar7 < local_168) {
    do {
      uVar2 = CONCAT44(uStack_16c,uStack_170);
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17ha2be0b953148dba9E
                (&local_50,uVar2,local_168,uVar7);
      uVar4 = local_38;
      uVar3 = local_40;
                    /* try { // try from 0053f998 to 0053f9a9 has its CatchHandler @ 0053fb34 */
      _ZN5alloc3str17join_generic_copy17he93d229304a012f3E(&local_148,local_50,local_48,1,0);
      local_118 = local_138;
      local_128 = local_148;
      uStack_124 = uStack_144;
      uStack_120 = uStack_140;
      uStack_11c = uStack_13c;
                    /* try { // try from 0053f9c3 to 0053f9d2 has its CatchHandler @ 0053fb25 */
      _ZN3bat7printer18InteractivePrinter34print_header_component_with_indent17hfbb93f37e32c0b2eE
                (&local_110,param_2,local_150,CONCAT44(uStack_13c,uStack_140));
      if ((char)local_110 != '\r') {
        *(undefined8 *)(local_158 + 0x10) = local_d0;
        *(ulong *)(local_158 + 0x12) = CONCAT44(uStack_c4,uStack_c8);
        local_158[0xc] = (undefined4)local_e0;
        local_158[0xd] = local_e0._4_4_;
        local_158[0xe] = (undefined4)uStack_d8;
        local_158[0xf] = uStack_d8._4_4_;
        local_158[8] = (undefined4)local_f0;
        local_158[9] = local_f0._4_4_;
        local_158[10] = uStack_e8;
        local_158[0xb] = uStack_e4;
        local_158[4] = (undefined4)local_100;
        local_158[5] = local_100._4_4_;
        local_158[6] = uStack_f8;
        local_158[7] = uStack_f4;
        *local_158 = (undefined4)local_110;
        local_158[1] = local_110._4_4_;
        local_158[2] = uStack_108;
        local_158[3] = uStack_104;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_128);
        _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
                  (CONCAT44(uStack_174,local_178),uVar2);
        return;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_128);
                    /* try { // try from 0053f9e8 to 0053f9f5 has its CatchHandler @ 0053fb34 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7bf91e9bef7c0e32E
                (&local_110,uVar3,uVar4);
      _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
                (CONCAT44(uStack_174,local_178),uVar2);
      local_168 = local_100;
      local_178 = (undefined4)local_110;
      uStack_174 = local_110._4_4_;
      uStack_170 = uStack_108;
      uStack_16c = uStack_104;
    } while (uVar7 < local_100);
  }
  uVar2 = CONCAT44(uStack_16c,uStack_170);
                    /* try { // try from 0053fa23 to 0053fa37 has its CatchHandler @ 0053fb23 */
  _ZN5alloc3str17join_generic_copy17he93d229304a012f3E(&local_110,uVar2,local_168,1,0);
  local_138 = local_100;
  local_148 = (undefined4)local_110;
  uStack_144 = local_110._4_4_;
  uStack_140 = uStack_108;
  uStack_13c = uStack_104;
                    /* try { // try from 0053fa51 to 0053fa62 has its CatchHandler @ 0053fb02 */
  _ZN3bat7printer18InteractivePrinter34print_header_component_with_indent17hfbb93f37e32c0b2eE
            (local_158,param_2,local_150,CONCAT44(uStack_104,uStack_108));
  _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
            (CONCAT44(uStack_174,local_178),uVar2);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_148);
  return;
}