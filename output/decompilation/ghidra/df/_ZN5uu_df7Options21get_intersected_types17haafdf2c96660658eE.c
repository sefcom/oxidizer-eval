void _ZN5uu_df7Options21get_intersected_types17haafdf2c96660658eE
               (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 *local_48;
  long local_40;
  long local_38;
  
  local_80 = 0;
  uStack_78 = 8;
  local_70 = 0;
  local_38 = param_2 + param_3 * 0x18;
  local_40 = param_2;
  lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f096fbf873cbadcE
                    (&local_40);
  if (lVar2 == 0) {
    local_68 = (undefined4)local_80;
    uStack_64 = local_80._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_5c = uStack_78._4_4_;
  }
  else {
    local_48 = param_1;
    do {
                    /* try { // try from 001c66b0 to 001c66d8 has its CatchHandler @ 001c674a */
      cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5ec19a7369aaf82dE
                        (lVar2,param_4,param_5);
      if (cVar1 != '\0') {
        _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                  (&local_68,lVar2);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8aaba3f21f3b2415E(&local_80,&local_68);
      }
      lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f096fbf873cbadcE
                        (&local_40);
    } while (lVar2 != 0);
    local_68 = (undefined4)local_80;
    uStack_64 = local_80._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_5c = uStack_78._4_4_;
    param_1 = local_48;
    if (local_70 != 0) {
      local_48[2] = local_70;
      *local_48 = local_80;
      local_48[1] = uStack_78;
      return;
    }
  }
  *param_1 = 0x8000000000000000;
  local_58 = local_70;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h25b333f73b84419dE
            (&local_68);
  return;
}