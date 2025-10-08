void _ZN6uu_env10EnvAppData15parse_arguments17h6f93681d78fa23cdE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  long local_330;
  undefined8 local_328;
  undefined8 local_320;
  long local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined local_2e0 [712];
  
  _ZN4core4iter6traits8iterator8Iterator7collect17h1d474555779248d3E(&local_348,param_3,param_4);
                    /* try { // try from 001683d3 to 001683e3 has its CatchHandler @ 001684bb */
  (*(code *)PTR__ZN6uu_env10EnvAppData28process_all_string_arguments17h432dc834c161e0b0E_002191c0)
            (&local_318,param_2,&local_348);
  local_330 = local_318;
  local_328 = local_310;
  local_320 = local_308;
                    /* try { // try from 00168414 to 0016841e has its CatchHandler @ 0016849c */
  (*(code *)PTR__ZN6uu_env6uu_app17hb6fa1a6ab550063bE_002191c8)(local_2e0);
                    /* try { // try from 0016841f to 00168446 has its CatchHandler @ 001684b9 */
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hcbad7fd535816d96E
            (&local_318,local_2e0,&local_330);
  if (local_318 == -0x8000000000000000) {
    auVar1 = _ZN6uu_env10EnvAppData15parse_arguments28__u7b__u7b_closure_u7d__u7d_17h52e3249ef2aa2f4fE
                       ();
    *(undefined (*) [16])(param_1 + 1) = auVar1;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h80dccb4ef18d8427E
              (&local_348);
  }
  else {
    param_1[8] = local_2f0;
    param_1[9] = uStack_2e8;
    param_1[6] = local_300;
    param_1[7] = uStack_2f8;
    param_1[2] = local_338;
    *param_1 = local_348;
    param_1[1] = uStack_340;
    param_1[3] = local_318;
    param_1[4] = local_310;
    param_1[5] = local_308;
  }
  return;
}