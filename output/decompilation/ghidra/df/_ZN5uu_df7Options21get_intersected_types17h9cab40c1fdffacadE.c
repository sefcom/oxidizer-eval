void _ZN5uu_df7Options21get_intersected_types17h9cab40c1fdffacadE
               (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 *local_38;
  
  local_70 = 0;
  uStack_68 = 8;
  local_60 = 0;
  if (param_3 == 0) {
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 8;
  }
  else {
    param_3 = param_3 * 0x18;
    local_38 = param_1;
    do {
      cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h51781a1e8c4dac70E
                        (param_2,param_4,param_5);
      if (cVar1 != '\0') {
                    /* try { // try from 0016d67c to 0016d699 has its CatchHandler @ 0016d711 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0020a150
        )(&local_58,param_2);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4b8ce3b04144c5a5E
                  (&local_70,&local_58,&PTR_s_src_uu_df_src_df_rs_00203110);
      }
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
    local_48 = local_60;
    local_58 = local_70;
    uStack_50 = uStack_68;
    param_1 = local_38;
    if (local_60 != 0) {
      local_38[2] = local_60;
      *local_38 = local_70;
      local_38[1] = uStack_68;
      return;
    }
  }
  *param_1 = 0x8000000000000000;
  local_70 = local_58;
  uStack_68 = uStack_50;
  local_60 = local_48;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h3cde21800b3ef049E
            (&local_58);
  return;
}