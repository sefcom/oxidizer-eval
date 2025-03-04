undefined8 *
_ZN7uu_uniq11filter_args17h5a24797b13527672E
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined *param_5,undefined *param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined *local_40;
  undefined *local_38;
  
                    /* try { // try from 001bd43e to 001bd4d8 has its CatchHandler @ 001bd5e8 */
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_80,param_2[1],param_2[2]);
  uVar3 = local_70;
  if (CONCAT44(uStack_7c,local_80) != 0) {
    param_1[2] = param_2[2];
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar4 = CONCAT44(uStack_74,uStack_78);
  uVar1 = *local_40;
  uVar2 = *local_38;
  cVar6 = _ZN7uu_uniq30should_extract_obs_skip_fields17h51b5db688d315961E
                    (uVar4,local_70,uVar1,uVar2);
  if (cVar6 == '\0') {
    cVar6 = _ZN7uu_uniq29should_extract_obs_skip_chars17h9543cb83474ee9e8E(uVar4,uVar3,uVar1,uVar2);
    if (cVar6 == '\0') {
                    /* try { // try from 001bd52f to 001bd540 has its CatchHandler @ 001bd5e8 */
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_80,uVar4,uVar3);
      local_58 = local_70;
      local_68 = local_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
                    /* try { // try from 001bd555 to 001bd56c has its CatchHandler @ 001bd5d9 */
      cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                        (uVar4,uVar3,"-f",2);
      if (cVar6 != '\0') {
                    /* try { // try from 001bd57b to 001bd582 has its CatchHandler @ 001bd5d0 */
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17haaebd7cc9f7d6887E
                  (param_3);
        *param_3 = 0x8000000000000000;
      }
                    /* try { // try from 001bd587 to 001bd59e has its CatchHandler @ 001bd5d9 */
      cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                        (uVar4,uVar3,"-s",2);
      puVar5 = local_48;
      if (cVar6 != '\0') {
                    /* try { // try from 001bd5b1 to 001bd5bd has its CatchHandler @ 001bd5c7 */
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17haaebd7cc9f7d6887E
                  (local_48);
        *puVar5 = 0x8000000000000000;
      }
      goto LAB_001bd4ed;
    }
    _ZN7uu_uniq29handle_extract_obs_skip_chars17h0678ba5eb79d7842E(&local_80,uVar4,uVar3,local_48);
  }
  else {
    _ZN7uu_uniq30handle_extract_obs_skip_fields17h10397979e7d3d01dE(&local_80,uVar4,uVar3,param_3);
  }
  local_58 = local_70;
  local_68 = local_80;
  uStack_64 = uStack_7c;
  uStack_60 = uStack_78;
  uStack_5c = uStack_74;
LAB_001bd4ed:
                    /* try { // try from 001bd4ed to 001bd502 has its CatchHandler @ 001bd5d9 */
  _ZN7uu_uniq24handle_preceding_options17h9f64aa70978a6427E(uVar4,uVar3,local_40,local_38);
  param_1[2] = local_58;
  *(undefined4 *)param_1 = local_68;
  *(undefined4 *)((long)param_1 + 4) = uStack_64;
  *(undefined4 *)(param_1 + 1) = uStack_60;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17he3d1ba919720a117E(param_2);
  return param_1;
}