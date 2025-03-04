void _ZN6uu_env28check_and_handle_string_args17h2d9cfd9650b812c7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined uVar1;
  undefined auVar2 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [32];
  
  local_b0 = 0x8000000000000000;
  local_98 = 0x8000000000000000;
  local_a8 = param_2;
  local_a0 = param_3;
  local_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 001cd9df to 001cda24 has its CatchHandler @ 001cdab5 */
  auVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_12strip_prefix17hb9f69e5c74ed4ad0E
                     (param_2,param_3,param_4,param_5);
  if (auVar2._0_8_ == 0) {
    uVar1 = 0;
  }
  else {
    if (param_7 != 0) {
      _ZN6uu_env16debug_print_args17hc6b0deb8b4ab006fE
                (*(undefined8 *)(param_7 + 8),*(undefined8 *)(param_7 + 0x10));
    }
    _ZN6uu_env19parse_args_from_str17ha63b8bbceed9831cE(&local_80,auVar2._0_8_,auVar2._8_8_);
    if (local_80 == -0x8000000000000000) {
      *param_1 = local_78;
      param_1[1] = local_70;
                    /* try { // try from 001cda40 to 001cda49 has its CatchHandler @ 001cdab0 */
      _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17hdc3450eb31f9c716E
                (&local_b0);
      goto LAB_001cda94;
    }
    local_68 = local_80;
    local_60 = local_78;
    local_58 = local_70;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hbb87e87a26a4d03dE
              (local_50,&local_68);
    uVar1 = 1;
                    /* try { // try from 001cda74 to 001cda7e has its CatchHandler @ 001cdab5 */
    _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h4dff720d83742dfaE
              (param_6,local_50);
  }
  *(undefined *)(param_1 + 1) = uVar1;
  *param_1 = 0;
                    /* try { // try from 001cda8a to 001cda93 has its CatchHandler @ 001cdab0 */
  _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17hdc3450eb31f9c716E
            (&local_b0);
LAB_001cda94:
  _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17hdc3450eb31f9c716E
            (&local_98);
  return;
}