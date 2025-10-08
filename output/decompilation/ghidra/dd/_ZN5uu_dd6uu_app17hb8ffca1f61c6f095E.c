undefined8 _ZN5uu_dd6uu_app17hb8ffca1f61c6f095E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00246778)();
  _ZN12clap_builder7builder7command7Command3new17h0e6efed2cf43459bE(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h459b8bd896839598E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h578c7d5ae71cd95fE(local_830,local_568);
                    /* try { // try from 00192107 to 00192120 has its CatchHandler @ 001921cf */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00246d60)(local_2a0,&DAT_00121e68,0x19)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h741cdbff6d7144b9E
            (local_568,local_830,local_2a0);
  _ZN12clap_builder7builder7command7Command10after_help17h0feff51f7ef87372E(local_830,local_568);
  (*(code *)PTR_memcpy_00246760)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h4edc6ab5d4fbcd36E(local_830);
  _ZN12clap_builder7builder3arg3Arg8num_args17hb129ec34adfb3da9E(local_2a0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h5e5a9fdc468f1f1dE(param_1,local_568,local_2a0);
  return param_1;
}