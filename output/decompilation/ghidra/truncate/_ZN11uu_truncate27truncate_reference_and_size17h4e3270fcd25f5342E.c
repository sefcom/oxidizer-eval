long _ZN11uu_truncate27truncate_reference_and_size17h4e3270fcd25f5342E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined **param_5,long param_6,undefined param_7)

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
  code *local_130;
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
  undefined **ppuStack_e0;
  int **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_98;
  
  _ZN11uu_truncate19parse_mode_and_size17hbf18cbb89603c372E(&local_158,param_3,param_4);
  if (local_158 == 3) {
    if (CONCAT44(uStack_14c,iStack_150) == 0) {
      pcVar3 = 
      "you must specify a relative \'--size\' with \'--reference\'cannot stat : No such file or directory"
      ;
      uVar2 = 0x37;
    }
    else {
      if (((iStack_150 != 5) && (iStack_150 != 6)) || (CONCAT44(uStack_144,local_148) != 0)) {
        _ZN3std2fs8metadata17h6368ec5e748c38e4E(&local_e8,param_1,param_2);
        if ((int)local_e8 == 2) {
          lVar1 = _ZN11uu_truncate27truncate_reference_and_size28__u7b__u7b_closure_u7d__u7d_17h76112823d9285587E
                            (param_1,param_2,ppuStack_e0);
          return lVar1;
        }
        uVar2 = _ZN11uu_truncate12TruncateMode7to_size17h56da67cab21ebb4eE
                          (CONCAT44(uStack_14c,iStack_150),CONCAT44(uStack_144,local_148),local_98);
        ppuStack_e0 = param_5 + param_6 * 3;
        local_e8 = param_5;
        do {
          lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f1a2111712b44afE
                            (&local_e8);
          if (lVar1 == 0) {
            return 0;
          }
          lVar1 = _ZN11uu_truncate13file_truncate17h8689dfa8e5b80143E
                            (*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),param_7,uVar2)
          ;
        } while (lVar1 == 0);
        return lVar1;
      }
      pcVar3 = &DAT_00113bb0;
      uVar2 = 0x10;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h40f585cb9c895814E
              (&local_e8,pcVar3,uVar2);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2e09ae21cbeee3ecE(&local_e8);
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
    _ZN81__LT_uucore__parser__parse_size__ParseSizeError_u20_as_u20_core__fmt__Display_GT_3fmt17h1bebe12c07ded6a0E
    ;
    local_e8 = &PTR_s_Invalid_number__00216668;
    ppuStack_e0 = (undefined **)0x1;
    local_c8 = 0;
    local_d8 = &local_138;
    local_d0 = 1;
                    /* try { // try from 001adb4c to 001adb86 has its CatchHandler @ 001adc5f */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha526a84f6413e2dcE(local_100,&local_e8);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_d8 = (int **)local_f0;
    lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2e09ae21cbeee3ecE(&local_e8);
    _ZN4core3ptr63drop_in_place_LT_uucore__parser__parse_size__ParseSizeError_GT_17hd9babfdf21675581E
              (&local_128);
  }
  return lVar1;
}