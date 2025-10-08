void _ZN7uu_stat15quote_file_name17ha37da13d8b9cf7feE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined local_28 [24];
  
  local_48 = param_2;
  local_40 = param_3;
  if (param_4 < 2) {
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h787bb0d29ba882e8E(local_28);
    local_30 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_78 = &PTR_s___00219bc8;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_38;
    local_60 = 1;
                    /* try { // try from 00173d0f to 00173d1d has its CatchHandler @ 00173db8 */
    local_38 = local_28;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(&local_90,&local_78);
    *(undefined8 *)(param_1 + 4) = local_80;
    *param_1 = (undefined4)local_90;
    param_1[1] = local_90._4_4_;
    param_1[2] = (undefined4)uStack_88;
    param_1[3] = uStack_88._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_28);
    return;
  }
  if (param_4 == 2) {
    local_90 = &local_48;
    uStack_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_78 = &PTR_s___00219be8;
    local_70 = 2;
    local_58 = 0;
    local_68 = (undefined **)&local_90;
    local_60 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(param_1,&local_78);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
            ();
  return;
}