undefined  [16] _ZN6uu_tty6uumain6uumain17h948a3cf0fefd9e14E(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_360;
  undefined8 *local_358;
  undefined *local_350;
  undefined8 local_348;
  undefined8 local_340;
  ulong local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined local_320 [56];
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 **local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  
  (*(code *)PTR__ZN6uu_tty6uu_app17h4ff84cf484ac9a18E_001d8328)(&local_2e8);
  _ZN12clap_builder7builder7command7Command16get_matches_from17h1ee2b3a9a6502d55E
            (local_320,&local_2e8,param_1,param_2);
                    /* try { // try from 0014b98b to 0014ba44 has its CatchHandler @ 0014bb4e */
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001d8330
          )(local_320,
            "silent/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
            ,6);
  if (cVar2 == '\0') {
    local_360 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001d8348)();
    (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001d8338)();
    _ZN3nix6unistd7ttyname17h7ae26345a5b9308fE(&local_338);
    local_348 = local_330;
    local_340 = local_328;
    local_358 = &local_348;
    local_350 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_001d8360
    ;
    local_2e8 = &DAT_001d1ef8;
    local_2e0 = 2;
    uStack_2c8 = 0;
    local_2d8 = &local_358;
    local_2d0 = 1;
                    /* try { // try from 0014bab7 to 0014bac9 has its CatchHandler @ 0014bb31 */
    lVar3 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h3907d576e608aa2aE_001d8358
            )(&local_360,&local_2e8);
    _ZN4core3mem4drop17h9ed9ac10acc51626E(local_338,local_330);
    if (lVar3 != 0) {
LAB_0014bb24:
      (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_001d8220)(3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 0014badd to 0014baf3 has its CatchHandler @ 0014bb41 */
    lVar3 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_001d8368
            )(&local_360);
    if (lVar3 != 0) {
                    /* try { // try from 0014bb1c to 0014bb2e has its CatchHandler @ 0014bb41 */
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h01a2581c66e511fbE
                (lVar3);
      goto LAB_0014bb24;
    }
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h01a2581c66e511fbE
              (0);
                    /* try { // try from 0014baf4 to 0014bafa has its CatchHandler @ 0014bb4e */
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h01a2581c66e511fbE
              (0);
    param_1 = local_338;
  }
  else {
    (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001d8338)();
    cVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h27a830004054efc0E();
    if (cVar2 == '\0') {
      auVar4 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001d8340
               )(1);
      goto LAB_0014bafd;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  auVar4 = auVar4 << 0x40;
LAB_0014bafd:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb869daef5177f7f0E
            (local_320);
  return auVar4;
}