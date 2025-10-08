void _ZN6uu_env28check_and_handle_string_args17h6c65360a0996fb8bE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined auVar1 [16];
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [32];
  
  auVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12strip_prefix17h4d1b596244633077E
                     (param_2,param_3,param_4,param_5);
  if (auVar1._0_8_ == 0) {
    _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17h15ea386f8666c9eeE
              (0x8000000000000000,param_4);
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    if (param_7 != 0) {
                    /* try { // try from 00173b29 to 00173bb1 has its CatchHandler @ 00173bf0 */
      (*(code *)PTR__ZN6uu_env16debug_print_args17h9262afd3814fa2d4E_002191f8)
                (*(undefined8 *)(param_7 + 8),*(undefined8 *)(param_7 + 0x10));
    }
    (*(code *)PTR__ZN6uu_env19parse_args_from_str17h7321538c7ee458d0E_00219598)
              (&local_80,auVar1._0_8_,auVar1._8_8_);
    if (local_80 == -0x8000000000000000) {
      *param_1 = local_78;
      param_1[1] = local_70;
    }
    else {
      local_68 = local_80;
      local_60 = local_78;
      local_58 = local_70;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9be0cdd5a10fc421E
                (local_50,&local_68);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_14extend_trusted17hbfaa2ff09f4ba739E(param_6,local_50);
      *(undefined *)(param_1 + 1) = 1;
      *param_1 = 0;
    }
    _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17h15ea386f8666c9eeE
              (0x8000000000000000,param_4);
  }
  _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17h15ea386f8666c9eeE
            (0x8000000000000000,param_2);
  return;
}