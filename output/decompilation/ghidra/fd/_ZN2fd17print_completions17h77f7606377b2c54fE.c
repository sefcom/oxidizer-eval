void _ZN2fd17print_completions17h77f7606377b2c54fE(undefined2 *param_1,undefined param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined local_308 [8];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  char local_2e8 [8];
  char *local_2e0;
  undefined8 local_2d8;
  
  (*(code *)PTR__ZN3std3env4args17h3c7cd0de4b395b7dE_005409e0)(local_2e8);
                    /* try { // try from 002fa700 to 002fa70b has its CatchHandler @ 002fa7ca */
  (*(code *)
    PTR__ZN73__LT_std__env__Args_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0d29c3efeb1bccd1E_005409e8
  )(local_308,local_2e8);
                    /* try { // try from 002fa70c to 002fa775 has its CatchHandler @ 002fa7ee */
  _ZN4core3ptr193drop_in_place_LT_core__iter__adapters__map__Map_LT_std__env__ArgsOs_C__LT_clap_lex__RawArgs_u20_as_u20_core__convert__From_LT_std__env__ArgsOs_GT__GT___from___u7b__u7b_closure_u7d__u7d__GT__GT_17h2eb5350fc587bf98E
            (local_2e8);
  uVar2 = 2;
  lVar1 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_0053ff08)
                    (local_300,local_2f8);
  pcVar3 = "fd";
  if (lVar1 != 0) {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0053ff10)(local_2e8,lVar1);
    uVar2 = 2;
    if (local_2e8[0] == '\0') {
      uVar2 = local_2d8;
    }
    pcVar3 = "fd";
    if (local_2e8[0] == '\0') {
      pcVar3 = local_2e0;
    }
  }
  _ZN70__LT_fd__cli__Opts_u20_as_u20_clap_builder__derive__CommandFactory_GT_7command17h4a26f65572a5acebE
            (local_2e8);
                    /* try { // try from 002fa776 to 002fa7a4 has its CatchHandler @ 002fa7d9 */
  (*(code *)PTR__ZN12clap_builder7builder7command7Command5build17h6e34fc47b5b0ef38E_0053ff58)
            (local_2e8);
  local_2f0 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_005408a8)();
  _ZN13clap_complete3aot9generator8generate17h7d3091434203a28eE
            (param_2,local_2e8,pcVar3,uVar2,&local_2f0);
  *param_1 = 0x200;
                    /* try { // try from 002fa7aa to 002fa7b3 has its CatchHandler @ 002fa7ee */
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h9ab718a9282ab7e1E
            (local_2e8);
  _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h23361293c27a3604E(local_308);
  return;
}