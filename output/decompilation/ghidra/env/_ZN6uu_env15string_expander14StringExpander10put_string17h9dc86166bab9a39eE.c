void _ZN6uu_env15string_expander14StringExpander10put_string17h9dc86166bab9a39eE
               (undefined8 param_1,long param_2)

{
  undefined8 local_28;
  undefined local_20 [16];
  
  local_20 = _ZN98__LT_std__ffi__os_str__OsString_u20_as_u20_core__convert__AsRef_LT_std__ffi__os_str__OsStr_GT__GT_6as_ref17h3aeb49a5fcb4de5cE
                       (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_28 = 0x8000000000000000;
                    /* try { // try from 001d8b65 to 001d8b6f has its CatchHandler @ 001d8b8d */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h0480c74d12e82013E
            (param_1,local_20._0_8_,local_20._8_8_ + local_20._0_8_);
                    /* try { // try from 001d8b70 to 001d8b77 has its CatchHandler @ 001d8b88 */
  _ZN4core3ptr59drop_in_place_LT_alloc__borrow__Cow_LT__u5b_u8_u5d__GT__GT_17hdc3450eb31f9c716E
            (&local_28);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h80807dd825e9bc0cE(param_2);
  return;
}