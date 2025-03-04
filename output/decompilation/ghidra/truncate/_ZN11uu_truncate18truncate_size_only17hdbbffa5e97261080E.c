long _ZN11uu_truncate18truncate_size_only17hdbbffa5e97261080E
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_140;
  long local_138;
  undefined8 *local_130;
  code *local_128;
  undefined local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined local_f0;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_b0;
  undefined8 local_98;
  
  _ZN11uu_truncate19parse_mode_and_size17hbf18cbb89603c372E(&local_178,param_1,param_2);
  if ((int)local_178 == 3) {
    if (((uStack_170 == 5) || ((int)uStack_170 == 6)) && (local_168 == (undefined8 **)0x0)) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h40f585cb9c895814E
                (&local_e8,&DAT_00113bb0,0x10);
      uStack_d0 = 1;
      lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2e09ae21cbeee3ecE(&local_e8);
    }
    else {
      local_138 = param_3 + param_4 * 0x18;
      local_140 = param_3;
      do {
        lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f1a2111712b44afE
                          (&local_140);
        if (lVar2 == 0) {
          return 0;
        }
        _ZN3std2fs8metadata17h1cc9ec6f7ac4b82eE(&local_e8,lVar2);
        if (CONCAT44(uStack_e4,local_e8) == 2) {
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf10946d364a1ba5fE
                    (2,CONCAT44(uStack_dc,iStack_e0));
          uVar1 = 0;
        }
        else {
          uVar1 = local_98;
          if ((local_b0 & 0xf000) == 0x1000) {
            local_100 = *(undefined4 *)(lVar2 + 8);
            uStack_fc = *(undefined4 *)(lVar2 + 0xc);
            uStack_f8 = *(undefined4 *)(lVar2 + 0x10);
            uStack_f4 = *(undefined4 *)(lVar2 + 0x14);
            local_108 = 0;
            local_f0 = 1;
            local_130 = &local_108;
            local_128 = 
            _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
            local_178 = &PTR_s_cannot_open_for_writing__No_such_002165a0;
            uStack_170 = 2;
            local_158 = 0;
            local_168 = &local_130;
            uStack_160 = 1;
                    /* try { // try from 001ae113 to 001ae142 has its CatchHandler @ 001ae15b */
            _ZN4core6option15Option_LT_T_GT_11map_or_else17ha526a84f6413e2dcE(local_120,&local_178);
            uStack_160 = CONCAT44(uStack_160._4_4_,1);
            local_168 = (undefined8 **)local_110;
            lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2e09ae21cbeee3ecE(&local_178);
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf10946d364a1ba5fE
                      (CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,iStack_e0));
            return lVar2;
          }
        }
        uVar1 = _ZN11uu_truncate12TruncateMode7to_size17h56da67cab21ebb4eE
                          (uStack_170,local_168,uVar1);
        lVar2 = _ZN11uu_truncate13file_truncate17h8689dfa8e5b80143E
                          (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),param_5,uVar1);
      } while (lVar2 == 0);
    }
  }
  else {
    local_d8 = (undefined4)local_168;
    uStack_d4 = local_168._4_4_;
    uStack_d0 = (undefined4)uStack_160;
    uStack_cc = uStack_160._4_4_;
    local_e8 = (int)local_178;
    uStack_e4 = local_178._4_4_;
    iStack_e0 = (int)uStack_170;
    uStack_dc = uStack_170._4_4_;
    lVar2 = _ZN11uu_truncate18truncate_size_only28__u7b__u7b_closure_u7d__u7d_17h73ee083b2ef723e0E
                      (&local_e8);
  }
  return lVar2;
}