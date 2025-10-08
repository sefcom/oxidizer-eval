void _ZN8uu_false6uumain6uumain17hcb16802d9a648bb0E(undefined8 param_1,undefined8 param_2)

{
  undefined local_330 [16];
  ulong local_320;
  undefined local_318 [56];
  undefined local_2e0 [712];
  
  (*(code *)PTR__ZN8uu_false6uu_app17h955a8eeecc3e670dE_001d0900)(local_2e0);
                    /* try { // try from 00148bb0 to 00148bfe has its CatchHandler @ 00148e08 */
  (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001d0908)(1);
  _ZN4core4iter6traits8iterator8Iterator7collect17hfe9bb9461af935eaE(local_330,param_1,param_2);
  if (local_320 < 3) {
    _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h2942e013ee785538E
              (local_318,local_2e0,local_330);
                    /* try { // try from 00148d95 to 00148da1 has its CatchHandler @ 00148e08 */
    _ZN4core3ptr132drop_in_place_LT_core__result__Result_LT_clap_builder__parser__matches__arg_matches__ArgMatches_C_clap_builder__error__Error_GT__GT_17h78746cfd3c587528E
              (local_318);
  }
  else {
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h829eab41c48fa1ffE
              (local_330);
  }
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17hfdf78f6a15e1b650E
            (local_2e0);
  return;
}