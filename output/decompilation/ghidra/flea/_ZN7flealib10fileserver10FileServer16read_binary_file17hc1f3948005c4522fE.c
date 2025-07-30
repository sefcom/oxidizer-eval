long * _ZN7flealib10fileserver10FileServer16read_binary_file17hc1f3948005c4522fE
                 (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  int local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 *local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 *local_d8;
  code *local_d0;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_98;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  
  local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
  local_f8 = param_3;
  local_f0 = param_4;
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17hdf17d5a6360402f0E(0x2f,&local_148);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_e8,uVar2);
  local_158 = local_d8;
  local_168 = (int)local_e8;
  uStack_164 = local_e8._4_4_;
  uStack_160 = (undefined4)uStack_e0;
  uStack_15c = uStack_e0._4_4_;
                    /* try { // try from 0047b523 to 0047b53f has its CatchHandler @ 0047b7c9 */
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h7ff1b9328b1378bcE
                    (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),uStack_e0);
  if (cVar1 != '\0') {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_e8,1,0);
    local_138 = (undefined8 *)local_d8;
    local_148._0_4_ = (undefined4)local_e8;
    local_148._4_4_ = local_e8._4_4_;
    uStack_140._0_4_ = SUB84(uStack_e0,0);
    uStack_140._4_4_ = uStack_e0._4_4_;
                    /* try { // try from 0047b55a to 0047b563 has its CatchHandler @ 0047b7a1 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_168);
    local_158 = local_138;
    local_168 = (undefined4)local_148;
    uStack_164 = local_148._4_4_;
    uStack_160 = (undefined4)uStack_140;
    uStack_15c = uStack_140._4_4_;
  }
  uStack_e0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
  local_d8 = &local_168;
  local_d0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
  local_c8 = &local_f8;
  local_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e99a2697242919dE;
  local_148 = &DAT_0016b258;
  uStack_140 = 3;
  local_128 = 0;
  local_130 = 3;
                    /* try { // try from 0047b5ef to 0047b600 has its CatchHandler @ 0047b7c9 */
  local_138 = &local_e8;
  local_e8 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_30,&local_148);
  local_118 = local_30;
  uStack_114 = uStack_2c;
  uStack_110 = uStack_28;
  uStack_10c = uStack_24;
  local_108 = local_20;
                    /* try { // try from 0047b61b to 0047b675 has its CatchHandler @ 0047b7ba */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h7ef9d321b3428b60E_008267b8
  )(&local_148,&local_118);
  _ZN3std2fs8metadata17hab0b5a644e120762E(&local_e8,&local_148);
  pcVar3 = uStack_e0;
  if ((int)local_e8 != 2) {
    if (local_98 < 0x1f400001) {
      local_d8 = local_108;
      local_e8 = CONCAT44(uStack_114,local_118);
      uStack_e0 = (code *)CONCAT44(uStack_10c,uStack_110);
                    /* try { // try from 0047b6c5 to 0047b6d6 has its CatchHandler @ 0047b79f */
      _ZN3std2fs4File4open17h7ac33442c85c547dE(&local_148,&local_e8);
      if (((ulong)local_148 & 1) == 0) {
        local_16c = local_148._4_4_;
        local_e8 = 0;
        uStack_e0 = (code *)0x1;
        local_d8 = (undefined4 *)0x0;
                    /* try { // try from 0047b722 to 0047b734 has its CatchHandler @ 0047b784 */
        auVar4 = (*(code *)
                   PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17hc5ce334212601c81E_008284f0
                 )(&local_16c,&local_e8);
        if (auVar4._0_8_ == 0) {
          param_1[2] = (long)local_d8;
          *param_1 = local_e8;
          param_1[1] = (long)uStack_e0;
        }
        else {
          param_1[1] = auVar4._8_8_;
          *param_1 = -0x8000000000000000;
                    /* try { // try from 0047b74b to 0047b757 has its CatchHandler @ 0047b77f */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE
                    (&local_e8);
        }
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_16c);
      }
      else {
        param_1[1] = uStack_140;
        *param_1 = -0x8000000000000000;
      }
      goto LAB_0047b691;
    }
    pcVar3 = (code *)(*(code *)PTR__ZN3std2io5error5Error3new17h73bba56a22ab7bbeE_00826eb0)
                               (0x28,"File too large",0xe);
  }
  param_1[1] = (long)pcVar3;
  *param_1 = -0x8000000000000000;
                    /* try { // try from 0047b687 to 0047b690 has its CatchHandler @ 0047b7c9 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_118);
LAB_0047b691:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_168);
  return param_1;
}