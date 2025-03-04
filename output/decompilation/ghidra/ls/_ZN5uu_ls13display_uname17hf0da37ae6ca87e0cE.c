undefined8
_ZN5uu_ls13display_uname17hf0da37ae6ca87e0cE(undefined8 param_1,undefined4 param_2,char param_3)

{
  undefined4 in_EAX;
  undefined8 uVar1;
  long lVar2;
  byte extraout_DL;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if (param_3 != '\0') {
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h7a7a803d5c9f4a1cE
              (param_1,&stack0xfffffffffffffffc);
    return CONCAT44(param_2,in_EAX);
  }
  uStack_64 = param_2;
  uVar1 = _ZN9once_cell4sync17OnceCell_LT_T_GT_15get_or_try_init17h1af99f8cda9de5cbE
                    (_ZN5uu_ls14cached_uid2usr9UID_CACHE17h8e092248b51c5bcaE,
                     _ZN5uu_ls14cached_uid2usr9UID_CACHE17h8e092248b51c5bcaE);
  _ZN3std4sync5mutex14Mutex_LT_T_GT_4lock17h3ee9ddaa26b95c7dE(&uStack_60,uVar1);
  lVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8c461f759fd4cb4aE
                    (&uStack_60,&PTR_DAT_00312920);
  _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17hcc68de885ffbc6faE
            (&uStack_60,lVar2 + 8,param_2);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_40 = uStack_60;
  uVar1 = _ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_14or_insert_with17hbeacd1093d2ecb2cE
                    (&uStack_40,&uStack_64);
  _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
            (param_1,uVar1);
  uVar1 = _ZN4core3ptr128drop_in_place_LT_std__sync__mutex__MutexGuard_LT_std__collections__hash__map__HashMap_LT_u32_C_alloc__string__String_GT__GT__GT_17h81b279b482634f7eE
                    (lVar2,extraout_DL & 1);
  return uVar1;
}