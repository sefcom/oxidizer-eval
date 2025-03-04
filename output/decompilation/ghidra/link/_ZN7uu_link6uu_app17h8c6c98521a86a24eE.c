undefined8 _ZN7uu_link6uu_app17h8c6c98521a86a24eE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_818 [3];
  undefined local_800 [584];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [584];
  uint local_28;
  undefined4 local_24;
  
  uVar2 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hafb9acd88b0ae54cE(local_538,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h0479e3c7bd32251bE(local_800,local_538);
  _ZN12clap_builder7builder7command7Command5about17h95e0f927299ffdcbE(local_538,local_800);
                    /* try { // try from 001a8eda to 001a8ef3 has its CatchHandler @ 001a9009 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_270,"{} FILE1 FILE2",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17hef90f16fca87e7e9E
            (local_800,local_538,local_270);
  puVar1 = PTR_memcpy_0020f940;
  (*(code *)PTR_memcpy_0020f940)(local_538,local_800,700);
  local_27c = local_544 | 0x8000000080;
  local_274 = local_53c;
  _ZN12clap_builder7builder3arg3Arg3new17h3f0689815de3b14cE(local_800);
  (*(code *)puVar1)(local_270,local_800,0x248);
  local_28 = local_5b8 | 5;
  local_24 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg8num_args17h77348722a794a375E(local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9c02bbfd7160c2e8E(local_270,local_800);
  local_818[0] = 2;
                    /* try { // try from 001a8fc0 to 001a8fcf has its CatchHandler @ 001a8ff7 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h470e7129040b0519E(local_800,local_270,local_818)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h3215c946dd2bf29eE(param_1,local_538,local_800);
  return param_1;
}