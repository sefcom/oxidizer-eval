undefined8 _ZN7uu_test6uu_app17hdf268f15ca51f7b3E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [712];
  undefined local_2e0 [712];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e61a0)();
  _ZN12clap_builder7builder7command7Command3new17ha27412a4008333fcE(local_5a8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h9f7ca3910ad8d927E(local_2e0,local_5a8);
  _ZN12clap_builder7builder7command7Command5about17h5919a34b24ebb911E(local_5a8,local_2e0);
                    /* try { // try from 00158565 to 0015857b has its CatchHandler @ 001585b1 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e6268)
            (local_5c0,"test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]",0x2f);
  _ZN12clap_builder7builder7command7Command14override_usage17h9ec33c467833209dE
            (local_2e0,local_5a8,local_5c0);
  _ZN12clap_builder7builder7command7Command10after_help17h811f8143390e0feaE(param_1,local_2e0);
  return param_1;
}