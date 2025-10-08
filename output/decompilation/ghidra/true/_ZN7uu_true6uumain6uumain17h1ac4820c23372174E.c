void _ZN7uu_true6uumain6uumain17h1ac4820c23372174E(undefined8 param_1,undefined8 param_2)

{
  undefined local_330 [16];
  ulong local_320;
  undefined local_318 [56];
  undefined local_2e0 [712];
  
  (*(code *)PTR__ZN7uu_true6uu_app17he71b321b5ffe34f5E_001d0910)(local_2e0);
                    /* try { // try from 00148900 to 00148943 has its CatchHandler @ 00148b58 */
  _ZN4core4iter6traits8iterator8Iterator7collect17ha293f08bc5bc55eeE(local_330,param_1,param_2);
  if (local_320 < 3) {
    _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17hdaf210862eb072adE
              (local_318,local_2e0,local_330);
                    /* try { // try from 00148ae5 to 00148af1 has its CatchHandler @ 00148b58 */
    _ZN4core3ptr132drop_in_place_LT_core__result__Result_LT_clap_builder__parser__matches__arg_matches__ArgMatches_C_clap_builder__error__Error_GT__GT_17h1cf9977cd34d6cd1E
              (local_318);
  }
  else {
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17hfb85af52743ad284E
              (local_330);
  }
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17hc1179e0f6e485db8E
            (local_2e0);
  return;
}