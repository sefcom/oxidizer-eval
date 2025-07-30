void _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(long param_1)

{
  code *pcVar1;
  long local_50;
  long *local_48;
  code *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 == 0) {
    return;
  }
  local_48 = &local_50;
  local_40 = 
  _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h1188510700eda4dcE;
  local_38 = &PTR_s_Error__Something_was_wrong_____0032a6b0;
  local_30 = 2;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
                    /* try { // try from 0015d41c to 0015d42d has its CatchHandler @ 0015d430 */
  local_50 = param_1;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&local_38,&PTR_s_src_sanitizer_rs_0032a6d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}