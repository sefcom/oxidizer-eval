void _ZN6zoxide4util11path_to_str17h52f975d9744c5a30E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  char local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  auVar1 = _ZN3std4path95__LT_impl_u20_core__convert__AsRef_LT_std__path__Path_GT__u20_for_u20_alloc__string__String_GT_6as_ref17h38bd28293a94b618E
                     (param_2,param_3);
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0023b588)(local_30,auVar1._0_8_)
  ;
  if (local_30[0] != '\0') {
    local_28 = 0;
  }
  _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h58288445aa8c0a57E
            (param_1,local_28,local_20,auVar1._0_8_,auVar1._8_8_);
  return;
}