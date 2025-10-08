undefined8 _ZN7uu_sync6uu_app17h8e872b0e08daa914E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4b28)();
  _ZN12clap_builder7builder7command7Command3new17hdc5d20ded2fe5937E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h8d1d4e4adb50ff62E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h20a2fa6cf3bbe39fE(local_830,local_568);
                    /* try { // try from 00155bf7 to 00155c10 has its CatchHandler @ 00155e59 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e4c30)
            (local_2a0,"{} [OPTION]... FILE...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17hbbd0e923b7e75e29E
            (local_568,local_830,local_2a0);
  (*(code *)PTR_memcpy_001e4a80)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17ha8ed694ecb490ecaE(local_568,"file-system",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h03c14f09db810059E(local_2a0,local_568,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hdd63639c55d4e175E(local_568,local_2a0,"file-system",0xb);
                    /* try { // try from 00155cbb to 00155cf7 has its CatchHandler @ 00155e7a */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17heb932e0e3cd0905bE
            (local_2a0,local_568,&DAT_001173ac,4);
  _ZN12clap_builder7builder3arg3Arg4help17h501879552b57ccc6E
            (local_568,local_2a0,"sync the file systems that contain the files (Linux an",0x45);
  _ZN12clap_builder7builder3arg3Arg6action17hf03b42939859e300E(local_2a0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h44b7b3ad517cce1bE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17ha8ed694ecb490ecaE(local_830,&DAT_001173ac,4);
  _ZN12clap_builder7builder3arg3Arg5short17h03c14f09db810059E(local_2a0,local_830,100);
  _ZN12clap_builder7builder3arg3Arg4long17hdd63639c55d4e175E(local_830,local_2a0,&DAT_001173ac,4);
                    /* try { // try from 00155d76 to 00155daf has its CatchHandler @ 00155e68 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17heb932e0e3cd0905bE
            (local_2a0,local_830,"file-system",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h501879552b57ccc6E(local_830,local_2a0,"s",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17hf03b42939859e300E(local_2a0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h44b7b3ad517cce1bE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17ha8ed694ecb490ecaE(local_568,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17hf03b42939859e300E(local_2a0,local_568,1);
                    /* try { // try from 00155e13 to 00155e22 has its CatchHandler @ 00155e4a */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h42a044bdb429c317E(local_568,local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17h44b7b3ad517cce1bE(param_1,local_830,local_568);
  return param_1;
}