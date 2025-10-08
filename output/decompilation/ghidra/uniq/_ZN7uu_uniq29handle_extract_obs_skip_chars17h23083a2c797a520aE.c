void _ZN7uu_uniq29handle_extract_obs_skip_chars17h23083a2c797a520aE
               (undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_88 = 0;
  local_80 = 4;
  local_78 = 0;
  uStack_50 = param_2 + param_3;
  local_58 = param_2;
  _ZN4core3str11validations15next_code_point17h563de53b3cb3d652E(&local_58);
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  uStack_40 = (undefined4)uStack_50;
  uStack_3c = uStack_50._4_4_;
  do {
    auVar2 = _ZN4core3str11validations15next_code_point17h563de53b3cb3d652E(&local_48);
    lVar1 = local_80;
    if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      if (local_78 == 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h555f59bb363643cbE
                  (&local_70,param_2,param_3);
        param_1[2] = local_60;
        *(undefined4 *)param_1 = local_70;
        *(undefined4 *)((long)param_1 + 4) = uStack_6c;
        *(undefined4 *)(param_1 + 1) = uStack_68;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_64;
        lVar1 = local_80;
      }
      else {
                    /* try { // try from 001674da to 0016757f has its CatchHandler @ 001675b6 */
        _ZN4core4iter6traits8iterator8Iterator7collect17h3b15c762db729d48E
                  (&local_70,local_80,local_80 + local_78 * 4);
        local_38 = local_60;
        local_48 = local_70;
        uStack_44 = uStack_6c;
        uStack_40 = uStack_68;
        uStack_3c = uStack_64;
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h95e753fd9f550503E
                  (param_4);
        param_4[2] = local_38;
        *(undefined4 *)param_4 = local_48;
        *(undefined4 *)((long)param_4 + 4) = uStack_44;
        *(undefined4 *)(param_4 + 1) = uStack_40;
        *(undefined4 *)((long)param_4 + 0xc) = uStack_3c;
        *param_1 = 0x8000000000000000;
      }
LAB_001675a3:
      _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h341dc4a29c957248E
                (local_88,lVar1);
      return;
    }
    if (9 < auVar2._8_4_ - 0x30U) {
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h95e753fd9f550503E
                (param_4);
      *param_4 = 0x8000000000000000;
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h555f59bb363643cbE
                (&local_70,param_2,param_3);
      param_1[2] = local_60;
      *(undefined4 *)param_1 = local_70;
      *(undefined4 *)((long)param_1 + 4) = uStack_6c;
      *(undefined4 *)(param_1 + 1) = uStack_68;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_64;
      lVar1 = local_80;
      goto LAB_001675a3;
    }
                    /* try { // try from 001674b4 to 001674c0 has its CatchHandler @ 001675b8 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h71471e6e1bce8529E
              (&local_88,auVar2._8_8_ & 0xffffffff,&PTR_DAT_001f5928);
  } while( true );
}