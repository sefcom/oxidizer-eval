undefined8 _ZN8uu_nproc6uu_app17h3da9a545ae06046aE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hceccec51013e9e1cE(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7bb5058d72446d03E(local_538,local_800);
  _ZN12clap_builder7builder7command7Command5about17h90572b7e349fba71E(local_800,local_538);
                    /* try { // try from 001ad667 to 001ad680 has its CatchHandler @ 001ad7f7 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_270,"{} [OPTIONS]...",0xf);
  _ZN12clap_builder7builder7command7Command14override_usage17he65458940b2f4f13E
            (local_538,local_800,local_270);
  (*(code *)PTR_memcpy_00214428)(local_800,local_538,700);
  local_544 = local_27c | 0x8000000080;
  local_53c = local_274;
  _ZN12clap_builder7builder3arg3Arg3new17he198255556941580E(local_538,"all",3);
  _ZN12clap_builder7builder3arg3Arg4long17h2e70cc18bf9510eaE(local_270,local_538,"all",3);
                    /* try { // try from 001ad713 to 001ad72e has its CatchHandler @ 001ad7e8 */
  _ZN12clap_builder7builder3arg3Arg4help17h06a09468789626ebE
            (local_538,local_270,"print the number of cores available to the system",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17hfebe0cf4ee56a176E(local_270,local_538);
  _ZN12clap_builder7builder7command7Command3arg17hefe55eed1b7773c3E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17he198255556941580E(local_800,"ignore",6);
  _ZN12clap_builder7builder3arg3Arg4long17h2e70cc18bf9510eaE(local_270,local_800,"ignore",6);
                    /* try { // try from 001ad793 to 001ad7bd has its CatchHandler @ 001ad806 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h41a3621bea01d5a7E(local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg4help17h06a09468789626ebE
            (local_270,local_800,"ignore up to N cores",0x14);
  _ZN12clap_builder7builder7command7Command3arg17hefe55eed1b7773c3E(param_1,local_538,local_270);
  return param_1;
}