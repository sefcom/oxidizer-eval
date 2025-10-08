undefined8 *
_ZN7uu_uniq11filter_args17h5c7e6444ca32d395E
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined *param_5,undefined *param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined *local_38;
  
  local_50 = param_2[1];
  uVar8 = param_2[2];
                    /* try { // try from 00166d2f to 00166dce has its CatchHandler @ 00166ed9 */
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001fc218)
            (&local_70,local_50,uVar8);
  uVar4 = local_60;
  uVar3 = local_68;
  if (local_70 == 1) {
    *param_1 = *param_2;
    param_1[1] = local_50;
    param_1[2] = uVar8;
    return param_1;
  }
  uVar1 = *local_40;
  uVar2 = *local_38;
  cVar6 = _ZN7uu_uniq30should_extract_obs_skip_fields17hfd0c6e5f233e6bbaE
                    (local_68,local_60,uVar1,uVar2);
  if (cVar6 == '\0') {
    cVar6 = _ZN7uu_uniq29should_extract_obs_skip_chars17haefcf42314616054E(uVar3,uVar4,uVar1,uVar2);
    if (cVar6 == '\0') {
                    /* try { // try from 00166e27 to 00166e36 has its CatchHandler @ 00166ed9 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h555f59bb363643cbE
                (&local_70,uVar3,uVar4);
      uVar8 = CONCAT44(uStack_6c,local_70);
      local_58 = local_68;
                    /* try { // try from 00166e4b to 00166e96 has its CatchHandler @ 00166ec7 */
      cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                        (uVar3,uVar4,&DAT_0011b1cd,2);
      if (cVar6 != '\0') {
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h95e753fd9f550503E
                  (param_3);
        *param_3 = 0x8000000000000000;
      }
      cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                        (uVar3,uVar4,&DAT_0011b1cf,2);
      puVar5 = local_48;
      uVar7 = local_60;
      if (cVar6 != '\0') {
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h95e753fd9f550503E
                  (local_48);
        *puVar5 = 0x8000000000000000;
      }
      goto LAB_00166de3;
    }
    _ZN7uu_uniq29handle_extract_obs_skip_chars17h23083a2c797a520aE(&local_70,uVar3,uVar4,local_48);
  }
  else {
    _ZN7uu_uniq30handle_extract_obs_skip_fields17h14d32fa87c099e4fE(&local_70,uVar3,uVar4,param_3);
  }
  uVar8 = CONCAT44(uStack_6c,local_70);
  local_58 = local_68;
  uVar7 = local_60;
LAB_00166de3:
                    /* try { // try from 00166de3 to 00166df7 has its CatchHandler @ 00166ec7 */
  _ZN7uu_uniq24handle_preceding_options17hdc22a5259b3d167dE(uVar3,uVar4,local_40,local_38);
  *param_1 = uVar8;
  param_1[1] = local_58;
  param_1[2] = uVar7;
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9abea3300b327e16E
            (*param_2,local_50);
  return param_1;
}