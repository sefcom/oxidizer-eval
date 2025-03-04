undefined8
_ZN7uu_uniq29should_extract_obs_skip_chars17h9543cb83474ee9e8E
          (ulong param_1,long param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_RDX;
  uleb128 *puVar5;
  undefined auVar6 [16];
  ulong local_30;
  long local_28;
  
  local_30 = local_30 & 0xffffffff00000000;
  auVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2b,&local_30);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17haa80fb3b22d1f855E
                    (param_1,param_2,auVar6._0_8_,auVar6._8_8_);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    auVar6 = _ZN6uucore4mods5posix13posix_version17hc5e57a413e94e657E();
    uVar4 = 0;
    if ((((auVar6._0_8_ != 0) && (auVar6._8_8_ < 0x30a2a)) && (param_3 == '\0')) &&
       (uVar4 = 0, param_4 == '\0')) {
      local_28 = param_2 + param_1;
      local_30 = param_1;
      lVar3 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h7ba654970d2c1b3eE
                        (&local_30);
      puVar5 = &uleb128_00110000;
      if (lVar3 == 0) {
        iVar2 = _ZN4core3str11validations15next_code_point17h660536d7d7533ae5E(&local_30);
        puVar5 = &uleb128_00110000;
        if (iVar2 != 0) {
          puVar5 = (uleb128 *)(extraout_RDX & 0xffffffff);
        }
      }
      uVar4 = _ZN4core6option15Option_LT_T_GT_6map_or17h5ed9b95e0ff28c57E(puVar5);
    }
  }
  return uVar4;
}