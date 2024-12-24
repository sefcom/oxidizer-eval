undefined8 * __rustcall
uu_base32::base_common::parse_base_cmd_args
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined auVar1 [16];
  long local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  long local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined local_2e8 [712];
  
  (*(code *)PTR_base_app_0024eba0)(local_2e8,param_4,param_5,param_6,param_7);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_320,local_2e8,param_2,param_3);
  if (local_320 == -0x8000000000000000) {
    auVar1 = (*(code *)PTR_from_0024eba8)();
    *(undefined (*) [16])(param_1 + 1) = auVar1;
    *param_1 = 2;
  }
  else {
    local_328 = local_2f0;
    local_338 = local_300;
    uStack_334 = uStack_2fc;
    uStack_330 = uStack_2f8;
    uStack_32c = uStack_2f4;
    local_348 = local_310;
    uStack_344 = uStack_30c;
    uStack_340 = uStack_308;
    uStack_33c = uStack_304;
    local_358 = local_320;
    local_350 = local_318;
                    /* try { // try from 00177ff3 to 00177ffe has its CatchHandler @ 00178019 */
    (*(code *)PTR_from_0024ebb0)(param_1,&local_358);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_358);
  }
  return param_1;
}