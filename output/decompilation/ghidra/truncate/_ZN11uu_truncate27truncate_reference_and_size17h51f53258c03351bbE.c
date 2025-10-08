long _ZN11uu_truncate27truncate_reference_and_size17h51f53258c03351bbE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,undefined param_7)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *local_138;
  undefined *local_130;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_100 [16];
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  int **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_98;
  
  _ZN11uu_truncate19parse_mode_and_size17h9caa4c91beef10d4E(&local_158,param_3,param_4);
  if (local_158 == 4) {
    if (CONCAT44(uStack_14c,iStack_150) == 0) {
      pcVar3 = "you must specify a relative \'--size\' with";
      uVar2 = 0x37;
    }
    else {
      if (((iStack_150 != 5) && (iStack_150 != 6)) || (CONCAT44(uStack_144,local_148) != 0)) {
        _ZN3std2fs8metadata17h460bc532d18d3302E(&local_e8,param_1,param_2);
        if ((int)local_e8 == 2) {
          lVar1 = _ZN11uu_truncate27truncate_reference_and_size28__u7b__u7b_closure_u7d__u7d_17h6c1eb193d24fc6abE
                            (param_1,param_2,uStack_e0);
          return lVar1;
        }
        uVar2 = _ZN11uu_truncate12TruncateMode7to_size17he28c50c65dad202dE
                          (CONCAT44(uStack_14c,iStack_150),CONCAT44(uStack_144,local_148),local_98);
        param_6 = param_6 * 0x18;
        do {
          if (param_6 == 0) {
            return 0;
          }
          lVar1 = _ZN11uu_truncate13file_truncate17ha430ef778d6571e6E
                            (*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10),param_7,
                             uVar2);
          param_6 = param_6 + -0x18;
          param_5 = param_5 + 0x18;
        } while (lVar1 == 0);
        return lVar1;
      }
      pcVar3 = &DAT_00116e60;
      uVar2 = 0x10;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc324d0392f7be5deE
              (&local_e8,pcVar3,uVar2);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0fcae278b0f73f4aE(&local_e8);
  }
  else {
    local_118 = local_148;
    uStack_114 = uStack_144;
    uStack_110 = uStack_140;
    uStack_10c = uStack_13c;
    local_128 = local_158;
    uStack_124 = uStack_154;
    iStack_120 = iStack_150;
    uStack_11c = uStack_14c;
    local_138 = &local_128;
    local_130 = 
    PTR__ZN91__LT_uucore__features__parser__parse_size__ParseSizeError_u20_as_u20_core__fmt__Display_GT_3fmt17he618d31d336be9c1E_001ea1c0
    ;
    local_e8 = &PTR_s_Invalid_number__001e40e8;
    uStack_e0 = 1;
    local_c8 = 0;
    local_d8 = &local_138;
    local_d0 = 1;
                    /* try { // try from 001591cc to 00159206 has its CatchHandler @ 001592d9 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hccc437e8064ad343E(local_100,&local_e8);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_d8 = (int **)local_f0;
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0fcae278b0f73f4aE(&local_e8);
    _ZN4core3ptr73drop_in_place_LT_uucore__features__parser__parse_size__ParseSizeError_GT_17hdafbfd975804eb50E
              (&local_128);
  }
  return lVar1;
}