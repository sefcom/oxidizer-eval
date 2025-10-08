undefined8 _ZN6uu_sum6uu_app17h22b6eed10a48226aE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  undefined local_2e8 [700];
  ulong local_2c;
  undefined4 local_24;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e82f8)();
  _ZN12clap_builder7builder7command7Command3new17h97c4a0b3a39f20a4E(local_2e8,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h8103610d5f1b6e09E(local_830,local_2e8);
                    /* try { // try from 00157467 to 00157480 has its CatchHandler @ 001576ce */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e84a0)(local_568,&DAT_00118ebf,0x18)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h3c8cc79ec84dde61E
            (local_2e8,local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17h769caf7dafd9c456E(local_830,local_2e8);
  puVar1 = PTR_memcpy_001e82d8;
  (*(code *)PTR_memcpy_001e82d8)(local_2e8,local_830,700);
  local_2c = local_574 | 0x8000000080;
  local_24 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h5d27add29adba624E(local_830,"file",4);
  _ZN12clap_builder7builder3arg3Arg6action17h61bbb8c3a6df83cdE(local_568,local_830,1);
  (*(code *)puVar1)(local_830,local_568,0x278);
  local_5b8 = local_2f0 | 4;
  local_5b4 = local_2ec;
                    /* try { // try from 00157553 to 00157562 has its CatchHandler @ 001576bc */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf872946301b9bd03E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h4ae0df5834f743b0E(local_830,local_2e8,local_568);
  _ZN12clap_builder7builder3arg3Arg3new17h5d27add29adba624E(local_2e8,&DAT_00118ea5,1);
  _ZN12clap_builder7builder3arg3Arg5short17hf1529a0089b51373E(local_568,local_2e8,0x72);
                    /* try { // try from 001575b1 to 001575cc has its CatchHandler @ 001576ad */
  _ZN12clap_builder7builder3arg3Arg4help17h1ef978ded76be59aE(local_2e8,local_568,&DAT_00118f36,0x32)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h61bbb8c3a6df83cdE(local_568,local_2e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h4ae0df5834f743b0E(local_2e8,local_830,local_568);
  _ZN12clap_builder7builder3arg3Arg3new17h5d27add29adba624E(local_830,&DAT_00117b40,4);
  _ZN12clap_builder7builder3arg3Arg5short17hf1529a0089b51373E(local_568,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h50b43c455dfa0947E(local_830,local_568);
                    /* try { // try from 00157640 to 0015765b has its CatchHandler @ 0015769b */
  _ZN12clap_builder7builder3arg3Arg4help17h1ef978ded76be59aE(local_568,local_830,&DAT_00118f68,0x30)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h61bbb8c3a6df83cdE(local_830,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h4ae0df5834f743b0E(param_1,local_2e8,local_830);
  return param_1;
}