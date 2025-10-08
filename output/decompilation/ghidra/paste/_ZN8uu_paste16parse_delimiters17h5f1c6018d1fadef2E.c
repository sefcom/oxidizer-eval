void _ZN8uu_paste16parse_delimiters17h5f1c6018d1fadef2E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined4 local_c4;
  undefined local_c0 [16];
  undefined8 local_b0;
  undefined local_a8 [16];
  long **local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  code *local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  local_c4 = 0;
  local_60 = param_2;
  local_58 = param_3;
  local_c0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h1fa32acdd47f5e6eE
                       (param_3,8,0x10,&PTR_s_src_uu_paste_src_paste_rs_001deca0);
  local_b0 = 0;
  local_68 = param_3 + param_2;
  local_70 = param_2;
  auVar4 = _ZN4core3str11validations15next_code_point17hd6fb93637fe3850aE(&local_70);
  uVar2 = auVar4._8_8_;
  if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    do {
      if ((int)uVar2 == 0x5c) {
        auVar5 = _ZN4core3str11validations15next_code_point17hd6fb93637fe3850aE(&local_70);
        iVar3 = auVar5._8_4_;
        if ((auVar5 & (undefined  [12])0x1) == (undefined  [12])0x0) {
          local_50 = &local_60;
          local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h733750fe09afa4a3E;
          local_a8._0_8_ = &PTR_s_delimiter_list_ends_with_an_unes_001dec90;
          local_a8._8_8_ = 1;
          local_88 = 0;
          local_98 = &local_50;
          local_90 = 1;
                    /* try { // try from 00156f0c to 00156f49 has its CatchHandler @ 00156f6f */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1ed41d4b248c8eaE(local_40,local_a8);
          local_90 = CONCAT44(local_90._4_4_,1);
          local_98 = (long **)local_30;
          uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd8d95bce55d08a3cE(local_a8);
          param_1[1] = uVar2;
          param_1[2] = &
                       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18a769c05e6d96b0E_001decf0
          ;
          *param_1 = 1;
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__Vec_LT_alloc__boxed__Box_LT__u5b_u8_u5d__GT__GT__GT_17ha43f19f279a403eaE
                    (local_c0);
          return;
        }
        if (iVar3 < 0x6e) {
          if (iVar3 == 0x30) {
            uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h696e36a6348774e2E();
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hab9f65348b292abfE
                      (local_c0,uVar2,0,&PTR_s_src_uu_paste_src_paste_rs_001ded58);
            goto LAB_00156e1b;
          }
          uVar1 = 0x5c;
          if (iVar3 != 0x5c) goto LAB_00156e10;
        }
        else if (iVar3 == 0x6e) {
          uVar1 = 10;
        }
        else {
          if (iVar3 != 0x74) goto LAB_00156e10;
          uVar1 = 9;
        }
        _ZN8uu_paste16parse_delimiters34add_one_byte_single_char_delimiter17hd82d0d9f8e58e2abE
                  (local_c0,uVar1);
      }
      else {
LAB_00156e10:
                    /* try { // try from 00156e10 to 00156e81 has its CatchHandler @ 00156f71 */
        _ZN8uu_paste16parse_delimiters28__u7b__u7b_closure_u7d__u7d_17h350d698bfe18c7acE
                  (&local_c4,local_c0);
      }
LAB_00156e1b:
      auVar4 = _ZN4core3str11validations15next_code_point17hd6fb93637fe3850aE(&local_70);
      uVar2 = auVar4._8_8_;
    } while ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
  local_98 = (long **)local_b0;
  local_a8 = local_c0;
  auVar4 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17h5a5236d680e487a4E(local_a8);
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 0;
  return;
}